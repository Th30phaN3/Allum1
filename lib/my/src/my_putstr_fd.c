/*
** my_putstr_fd.c for my_putstr_fd in /home/choisn_t/Lib/lib/my/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Fri Jan  8 19:03:46 2016 Theophane Choisnet
** Last update Fri Jan  8 19:05:17 2016 Theophane Choisnet
*/

#include	"my.h"

int		my_putstr_fd(char *str, int fd)
{
  int		i;

  i = 0;
  if (fd < 0)
    return (-1);
  while (str[i])
    write(fd, &str[i++], 1);
  return (0);
}
