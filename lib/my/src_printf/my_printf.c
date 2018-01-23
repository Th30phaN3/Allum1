/*
** my_printf.c for my_printf in /home/choisn_t/Rendu_Piscine/PSU_2015_my_printf/src
** 
** Made by Theophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Nov  2 18:46:08 2015 Theophane Choisnet
** Last update Fri Jan  8 18:54:35 2016 Theophane Choisnet
*/

#include	"my_printf.h"

void		take_specifiers(char *str, t_print *p)
{
  while (str[p->i] && is_normal_printf(str[p->i]) != 0)
    {
      if (str[p->i] == '#' || str[p->i] == '+')
	{
	  if (str[p->i] == '+')
	    p->plus = 1;
	  else
	    p->diese = 1;
	}
      if (str[p->i] == 'l' || str[p->i] == 'h')
	{
	  if (str[p->i] == 'l')
	    p->spe = 'l';
	  else
	    p->spe = 'h';
	}
      if (is_ok_printf(str[p->i]) == 1)
	{
	  p->space = 1;
	  skip_space(str, p);
	}
      else
	p->i++;
    }
}

int		put_flags(char *str, t_print *p, va_list arg)
{
  int		k;

  k = 0;
  while (k < 13)
    {
      if (str[p->i] == p->func[k].c)
	{
	  p->func[k].f(arg, p);
	  return (0);
	}
      k++;
    }
  return (-1);
}

int		modulo(char *str, t_print *p, va_list lst_arg)
{
  p->i++;
  if (is_ok_printf(str[p->i]) == 1)
    {
      skip_space(str, p);
      p->space = 1;
    }
  if (str[p->i] == 0)
    return (0);
  if (str[p->i] == '%')
    {
      p->n++;
      my_putchar('%');
      return (0);
    }
  take_specifiers(str, p);
  if ((put_flags(str, p, lst_arg)) == -1)
    put_error(str, p);
  p->plus = 0;
  p->diese = 0;
  p->space = 0;
  p->spe = 'n';
  return (0);
}

t_print		*init_struct()
{
  t_print	*tmp;

  if ((tmp = malloc(sizeof(*tmp))) == NULL)
    return (NULL);
  tmp->i = 0;
  tmp->n = 0;
  tmp->plus = 0;
  tmp->space = 0;
  tmp->diese = 0;
  tmp->spe = 'n';
  init_func(tmp->func);
  return (tmp);
}

int		my_printf(char *str, ...)
{
  va_list	lst_arg;
  t_print	*p;

  if (((p = init_struct()) == NULL) || str == NULL)
    return (0);
  va_start(lst_arg, str);
  while (str[p->i])
    {
      if (str[p->i] == '%')
	modulo(str, p, lst_arg);
      else
	{
	  my_putchar(str[p->i]);
	  p->n++;
	}
      p->plus = 0;
      p->space = 0;
      p->diese = 0;
      p->spe = 'n';
      p->i++;
    }
  va_end(lst_arg);
  return (p->n);
}
