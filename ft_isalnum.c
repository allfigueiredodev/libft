/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:22:19 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 12:25:54 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%d\n", ft_isalnum('5'));
// 	printf("%d\n", ft_isalnum('e'));
// 	printf("%d\n", ft_isalnum('E'));
// 	printf("%d\n", ft_isalnum(']'));
// }