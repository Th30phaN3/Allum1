/*
** my_isneg.c for my_isneg in /home/choisn_t/Rendu_Piscine/Piscine_C_J03
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Wed Sep 30 09:14:49 2015 Théophane Choisnet
** Last update Wed Sep 30 09:16:02 2015 Théophane Choisnet
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  if (n >= 0)
    my_putchar('P');
  return (0);
}
