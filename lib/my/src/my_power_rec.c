/*
** my_power_rec.c for my_power_rec in /home/choisn_t/Piscine_C_J05-tmp
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Thu Oct  1 20:13:18 2015 Théophane Choisnet
** Last update Thu Oct  1 20:15:12 2015 Théophane Choisnet
*/

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  if (power == 1)
    return (nb);
  if (power < 0)
    return (0);
  if (power > 1)
    return (nb * my_power_rec(nb, power - 1));
  else
    return;
}
