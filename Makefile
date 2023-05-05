CC = gcc
FLAGS = -Wall -Werror -Wextra && ./a.out
SRC = ft_strlcpy.c ft_strlen.c

all:
	$(CC) $(SRC) $(FLAGS)

clean:
	rm -rf ./a.out