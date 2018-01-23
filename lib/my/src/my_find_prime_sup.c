/*
** my_find_prime_sup.c for my_find_prime_sup in /home/choisn_t/Rendu_Piscine/Piscine_C_J05
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Oct  2 09:20:59 2015 Théophane Choisnet
** Last update Fri Oct  2 09:23:10 2015 Théophane Choisnet
*/

int	my_find_prime_sup(int nb)
{
  int	sup;

  while ((sup = my_is_prime(nb)) == 0)
    nb++;
  return (nb);
}
