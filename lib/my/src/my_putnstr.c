/*
** my_putnstr.c for my_putnstr in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 18:54:56 2016 Theophane Choisnet
** Last update Fri Jan  8 18:57:04 2016 Theophane Choisnet
*/

#include	"my.h"

void		my_putnstr(char *str, int len)
{
  int		i;

  i = 0;
  while (str[i] && len > 0)
    {
      my_putchar(str[i++]);
      len--;
    }
}
