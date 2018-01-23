/*
** my_putnbr_base.c for my_putnbr_base in /home/choisn_t/Rendu_Piscine/Piscine_C_J06/ex_16
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Oct  5 11:17:24 2015 Theophane Choisnet
** Last update Sat Feb 13 21:56:21 2016 Theophane Choisnet
*/

#include	<stdio.h>

int	strl(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	put_one_char(char c)
{
  write(1, &c, 1);
  return (9);
}

int	my_putnbr_base(int nbr, char *base)
{
  int   i;

  if (base == NULL)
    return (0);
  if (nbr == '9')
    return (put_one_char('9'));
  if (nbr < 0)
    {
      nbr = -nbr;
      my_putchar('-');
    }
  i = strl(base);
  if (nbr >= i - 1)
    my_putnbr_base(nbr / i, base);
  my_putchar(base[nbr % i]);
  return (nbr);
}
