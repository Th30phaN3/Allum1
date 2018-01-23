/*
** my_memalloc.c for my_memalloc in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 19:20:26 2016 Theophane Choisnet
** Last update Fri Jan  8 19:32:27 2016 Theophane Choisnet
*/

#include	<stdlib.h>
#include	"my.h"

void            *my_memalloc(int size)
{
  char          *ptr;

  if (size <= 0)
    return (NULL);
  ptr = my_malloc(size * sizeof(*ptr));
  return ((void*)ptr);
}
