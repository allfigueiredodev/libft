/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:24:14 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/11 18:32:21 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	while(*s)
	{
		write(fd, s, 1);
		s++;		
	}
}

// int main (void)
// {
// 	ft_putstr_fd("qwertyuiop", 1);
// 	return(0);
// }