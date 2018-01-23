/*
** strstr.c for strstr in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_05
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 09:44:21 2015 Theophane Choisnet
** Last update Mon Oct  5 14:26:24 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	mstrlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (NULL);
  if (to_find == NULL)
    return (str);
  while (*str)
    {
      while (str[i] == to_find[i])
        i++;
      if (i == mstrlen(to_find))
	return (str);
      str++;
    }
  return (NULL);
}
