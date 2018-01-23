/*
** my_show_wordtab.c for my_show_wordtab in /home/choisn_t/Rendu_Piscine/Piscine_C_J08/ex_03
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Wed Oct  7 10:40:12 2015 Theophane Choisnet
** Last update Fri Oct  9 09:29:30 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}
