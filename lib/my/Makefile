##
## EPITECH PROJECT, 2018
## Library : Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

SRC	=	my_putchar.c		\
		my_putstr.c		\
		my_putstr_error.c	\
		my_strlen.c		\
		my_free_array_int.c	\
		my_atoi.c

OBJ	= 	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	 -I../../include/

all:		$(NAME)

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f *~ vg*

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
