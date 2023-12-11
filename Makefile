#Makefile for libft

#Compilers
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c ft_toupper.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

INCLUDES = libft.h

#Executable file
NAME = libft.a

#Rules
all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	ar rcs $(NAME) $(OBJS)

#Names of rule ".c.o" or "%.o : %.c" or "$(SRC_DIR)/%.o: $(SRC_DIR)/%.c"
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS_BONUS) $(INCLUDES)
	ar rcs $(NAME) $(OBJS_BONUS)

.PHONY: all clean fclean re

#Guaranty that 'make' is equivalent to 'make all'
.DEFAULT_GOAL := all