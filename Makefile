CC = gcc
FLAGS = -Wall -Werror -Wextra && ./a.out
SRC = ft_bzero.c

all:
	$(CC) $(SRC) $(FLAGS)

clean:
	rm -rf ./a.out