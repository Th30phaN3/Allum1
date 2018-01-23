/*
** my_strncmp.c for my_strncmp in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_07
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 10:41:20 2015 Theophane Choisnet
** Last update Fri Oct  9 16:14:34 2015 Theophane Choisnet
*/

#include	<stdio.h>

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (s1[i] != 0 && s2[i] != 0 && i < n - 1 && s1[i] == s2[i])
    i++;
  return (s1[i] - s2[i]);
}
