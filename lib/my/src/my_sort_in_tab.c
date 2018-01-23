/*
** my_sort_in_tab.c for my_sort_in_tab in /home/choisn_t/Rendu_Piscine/Piscine_C_J04
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Thu Oct  1 10:35:13 2015 Théophane Choisnet
** Last update Thu Oct  1 11:16:13 2015 Théophane Choisnet
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	tmp;
  int	i;
  int	check;

  check = 1;
  i = 1;
  while (check == 1)
    {
      check = 0;
      i = 1;
      while (i < size)
	{
	  if (tab[i - 1] > tab[i])
	    {
	      tmp = tab[i - 1];
	      tab[i - 1] = tab[i];
	      tab[i] = tmp;
	      check = 1;
	    }
	  i++;
	}
    }
}
