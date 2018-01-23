#include	"allum1.h"

void            print_up_down(int len)
{
  int           i;

  i = 0;
  while (i < len)
    {
      my_putchar('*');
      i++;
    }
  my_putchar('\n');
}

int     print_space_bf(int i, int nb)
{
  int   k;
  int   cp;
  int   res;

  cp = 0;
  k = nb - i;
  my_putchar('*');
  res = 1;
  while (cp < k)
    {
      my_putchar(' ');
      cp++;
      res++;
    }
  return (res);
}

int             print_match(int nb)
{
  int           res;

  res = 0;
  while (nb > 0)
    {
      my_putchar('|');
      nb--;
      res++;
    }
  return (res);
}

void            print_space_af(int prt, int len)
{
  while (prt < len - 1)
    {
      my_putchar(' ');
      prt++;
    }
  my_putchar('*');
}

void            print_medium(int len, int *lines, int nb)
{
  int           i;
  int           ok;

  i = 0;
  while (i < nb)
    {
      ok = 0;
      ok = print_space_bf(i, nb - 1);
      ok += print_match(lines[i]);
      print_space_af(ok, len);
      my_putchar('\n');
      i++;
    }
}
