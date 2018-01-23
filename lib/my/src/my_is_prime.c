/*
** my_is_prime.c for my_is_prime in /home/choisn_t/Rendu_Piscine/Piscine_C_J05
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Oct  2 09:15:32 2015 Théophane Choisnet
** Last update Fri Oct  2 10:15:41 2015 Théophane Choisnet
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb == 0 || nb == 1)
    return (0);
  while (i < nb)
    {
      if ((nb % i) == 0)
	return (0);
      i++;
    }
  return (1);
}
