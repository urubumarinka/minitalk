
# My program name and libft var
SERVER = server
CLIENT = client

# Path to the libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_DIR = ./libft

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# Source files
SRCS_SERVER = server.c
SRCS_CLIENT = client.c

# Object files (with paths accounted for)
OBJS_SERVER = $(SRCS_SERVER:%.c=%.o)
OBJS_CLIENT = $(SRCS_CLIENT:%.c=%.o)

# Object files for the bonus part
NAME_CLIENT_BONUS = client_bonus
BONUS_SRC_CLIENT = bonus/client_bonus.c
BONUS_OBJ_CLIENT = $(BONUS_SRC_CLIENT:.c=.o)

NAME_SERVER_BONUS = server_bonus
BONUS_SRC_SERVER = bonus/server_bonus.c
BONUS_OBJ_SERVER = $(BONUS_SRC_SERVER:.c=.o)


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

# Bonus rules
$(NAME_CLIENT_BONUS): $(BONUS_OBJ_CLIENT)
	$(MAKE) --no-print-directory -C ./libft
	$(CC) $(CFLAGS) $(BONUS_OBJ_CLIENT) $(LIBFT) -o $(NAME_CLIENT_BONUS)

$(NAME_SERVER_BONUS): $(BONUS_OBJ_SERVER)
	$(MAKE) --no-print-directory -C ./libft
	$(CC) $(CFLAGS) $(BONUS_OBJ_SERVER) $(LIBFT) -o $(NAME_SERVER_BONUS)

bonus: $(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)

# Clean
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	rm -f $(BONUS_OBJ_CLIENT) $(BONUS_OBJ_SERVER)

# Full clean
fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(SERVER) $(CLIENT)
	rm -f $(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
