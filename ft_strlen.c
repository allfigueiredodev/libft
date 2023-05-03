/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:20:34 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/01 18:35:12 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(char *s)
{
	int counter;
	
	counter = 0;
	while(*s)
	{
		counter++;
		s++;
	}
	return(counter);
}

// int main (void)
// {
// 	printf("%zu", ft_strlen(""));
// }