/*
** my_strncat.c for my_strncat in /home/choisn_t/Rendu_Piscine/Piscine_C_J07/ex_03
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Tue Oct  6 09:53:31 2015 Theophane Choisnet
** Last update Tue Oct  6 09:57:15 2015 Theophane Choisnet
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[j])
    j++;
  while (i < nb)
    {
      dest[j] = src[i];
      i++;
      j++;
    }
  dest[j] = '\0';
  return (dest);
}
