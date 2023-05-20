/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:56:17 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 12:24:05 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n != 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}	
}

// int main(void)
// {	
// 	char str[] = "qwertyuiop";
// 	ft_bzero(str, 4);
// 	printf("%s\n", str);
// }
