#include	"allum1.h"

void		print_game(t_allum *alm, int first, int opt)
{
  if (first != 0)
    {
      alm->bd->total_m -= alm->nb_m;
      alm->bd->lines[alm->nb_l] -= alm->nb_m;
      if (opt == 1)
	my_putstr("Player ");
      else
	my_putstr("AI ");
      my_putstr("removed ");
      my_put_nbr(alm->nb_m);
      my_putstr(" match(es) from line ");
      my_put_nbr(alm->nb_l + 1);
      my_putchar('\n');
    }
  print_up_down(alm->bd->len_lines);
  print_medium(alm->bd->len_lines, alm->bd->lines, alm->bd->nb_lines);
  print_up_down(alm->bd->len_lines);
}

int		read_line(t_allum *alm)
{
  int           ok;
  int           ln;
  char		*tmp;

  ok = 0;
  ln = 0;
  while (ok != 1)
    {
      my_putstr("Line: ");
      while ((tmp = get_next_line(0)) == NULL)
	tmp = get_next_line(0);
      ln = my_getnbr(tmp);
      if (ln < 0 && ok != -1)
	ok = my_error("Error: invalid input (positive number expected)\n");
      if ((ln > alm->bd->nb_lines || ln < 1) && ln >= 0 && ok != -1)
        ok = my_error("Error: this line is out of range\n");
      if (ok != -1 && alm->bd->lines[ln - 1] <= 0)
	ok = my_error("Error: this line is empty\n");
      ok++;
    }
  return (ln);
}

void		read_line_match(t_allum *alm)
{
  int           ok;
  int           match;
  char		*tmp;

  ok = 0;
  match = 0;
  while (ok != 1)
    {
      alm->nb_l = read_line(alm) - 1;
      my_putstr("Matches: ");
      while ((tmp = get_next_line(0)) == NULL)
	tmp = get_next_line(0);
      match = my_getnbr(tmp);
      if (match == 0 && ok != -1)
	ok = my_error("Error: you have to remove at least one match\n");
      if (match < 0 && ok != -1)
	ok = my_error("Error: invalid input (positive number expected)\n");
      if (match > alm->bd->lines[alm->nb_l] && match != 0 && ok != -1)
        ok = my_error("Error: not enought matches on this line\n");
      ok++;
    }
  alm->nb_m = match;
}

int		my_allum(t_allum *alm, int first)
{
  print_game(alm, 0, 0);
  while (alm->stop == 0)
    {
      if (first == 0)
	{
	  my_putstr("\nYour turn:\n");
	  read_line_match(alm);
	  print_game(alm, 1, 1);
	}
      if (alm->bd->total_m <= 0)
	alm->stop = 1;
      else
	{
	  my_putstr("\nAI's turn...\n");
	  my_ai(alm);
	  print_game(alm, 1, 2);
	}
      if (alm->bd->total_m <= 0 && alm->stop != 1)
	alm->stop = 2;
      first = 0;
    }
  return (endgame(alm));
}

int		main()
{
  t_allum	*alm;
  int		i;
  int		difficult;
  int		nb_lines;
  int		first;

  i = 0;
  difficult = 0;
  while (do_it_again(i) == 0)
    {
      nb_lines = ask_lines();
      if (init_allum(&alm, nb_lines, difficult) == -1)
	return (my_error("Initialisation failed.\n"));
      first = ask_first();
      if (alm->ai == 0)
	my_putstr("-> EASY <-\n");
      if (alm->ai == 1)
	my_putstr("-> MEDIUM <-\n");
      if (alm->ai == 2)
	my_putstr("-> HARD <-\n");
      difficult += my_allum(alm, first);
      free_alm(alm);
      i++;
    }
  return (0);
}
