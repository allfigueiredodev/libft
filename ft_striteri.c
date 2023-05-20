/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:44:34 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 13:19:56 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_teri_tester(unsigned int i, char *c)
{
	write(1, c, i);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		f(1, s);
		i++;
	}
}

// int main (void)
// {
// 	ft_striteri("qwertyuio", *ft_teri_tester);
// 	return(0);
// }