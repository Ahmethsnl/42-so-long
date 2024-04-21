NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -g
AR			= ar -rc

SRC = ft_printf.c ft_printf_keyfunction.c ft_printf_printadress.c ft_printf_printhex.c

OBJ = ft_printf.o ft_printf_keyfunction.o ft_printf_printadress.o ft_printf_printhex.o

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(AR) $(NAME) $(OBJ)
	@echo "ft_printf created"

clean:
	@$(RM) $(OBJ)
	@echo "Cleaned object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "Cleaned object and archive files"

re: fclean all
	@echo "Updated"