
# My program name and libft var
NAME = minitalk
SERVER = server
CLIENT = client

# Path to the libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_DIR = ./libft

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinc -Isrc -g

# Source files
SRCS_SERVER = server.c
SRCS_CLIENT = client.c

# Object files (with paths accounted for)
OBJS_SERVER = $(SRCS_SERVER:%.c=%.o)
OBJS_CLIENT = $(SRCS_CLIENT:%.c=%.o)

# Default rule to compile the program
all: $(LIBFT) $(SERVER) $(CLIENT)

# Build libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Rule to link the object files into static lib
$(NAME): $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

# Compile server
$(SERVER): $(OBJS_SERVER) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_SERVER) -L$(LIBFT_DIR) -lft -o $(SERVER)

# Compile client
$(CLIENT): $(OBJS_CLIENT) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_CLIENT) -L$(LIBFT_DIR) -lft -o $(CLIENT)

# Rule to compile .c files into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)

# Full clean
fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(SERVER) $(CLIENT)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
