CC	= gcc
NAME	= libmy.a
SRC	= my_putchar.c	\
	my_getnbr.c	\
	my_isneg.c	\
	my_put_nbr.c	\
	my_putstr.c	\
	my_strcat.c	\
	my_strcmp.c	\
	my_strcpy.c	\
	my_strdup.c	\
	my_strlen.c	\
	my_strncat.c	\
	my_strncmp.c	\
	my_strncpy.c	\
	my_strstr.c	\
	my_str_to_wordtab.c	\
	my_swap.c
OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
CFLAGS	= -Wall -Werror

$(NAME):	$(OBJ)
		ar r $(NAME) $(OBJ)

LibCompil:	ranlib $(NAME)

all:		$(NAME) LibCompil

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

.PHONY:	all clean fclean

