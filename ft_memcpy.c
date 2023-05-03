/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:16:16 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/03 15:45:33 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char * dest_ptr;
	dest_ptr = dest;
	
	while(n--)
	{
		(*(unsigned char *)dest) = (*(unsigned char *)src);
		dest++;
		src++;
	}
	return (dest_ptr);
}

// int main(void)
// {
// 	char src[100] = "I'm a src text, and you know it!";
// 	char dest[100]= "Try replace me";
// 	printf("%s", (char *)ft_memcpy(dest, src, 35));
// }