/*
** my_str_isnum.c for my_str_isnum in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_12
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 11:00:12 2015 Theophane Choisnet
** Last update Mon Oct  5 14:31:34 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	my_str_isnum(char *str)
{
  int   c;

  c = 0;
  if (str[0] == '\0' || str == NULL)
    return (1);
  while (str[c])
    {
      if (str[c] >= '0' && str[c] <= '9')
        c++;
      else
        return (0);
    }
  return (1);
}
