/*
** my_revstr.c for my_revstr in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_04
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 09:35:24 2015 Theophane Choisnet
** Last update Tue Oct  6 12:56:14 2015 Theophane Choisnet
*/

#include	<stdio.h>

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  int	tmp;

  if (str == NULL)
    return (NULL);
  i = 0;
  j = my_strlen(str);
  j--;
  while (i <= j)
    {
      tmp = str[i];
      str[i] = str[j];
      str[j] = tmp;
      i++;
      j--;
    }
  return (str);
}
