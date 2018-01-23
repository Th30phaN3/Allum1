/*
** my_strlowcase.c for my_strlowcase in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_09
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 10:45:56 2015 Theophane Choisnet
** Last update Mon Oct  5 14:29:38 2015 Theophane Choisnet
*/

#include	<stdio.h>

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (NULL);
  while (*(str + i) > 0)
    {
      if ((*(str + i) <= 'Z' && *(str + i) >= 'A'))
	*(str + i) = *(str + i) + 32;
      i++;
    }
  return (str);
}
