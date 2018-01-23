/*
** my_strcut.c for my_strcut in /home/choisn_t/Rendu/PSU_2015_my_ls/lib/my
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Thu Nov 26 13:35:47 2015 Theophane Choisnet
** Last update Tue Dec  1 14:44:26 2015 Theophane Choisnet
*/

#include	<stdlib.h>

char		*my_strcut(char *src, int beg, int end)
{
  char		*res;
  int		i;
  int		j;

  j = 0;
  i = beg;
  if ((res = malloc(sizeof(char) * (my_strlen(src) + 1))) == NULL)
    return (NULL);
  while (j < end)
    res[j++] = src[i++];
  res[j] = 0;
  return (res);
}
