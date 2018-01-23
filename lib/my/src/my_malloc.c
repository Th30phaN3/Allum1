/*
** my_malloc.c for my_malloc in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 19:19:47 2016 Theophane Choisnet
** Last update Fri Jan  8 19:32:09 2016 Theophane Choisnet
*/

#include	<stdlib.h>
#include	"my.h"

char    *my_malloc(int size)
{
  char  *str;
  int   i;

  i = 0;
  if ((str = malloc(size)) == NULL)
    return (NULL);
  while (i < size)
    str[i++] = 0;
  return (str);
}
