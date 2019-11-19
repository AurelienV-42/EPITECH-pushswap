##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

SRC	=	src/main.c		\
		src/push_swap.c		\
		src/create_int.c	\
		src/sort/sc.c		\
		src/sort/pa_pb.c	\
		src/sort/rr.c		\
		src/sort/rrr.c


NAME	=	push_swap

OBJ	=	$(SRC:.c=.o)

COMPIL	=	-lmy -Llib/my

CFLAGS	=	-W -Wall -Werror -Wextra -I include/ -g

all:		$(NAME)

$(NAME):	$(OBJ)
		@make -s -C lib/my
		@make clean -s -C lib/my
		@echo "Compile the library"
		@gcc -o $(NAME) $(OBJ) $(COMPIL) $(CFLAGS)
		@make clean

clean:
		@rm -f $(OBJ)
		@rm -rf *~ src/*~ include/*~ lib/*~ lib/my/*~
		@rm -f vgcore*
		@echo "clean"

fclean:		clean
		@make fclean -sC lib/my
		@rm -f $(NAME)
		@echo "fclean"

re:		fclean all

.PHONY:		all clean fclean
