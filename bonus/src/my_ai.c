#include	"allum1.h"

int		advanced_ai(int *lines, int total, int nb_lines)
{
  int		i;
  int		nb;

  nb = 0;
  i = 0;
  if (total > 0)
    {
      i = total % 4;
      if (i == 0)
        i = 2;
      if ((total - i) == 4 || (i == total && total > 1))
        i--;
      while (nb < nb_lines)
        {
          if (i <= lines[nb])
            return (i);
          nb++;
        }
    }
  return (i);
}

int		ai_medium(t_board *bd, int *line, int match, int opt)
{
  int		nb;
  int		max;

  if (how_many_lines_left(bd->lines, bd->nb_lines) == 2)
    {
      max = line_with_max(bd->lines, bd->nb_lines);
      *line = choose_line_with(max, bd->lines, bd->nb_lines);
      nb = line_with_min(bd->lines, bd->nb_lines);
      if ((nb = line_with_min(bd->lines, bd->nb_lines)) == 1)
	match = bd->lines[*line];
      else
	{
	  if (bd->lines[*line] > 2)
	    match = bd->lines[*line] - 2;
	  else
	    match = bd->lines[*line] - 1;
	}
      return (match);
    }
  if (opt == 1)
    match = advanced_ai(bd->lines, bd->total_m, bd->nb_lines);
  else
    if (match >= bd->lines[*line])
      match -= 1;
  return (match);
}

int		is_gonna_lose(int *lines, int nb, int *line)
{
  int		tmp;
  int		nb_one;

  tmp = lines[*line];
  lines[*line] = 0;
  if ((nb_one = only_one_match_per_lines(lines, nb)) > -1)
    {
      if (nb_one % 2 != 0)
	{
	  lines[*line] = tmp;
	  return (1);
	}
    }
  lines[*line] = tmp;
  return (-1);
}

int		ai_hard(t_allum *alm, int *line, int match)
{
  int		nb;

  if ((nb = how_many_lines_left(alm->bd->lines, alm->bd->nb_lines)) <= 7)
    {
      match = ai_medium(alm->bd, line, match, 1);
      if (is_gonna_lose(alm->bd->lines, alm->bd->nb_lines, line) == 1)
	match++;
    }
  else
    {
      match = line_with_max(alm->bd->lines, alm->bd->nb_lines);
      *line = choose_line_with(match, alm->bd->lines, alm->bd->nb_lines);
    }
  return (match);
}

void		my_ai(t_allum *alm)
{
  int		lchoice;
  int		mchoice;

  srand(time(NULL));
  lchoice = 0;
  mchoice = 1;
  while (alm->bd->lines[lchoice] <= 0)
    lchoice = rand() % alm->bd->nb_lines;
  mchoice = (rand() % alm->bd->lines[lchoice]) + 1;
  if (alm->ai == 1)
    mchoice = ai_medium(alm->bd, &lchoice, mchoice, 0);
  if (alm->ai == 2)
    mchoice = ai_hard(alm, &lchoice, mchoice);
  alm->nb_l = lchoice;
  if (mchoice > alm->bd->lines[lchoice])
    mchoice = alm->bd->lines[lchoice];
  if (mchoice <= 0)
    mchoice = 1;
  alm->nb_m = mchoice;
}
