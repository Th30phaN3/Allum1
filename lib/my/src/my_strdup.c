/*
** my_strdup.c for my_strdup in /home/choisn_t/Rendu_Piscine/Piscine_C_J08/ex_01
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Wed Oct  7 09:21:26 2015 Theophane Choisnet
** Last update Fri Oct  9 09:29:16 2015 Theophane Choisnet
*/

#include	<stdlib.h>
#include	<stdio.h>

char	*my_strdup(char *src)
{
  int   i;
  int   k;
  char  *dest;

  if (src == NULL)
    return (NULL);
  k = my_strlen(src);
  if ((dest = malloc(k * sizeof(char) + 1)) == NULL)
    return (NULL);
  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
