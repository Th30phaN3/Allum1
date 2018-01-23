/*
** my_strcat.c for my_strcat in /home/choisn_t/Rendu_Piscine/Piscine_C_J07/ex_02
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Tue Oct  6 09:48:20 2015 Theophane Choisnet
** Last update Thu Nov 26 17:06:09 2015 Theophane Choisnet
*/

#include	<stdlib.h>

char	*my_strcat(char *s1, char *s2)
{
  char	*res;
  int	i;
  int	j;
  int	len;

  if (s1 && s2)
    {
      len = my_strlen(s1) + my_strlen(s2);
      if ((res = malloc(sizeof(char) * (len + 1))) == NULL)
	return (NULL);
      j = 0;
      i = 0;
      while (s1[i])
	res[j++] = s1[i++];
      i = 0;
      while (s2[i])
	res[j++] = s2[i++];
      res[j] = 0;
    }
  else
    return (NULL);
  return (res);
}
