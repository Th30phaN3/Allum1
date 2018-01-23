/*
** my_putstr.c for my_putstr in /home/choisn_t/Rendu_Piscine/Piscine_C_J04
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Thu Oct  1 09:12:33 2015 Théophane Choisnet
** Last update Thu Oct  1 09:13:39 2015 Théophane Choisnet
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
  return (0);
}
