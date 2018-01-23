/*
** my_square_root.c for my_square_root in /home/choisn_t/Rendu_Piscine/Piscine_C_J05
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Oct  2 09:12:34 2015 Théophane Choisnet
** Last update Fri Oct  2 10:08:42 2015 Théophane Choisnet
*/

int	my_square_root(int nb)
{
  int	sqr;

  sqr = 0;
  while ((sqr * sqr) < nb)
    sqr++;
  if (nb == (sqr * sqr))
    return (sqr);
  else
    return (0);
}
