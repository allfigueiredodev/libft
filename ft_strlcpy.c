/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:43:34 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/05 16:07:44 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t length;
	size_t i;
	
	i = 0;

	length = ft_strlen(src);

	if(!dst || !src)
	{
		return (0);
	}

	while(*src && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(length);
}

// int main (void)
// {
// 	char dest[10];
// 	char src[] = "I'm the src!";	
// 	printf("%zu\n", ft_strlcpy(dest, src, 5));
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// }