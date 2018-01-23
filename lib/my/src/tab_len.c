/*
** tab_len.c for tab_len in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 14:51:06 2016 Theophane Choisnet
** Last update Fri Jan  8 14:52:04 2016 Theophane Choisnet
*/

#include	"my.h"

int		tab_len(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}
