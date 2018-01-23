#include	"allum1.h"

int            my_error(char *s)
{
  int           i;

  i = 0;
  while (s[i])
    write(1, &s[i++], 1);
  return (-1);
}

void		free_alm(t_allum *alm)
{
  free(alm->bd->lines);
  free(alm->bd);
  free(alm);
}

int		endgame(t_allum *alm)
{
  if (alm->stop == 1)
    {
      my_putstr("You lost, too bad..\n");
      return (0);
    }
  my_putstr("I lost.. snif.. but I'll get you next time!!\n");
  return (1);
}

int             *prepare_board(int nb, int *lines)
{
  int           i;
  int           cp;

  i = 0;
  cp = 1;
  while (i <= nb - 1)
    {
      lines[i] = cp;
      cp += 2;
      i++;
    }
  return (lines);
}

int             init_allum(t_allum **alm, int nb)
{
  if ((*alm = (t_allum*)malloc(sizeof(**alm))) == NULL)
    return (-1);
  if (((*alm)->bd = (t_board*)malloc(sizeof(*(*alm)->bd))) == NULL)
    return (-1);
  (*alm)->nb_m = 0;
  (*alm)->nb_l = 0;
  (*alm)->stop = 0;
  (*alm)->bd->total_m = 0;
  if (((*alm)->bd->lines = malloc(sizeof(int) * nb)) == NULL)
    return (-1);
  (*alm)->bd->nb_lines = nb;
  (*alm)->bd->lines = prepare_board(nb, (*alm)->bd->lines);
  (*alm)->bd->total_m = (nb * nb);
  (*alm)->bd->len_lines = (nb * 2) + 1;
  return (0);
}
