CC	= gcc

RM	= rm -f

DIR	= ./src/

NAME	= allum1

SRC	=	$(DIR)ask.c	\
		$(DIR)main.c	\
		$(DIR)my_ai.c	\
		$(DIR)next_ai.c	\
		$(DIR)print.c	\
		$(DIR)utils.c

INCLUDE	= -I./include/

CFLAGS	= -W -Wall -Werror -ansi -pedantic $(INCLUDE)
LDFLAGS	= -L../lib/ -lmy

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
