/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:40:22 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/01 18:51:46 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return(c - 32);
	return(c);
}

// int main(void)
// {
// 	printf("%c\n", ft_toupper('h'));
// 	printf("%c\n", ft_toupper('q'));
// 	printf("%c\n", ft_toupper('K'));
// 	printf("%c\n", ft_toupper('5'));
// 	printf("%c\n", ft_toupper('.'));
// }