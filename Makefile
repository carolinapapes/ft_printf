
#Standard
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
PREQ = ft_printf.h Makefile
SRC = ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c ft_printf.c ft_strlen.c
OBJ = $(SRC:.c=.o)

#Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# TARGETS
all: ${NAME}

$(NAME):  $(OBJ)
	@${AR} $(NAME) $(OBJ)
	@echo "libftprintf.a$(GREEN)			📚completed$(DEF_COLOR)"

%.o: %.c $(PREQ)
	@echo "$<$(GRAY)			⏳compiling$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c -o $@ $< 

clean:
	@rm -f $(OBJ)
	@echo "				$(RED)🧹clean lib$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME)
	
re: fclean all 

.PHONY: all clean fclean re
