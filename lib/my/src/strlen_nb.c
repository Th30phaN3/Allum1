/*
** strlen_nb.c for strlen_nb in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 19:21:30 2016 Theophane Choisnet
** Last update Fri Jan  8 19:23:17 2016 Theophane Choisnet
*/

#include	"my.h"

int		strlen_nb(int nb)
{
  int		i;

  if (!nb)
    return (1);
  i = (nb < 0) ? 1 : 0;
  while (nb)
    {
      i++;
      nb = nb / 10;
    }
  return (i);
}
