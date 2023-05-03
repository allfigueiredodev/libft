/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:42:16 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/03 15:52:46 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

	#include <stdio.h>

	void ft_bzero(void *s, size_t n);
	int ft_isalnum(int c);
	int isalpha(int c);
	int ft_isascii(int c);
	int ft_isdigit(int c);
	int ft_isprint(int c);
	void *ft_memset(void *s, int c, size_t n);
	char *ft_strchr(char *s, int c);
	size_t ft_strlen(char *s);
	int ft_strncmp(const char *s1, const char *s2, size_t n);
	char *ft_strrchr(char *s, int c);
	int ft_tolower(int c);
	int ft_toupper(int c);	
	void *ft_memchr(const void *s, int c, size_t n);
	void *ft_memcpy(void *dest, const void *src, size_t n);
	void *memmove(void *dest, const void *src, size_t n);
	
#endif