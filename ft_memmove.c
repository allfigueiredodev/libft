/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:52:15 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/17 17:40:33 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			temp[100];
	unsigned char	*dest_ptr;
	int				i;
	int				sn;

	dest_ptr = &(*(unsigned char *)dest);
	i = 0;
	sn = n;
	while (sn--)
	{
		temp[i] = (*(unsigned char *)src);
		src++;
		i++;
	}
	i = 0;
	sn = n;
	while (sn--)
	{
		(*(unsigned char *)dest) = temp[i];
		i++;
		dest++;
	}	
	return (dest_ptr);
}

// int main(void)
// {
// 	// char src[100] = "qwertyuiop";
// 	// char dest[100] = "asdfghjkl";
// 	// char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	// char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	// char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
// 	printf("%s\n", (char *)ft_memmove(sResult, sResult, 4));
// 	printf("%s\n", (char *)ft_memmove(sResult + 1, sResult, 2));
// 	printf("%p\n", sResult);
// 	printf("%p\n", sResult + 1);
// 	printf("%d", memcmp(sResult, sResult2, 7));
// }