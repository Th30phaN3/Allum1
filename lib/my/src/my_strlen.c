/*
** my_strlen.c for my_strlen in /home/choisn_t/Rendu_Piscine/Piscine_C_J04
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Thu Oct  1 09:14:20 2015 Théophane Choisnet
** Last update Thu Oct  1 09:15:31 2015 Théophane Choisnet
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
