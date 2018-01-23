/*
** get_next_line.h for get_next_line.h in /home/choisn_t/test_projets/CPE_2014_get_next_line
** 
** Made by Théophane Choisnet
** Login   <choisn_t@epitech.net>
** 
** Started on  Mon Nov 17 11:52:50 2014 Théophane Choisnet
** Last update Fri Jan  8 14:47:08 2016 Theophane Choisnet
*/

#ifndef		GET_NEXT_LINE_H_
# define	GET_NEXT_LINE_H_

#ifndef		READ_SIZE
# define	READ_SIZE (4096)
#endif

#include	<stdlib.h>

char	*get_next_line(const int);
void	*my_realloc(void*, int, int);
int	read_file(const int, char*);

#endif
