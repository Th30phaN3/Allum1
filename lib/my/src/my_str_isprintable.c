/*
** my_str_isprintable.c for my_str_isprintable in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_15
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 11:08:26 2015 Theophane Choisnet
** Last update Mon Oct  5 14:32:18 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	my_str_isprintable(char *str)
{
  int   c;

  c = 0;
  if (str[0] == '\0' || str == NULL)
    return (1);
  while (str[c] != '\0')
    {
      if (str[c] >= 32 && str[c] <= 126)
        c++;
      else
        return (0);
    }
  return (1);
}
