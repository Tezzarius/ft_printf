#include libft/Makefile

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = libftprintf.h

SRC = 	./ft_print_char.c\
		./ft_print_hex.c\
		./ft_print_number.c\
		./ft_print_string.c\
		./ft_print_unsigned_decimal.c\
		./ft_printf.c
	#	./ft_print_pointer.c\#


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs -o $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
