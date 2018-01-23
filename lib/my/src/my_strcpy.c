/*
** my_strcpy.c for my_strcpy in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_02
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 09:18:10 2015 Theophane Choisnet
** Last update Mon Oct  5 14:23:21 2015 Theophane Choisnet
*/

#include	<stdio.h>

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  if (src == NULL || dest == NULL)
    return (NULL);
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
