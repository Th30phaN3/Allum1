/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/choisn_t/Rendu_Piscine/Piscine_C_J08/ex_04
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Wed Oct  7 10:56:18 2015 Theophane Choisnet
** Last update Wed Jan  6 15:14:53 2016 Theophane Choisnet
*/

#include	<stdio.h>
#include	<stdlib.h>

char	**my_str_to_wordtab(char *src, char sep)
{
  int	i;
  int	j;
  int	k;
  char	**tab;

  i = 0;
  j = 0;
  if ((tab = malloc(my_strlen(src) * sizeof(char*))) == NULL)
    return (NULL);
  while (i < my_strlen(src))
    {
      if ((tab[j] = malloc(my_strlen(src) * sizeof(char*))) == NULL)
        return (NULL);
      k = 0;
      while (src[i] == sep && i < my_strlen(src))
        i++;
      while (src[i] != sep && i < my_strlen(src))
        tab[j][k++] = src[i++];
      tab[j][k] = '\0';
      while (src[i] == sep && i < my_strlen(src))
        i++;
      j++;
    }
  tab[j] = NULL;
  return (tab);
}
