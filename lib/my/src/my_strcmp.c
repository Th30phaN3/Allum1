/*
** my_strcmp.c for my_strcmp in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_06
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 10:23:00 2015 Theophane Choisnet
** Last update Fri Jan  8 14:43:40 2016 Theophane Choisnet
*/

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
    i++;
  return (s1[i] - s2[i]);
}
