#include	"allum1.h"

int		do_it_again(int i)
{
  char		*buff;

  buff = NULL;
  if (i == 0)
    return (0);
  my_putstr("\nDo you want to replay ? (y or n)\n");
  while (buff == NULL)
    buff = get_next_line(0);
  if (buff[0] == 'y' && buff[1] == 0)
    {
      free(buff);
      return (0);
    }
  if (buff[0] == 'n' && buff[1] == 0)
    {
      free(buff);
      my_putstr("Thanks for playing !\n");
      return (1);
    }
  free(buff);
  do_it_again(++i);
  return (-1);
}

int		more_less_lines()
{
  char          *buff;

  buff = NULL;
  my_putstr("Do you want to select a number of lines ? (y or n)\n");
  while (buff == NULL)
    buff = get_next_line(0);
  if (buff[0] == 'y' && buff[1] == 0)
    {
      free(buff);
      return (1);
    }
  if (buff[0] == 'n' && buff[1] == 0)
    {
      free(buff);
      return (0);
    }
  free(buff);
  return (more_less_lines());
}

int		how_many_lines()
{
  int		line;
  char		*buff;

  buff = NULL;
  line = 4;
  my_putstr("Choose a number between 3 and 42:\n");
  while (buff == NULL)
    buff = get_next_line(0);
  line = my_getnbr(buff);
  free(buff);
  if (line >= 3 && line <= 42)
    return (line);
  my_putstr("Incorrect number.\n");
  return (how_many_lines());
}

int		ask_lines()
{
  int		res;

  res = 4;
  if (more_less_lines() == 1)
    res = how_many_lines();
  if (res <= 2)
    res = 4;
  return (res);
}

int		ask_first()
{
  char          *buff;

  buff = NULL;
  my_putstr("Do you want to play first ? (y or n)\n");
  while (buff == NULL)
    buff = get_next_line(0);
  if (buff[0] == 'y' && buff[1] == 0)
    {
      free(buff);
      return (0);
    }
  if (buff[0] == 'n' && buff[1] == 0)
    {
      free(buff);
      return (1);
    }
  free(buff);
  return (ask_first());
}
