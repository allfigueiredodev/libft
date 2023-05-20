/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:53:39 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 14:23:39 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main(void)
// {
// 	printf("%c\n", ft_tolower('h'));
// 	printf("%c\n", ft_tolower('Q'));
// 	printf("%c\n", ft_tolower('K'));
// 	printf("%c\n", ft_tolower('5'));
// 	printf("%c\n", ft_tolower('.'));
// }