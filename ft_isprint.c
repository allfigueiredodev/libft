/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:03:40 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 12:25:17 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c != 127)
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%d\n", ft_isprint(150));
// 	printf("%d\n", ft_isprint('5'));
// 	printf("%d\n", ft_isprint(5));
// 	printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", ft_isprint(0));
// }