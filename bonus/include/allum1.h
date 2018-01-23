#ifndef		_ALLUM1_H_
#define		_ALLUM1_H_

#include	<stdlib.h>
#include	<unistd.h>
#include	<time.h>

#include	"my.h"
#include	"my_printf.h"
#include	"get_next_line.h"

typedef struct	s_board
{
  int		*lines;
  int		total_m;
  int		nb_lines;
  int		len_lines;
}		t_board;

typedef struct	s_allum
{
  int		nb_m;
  int		nb_l;
  int		stop;
  int		ai;
  t_board	*bd;
}		t_allum;

void		print_game(t_allum*, int, int);
int		read_line(t_allum*);
void		read_line_match(t_allum*);
int		*prepare_board(int, int*);
int		init_allum(t_allum**, int, int);
int		my_allum(t_allum*, int);
int		do_it_again(int);
int		more_less_lines();
int		how_many_lines();
int		ask_lines();
int		ask_first();
int		my_error(char*);
void		free_alm(t_allum*);
int		endgame(t_allum*);
void		print_up_down(int);
int		print_space_bf(int, int);
int		print_match(int);
void		print_space_af(int, int, int, int);
void		print_medium(int, int*, int);
int		how_many_lines_left(int*, int);
int		line_with_min(int*, int);
int		line_with_max(int*, int);
int		choose_line_with(int, int*, int);
int		ai_medium(t_board*, int*, int, int);
int		advanced_ai(int*, int, int);
int		only_one_match_per_lines(int*, int);
int		is_gonna_lose(int*, int, int*);
int		ai_hard(t_allum*, int*, int);
void		my_ai(t_allum*);

#endif
