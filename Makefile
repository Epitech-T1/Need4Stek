##
## EPITECH PROJECT, 2021
## n4s
## File description:
## Makefile
##

SRC =	src/main.c \
		src/end.c \
		src/speed.c \
		src/info.c \
		src/get_lidar.c \
		src/adjust_dir.c \

NAME =	ai

OBJ = 	$(SRC:.c=.o)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
