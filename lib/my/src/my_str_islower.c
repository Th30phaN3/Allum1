/*
** my_str_islower.c for my_str_islower in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_13
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 11:02:20 2015 Theophane Choisnet
** Last update Mon Oct  5 14:31:48 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	my_str_islower(char *str)
{
  int   c;

  c = 0;
  if (str[0] == '\0' || str == NULL)
    return (1);
  while (str[c])
    {
      if (str[c] >= 'a' && str[c] <= 'z')
        c++;
      else
        return (0);
    }
  return (1);
}
