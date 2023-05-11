CC = gcc
FLAGS = -Wall -Werror -Wextra -g && ./a.out
SRC = ft_itoa.c ft_strlen.c ft_strjoin.c ft_strlcpy.c

all:
	$(CC) $(SRC) $(FLAGS)

clean:
	rm -rf ./a.out    