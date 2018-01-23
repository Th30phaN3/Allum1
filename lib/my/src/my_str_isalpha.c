/*
** my_str_isalpha.c for my_str_isalpha in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_11
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 10:57:40 2015 Theophane Choisnet
** Last update Mon Oct  5 14:30:36 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	my_str_isalpha(char *str)
{
  int   c;

  c = 0;
  if (str[0] == '\0' || str == NULL)
    return (1);
  while (str[c])
    {
      if ((str[c] >= 'a' && str[c] <= 'z') || (str[c] >= 'A' && str[c] <= 'Z'))
        c++;
      else
        return (0);
    }
  return (1);
}
