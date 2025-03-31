
# My program name and libft var
NAME = minitalk
SERVER = server.c
CLIENT = client.c
# Path to the libft directory
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinc -Isrc -g

# Source files
SRCS =	src/ft_printf.c \
		src/ft_putnbr.c \
		src/ft_putnbr_unsigned.c \
		src/ft_putstr.c \
		src/ft_putadress.c \
		src/ft_puthex.c \
		src/ft_putchar.c \
		src/ft_puthex_min.c

# Object files (with paths accounted for)
OBJS = $(SRCS:%.c=%.o)

# Default rule to compile the program
all: $(LIBFT) $(NAME)

# Build libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Rule to link the object files into static lib
$(NAME): $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

# Rule to compile the source files into object files
# Fix for object paths
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# For make main (ensure main.c is in the same directory)
main: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o main

# Clean rule to remove object files
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

# Fclean rule to remove object files and executable
fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME) main

# Rule to clean and recompile everything
re: fclean all

# Phony targets to prevent conflicts with files
.PHONY: all clean fclean re

