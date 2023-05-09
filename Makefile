CC = gcc
FLAGS = -Wall -Werror -Wextra && ./a.out
SRC = ft_substr.c

all:
	$(CC) $(SRC) $(FLAGS)

clean:
	rm -rf ./a.out    