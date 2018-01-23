#include	"allum1.h"

int             how_many_lines_left(int *lines, int nb)
{
  int           i;
  int           res;

  i = 0;
  res = 0;
  while (i < nb)
    {
      if (lines[i] > 0)
        res++;
      i++;
    }
  return (res);
}

int             line_with_min(int *lines, int nb)
{
  int           i;
  int           min;

  i = 0;
  min = 1000;
  while (i < nb)
    {
      if (lines[i] < min && lines[i] > 0)
        min = lines[i];
      i++;
    }
  return (min);
}

int             line_with_max(int *lines, int nb)
{
  int           i;
  int           max;

  i = 0;
  max = 0;
  while (i < nb)
    {
      if (lines[i] > max)
        max = lines[i];
      i++;
    }
  return (max);
}

int             choose_line_with(int nb_m, int *lines, int nb)
{
  int           i;
  int           ok;

  ok = 0;
  i = 0;
  while (i < nb && ok == 0)
    {
      if (lines[i] == nb_m)
	ok = 1;
      i++;
    }
  return (i - 1);
}

int             only_one_match_per_lines(int *lines, int nb)
{
  int           i;
  int           res;

  i = 0;
  res = 0;
  while (i < nb)
    {
      if (lines[i] == 1)
        {
          res++;
          i++;
        }
      else
        return (-1);
    }
  return (res);
}
