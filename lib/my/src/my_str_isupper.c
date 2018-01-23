/*
** my_str_isupper.c for my_str_isupper in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_14
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 11:05:05 2015 Theophane Choisnet
** Last update Mon Oct  5 14:32:01 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	my_str_isupper(char *str)
{
  int   c;

  c = 0;
  if (str[0] == '\0' || str == NULL)
    return (1);
  while (str[c])
    {
      if (str[c] >= 'A' && str[c] <= 'Z')
        c++;
      else
        return (0);
    }
  return (1);
}
