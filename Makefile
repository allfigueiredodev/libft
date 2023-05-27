NAME = libft.a
AR = ar rc
RL = ranlib
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = ft_striteri.c ft_putnbr_fd.c ft_putchar_fd.c ft_strmapi.c \
ft_strlen.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_strdup.c \
ft_strjoin.c ft_substr.c ft_calloc.c ft_atoi.c ft_strlcat.c \
ft_strnstr.c ft_strncmp.c ft_memcmp.c ft_isascii.c ft_strchr.c \
ft_bzero.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memmove.c ft_memchr.c ft_memcpy.c ft_memset.c ft_putendl_fd.c \
ft_putstr_fd.c ft_isalpha.c ft_strrchr.c ft_tolower.c ft_toupper.c \

OBJS = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I ./include

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RL) $(NAME)

all: $(NAME)
	$(CC) $(SRC) $(FLAGS) -g && ./a.out

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# so:
# 	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)
