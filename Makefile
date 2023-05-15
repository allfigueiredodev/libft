CC = gcc
FLAGS = -Wall -Werror -Wextra -g && ./a.out
SRC = ft_split.c ft_strlcpy.c ft_strlen.c

all:
	$(CC) $(SRC) $(FLAGS)

clean:
	rm -rf ./a.out