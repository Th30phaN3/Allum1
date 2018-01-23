#include <stdio.h>

#include "allum1.h"

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
      if ((tmp = get_next_line(0)) == NULL)
	return (-1);
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

int		read_line_match(t_allum *alm)
{
  int           ok;
  int           match;
  char		*tmp;

  ok = 0;
  match = 0;
  while (ok != 1)
    {
      if ((match = read_line(alm)) == -1)
	return (-1);
      alm->nb_l = match - 1;
      my_putstr("Matches: ");
      if ((tmp = get_next_line(0)) == NULL)
	return (-1);
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
  return (0);
}

int		my_allum(t_allum *alm)
{
  print_game(alm, 0, 0);
  while (alm->stop == 0)
    {
      my_putstr("\nYour turn:\n");
      if (read_line_match(alm) == -1)
	return (-1);
      print_game(alm, 1, 1);
      if (alm->bd->total_m <= 0)
	alm->stop = 1;
      else
	{
	  my_putstr("\nAI's turn...\n");
	  my_ai(alm);
	  print_game(alm, 1, 2);
	}
      if (alm->stop != 1 && alm->bd->total_m <= 0)
	alm->stop = 2;
    }
  return (endgame(alm));
}

int		main()
{
  t_allum	*alm;

  if (init_allum(&alm, 4) == -1)
    return (my_error("Initialisation failed.\n"));
  my_allum(alm);
  free_alm(alm);
  return (0);
}
