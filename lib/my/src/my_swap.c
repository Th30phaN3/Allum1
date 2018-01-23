/*
** my_swap.c for my_swap in /home/choisn_t/Rendu_Piscine/Piscine_C_J04
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Thu Oct  1 09:07:45 2015 Théophane Choisnet
** Last update Thu Oct  1 09:45:01 2015 Théophane Choisnet
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
  return (0);
}
