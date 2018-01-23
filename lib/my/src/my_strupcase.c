/*
** my_strupcase.c for my_strupcase in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_08
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 10:45:56 2015 Theophane Choisnet
** Last update Mon Oct  5 14:29:02 2015 Theophane Choisnet
*/

#include	<stdio.h>

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (NULL);
  while (*(str + i) > 0)
    {
      if ((*(str + i) <= 'z' && *(str + i) >= 'a'))
	*(str + i) = *(str + i) - 32;
      i++;
    }
  return (str);
}
