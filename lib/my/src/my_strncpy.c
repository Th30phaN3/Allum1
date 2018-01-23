/*
** my_strncpy.c for my_strncpy in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_03
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 09:30:50 2015 Theophane Choisnet
** Last update Mon Oct  5 14:24:04 2015 Theophane Choisnet
*/

#include	<stdio.h>

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  if (n <= 0 || dest == NULL || src == NULL)
    return (NULL);
  while (i < n && src[i])
    {
      dest[i] = src[i];
      i++;
    }
  if (i < n)
    dest[i] = '\0';
  return (dest);
}
