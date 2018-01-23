/*
** show_tab.c for show_tab in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 14:52:55 2016 Theophane Choisnet
** Last update Tue Feb  9 16:14:40 2016 Theophane Choisnet
*/

#include	<stdlib.h>
#include	"my.h"

void		show_tab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      i++;
    }
}
