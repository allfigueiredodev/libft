/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:01:18 by aperis-p          #+#    #+#             */
/*   Updated: 2023/11/14 20:58:43 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 12
# endif

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_dclist
{
	int				content;
	struct s_dclist	*next;
	struct s_dclist	*prev;
}					t_dclist;

typedef enum e_bool
{
	false,
	true
}					t_bool;

void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memset(void *s, int c, size_t n);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
int					ft_atoi(const char *nptr);
long				ft_atol(const char *str);
char				*ft_strdup(const char *s);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
int					ft_putnbr_fd(int n, int fd);
int					ft_putstr_fd(char *s, int fd);
char				*get_next_line(int fd);
char				*gnl_strjoin(char *s1, char *s2);
size_t				gnl_strlen(const char *s);
char				*gnl_strchr(const char *s, char c);
size_t				gnl_strlcpy(char *dst, const char *src, size_t size);
int					ftprintf_itoa(unsigned long n, int base, int caps);
int					ftprintf_putstr(char *str);
int					ftprintf_putchar(char c);
int					hash_printer(unsigned long n, int base);
int					ft_printf(const char *info, ...);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_print_matrix(char **matrix);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
long				ft_atol(const char *str);
int					ft_abs(int nbr);
void				ft_close_unused_fds(int (*fds)[2], int pid, int total_fds);
void				ft_close_all_fds(int (*fds)[2], int total_fds);
void				ft_dc_lstclear(t_dclist **lst);
t_dclist			*ft_lst_new_node(int content);
void				ft_lst_add_head(t_dclist **alst, t_dclist *new);
void				ft_lst_prev_next(t_dclist **alst, t_dclist *new);
t_dclist			*ft_dc_lst_last(t_dclist *lst);
int					ft_dc_lstsize(t_dclist *lst);
void				ft_print_dc_list(t_dclist *stack);
int					ft_isspace(char c);
int					ft_fprintf(int fd, const char *format, ...);
void				ft_safe_free(void **ptr);
void				ft_free_split(char **split);


#endif