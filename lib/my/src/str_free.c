/*
** str_free.c for str_free in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 19:01:53 2016 Theophane Choisnet
** Last update Fri Jan  8 19:31:14 2016 Theophane Choisnet
*/

#include	<stdlib.h>
#include	"my.h"

void		str_free(char **str)
{
  if (!str || !*str)
    return;
  free(*str);
  *str = NULL;
}
