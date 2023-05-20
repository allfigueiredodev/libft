/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:39:25 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 12:25:34 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%d\n", ft_isascii(150));
// 	printf("%d\n", ft_isascii('	'));
// 	printf("%d\n", ft_isascii('0'));	
// 	printf("%d\n", ft_isascii('y'));	
// 	printf("%d\n", ft_isascii(7));	
// 	printf("%d\n", ft_isascii('@'));	
// }