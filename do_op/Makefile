##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## day10
##

NAME	=	do-op

SRC	=	do_op.c \
                my_getnbr_arg.c

OBJ	=	$(SRC:.c=.o)

LIBFLAG	= 	-L ../lib/my/ -lmy

all	:	$(NAME)

$(NAME) :
		gcc -o $(NAME) $(SRC) $(LIBFLAG)

clean	:
		rm -f $(OBJ)

fclean	: 	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY  :       all clean fclean re
