/*
** int_to_str.c for int_to_str in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 19:12:56 2016 Theophane Choisnet
** Last update Fri Jan  8 19:19:36 2016 Theophane Choisnet
*/

#include	"my.h"

char		*int_to_str(int nb)
{
  char		*res;
  int		neg;
  int		o_flow;
  int		i;

  i = 0;
  o_flow = (nb == -2147483648) ? 1 : 0;
  nb = (o_flow != 0) ? nb + 1 : nb;
  res = my_malloc(strlen_nb(nb) + 1);
  if (!nb)
    return (my_strcpy(res, "0"));
  neg = (nb < 0) ? 1 : 0;
  if (neg == 1)
    nb = -nb;
  while (nb)
    {
      res[i] = (o_flow && !i) ? nb % 10 + 49 : nb % 10 + 48;
      nb = nb / 10;
      i++;
    }
  res[i] = (neg == 1) ? '-' : '\0';
  return (my_revstr(res));
}
