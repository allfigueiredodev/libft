/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:03:32 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/17 20:41:17 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = NULL;
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			ptr = (unsigned char *)s;
			return (ptr);
		}
		s++;
		n--;
	}	
	return (ptr);
}

// int main(void)
// {
// 	// char str[] = "qwertyuiop";
// 	// printf("%s", (char *)ft_memchr(str, 'y', 8));
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 			printf("%s\n", (char *)ft_memchr(s, 0, 0)); // == NULL); showLeaks();
// 	/* 2 */ printf("%s\n", (char *)ft_memchr(s, 0, 1)); // == s); showLeaks();
// 	/* 3 */ printf("%s\n", (char *)ft_memchr(s, 2, 3)); // == s + 2); showLeaks();
// 	/* 4 */ printf("%s\n", (char *)ft_memchr(s, 6, 6)); // == NULL); showLeaks();
// 	/* 5 */ printf("%s\n", (char *)ft_memchr(s, 2 + 256, 3)); // == s + 2); showLeaks(); //Cast check
// }