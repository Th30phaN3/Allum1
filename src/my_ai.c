#include	"allum1.h"

int		ai_medium(t_board *bd, int *line, int match)
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
  if (match >= bd->lines[*line])
    match -= 1;
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
  mchoice = ai_medium(alm->bd, &lchoice, mchoice);
  alm->nb_l = lchoice;
  if (mchoice > alm->bd->lines[lchoice])
    mchoice = alm->bd->lines[lchoice];
  if (mchoice <= 0)
    mchoice = 1;
  alm->nb_m = mchoice;
}
