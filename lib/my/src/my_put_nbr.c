/*
** my_put_nbr.c for my_put_nbr.c in /home/choisn_t/Rendu_Piscine/Piscine_C_J03
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Wed Sep 30 10:24:00 2015 Théophane Choisnet
** Last update Fri Nov 20 08:05:01 2015 Theophane Choisnet
*/

int     aff_exept()
{
  my_putchar('-');
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
  return (0);
}

int     my_put_nbr(int nb)
{
  if ((nb < 0) && (nb != -2147483648))
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb == -2147483648)
    return (aff_exept());
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}
