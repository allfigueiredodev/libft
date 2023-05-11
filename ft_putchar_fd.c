/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:10:27 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/11 18:20:30 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main (void)
// {
// 	ft_putchar_fd('a', 1);	
// }