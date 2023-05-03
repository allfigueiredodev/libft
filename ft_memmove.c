/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:52:15 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/03 17:58:41 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char temp[100];
	unsigned char *dest_ptr;
	dest_ptr = &(*(unsigned char *)dest);
	int i;

	i = 0;	
	while(n--)
	{
		temp[i] = (*(unsigned char *)src);
		(*(unsigned char *)dest) = temp[i];
		src++;
		i++;
		dest++;		
	}
	return(dest_ptr);
}

// int main(void)
// {
// 	char src[100] = "qwertyuiop";
// 	char dest[100] = "asdfghjkl";
// 	printf("%s\n", (char *)ft_memmove(dest, src, 10));
// }