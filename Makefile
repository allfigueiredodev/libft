NAME = libft.a
AR = ar -rcs
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = ft_striteri.c ft_putnbr_fd.c ft_putchar_fd.c ft_strmapi.c \
ft_strlen.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_strdup.c \
ft_strjoin.c ft_substr.c ft_calloc.c ft_atoi.c ft_strlcat.c \
ft_strnstr.c ft_strncmp.c ft_memcmp.c ft_isascii.c ft_strchr.c \
ft_bzero.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memmove.c ft_memchr.c ft_memcpy.c ft_memset.c ft_putendl_fd.c \
ft_putstr_fd.c ft_isalpha.c ft_strrchr.c ft_tolower.c ft_toupper.c \
get_next_line.c get_next_line_utils.c ft_printf_utils.c ft_printf.c \
ft_strcmp.c ft_print_matrix.c ft_atol.c ft_abs.c ft_abs.c ft_close_all_fds.c \
ft_close_unused_fds.c ft_dc_lstclear.c ft_lst_new_node.c ft_lst_add_head.c \
ft_lst_prev_next.c ft_dc_lst_last.c ft_dc_lstsize.c ft_print_dc_list.c ft_isspace.c
SRC_BONUS =  ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
ft_lstnew.c ft_lstsize.c

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(SRC_BONUS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I ./

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re