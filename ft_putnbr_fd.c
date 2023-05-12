/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:44:54 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/12 15:44:16 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
	int temp;
	int  be_positive;
	
	temp = n;
	be_positive = -1;	
	if(temp < 0)
	{
		ft_putchar_fd('-', 1);
		if(n == INT_MIN)
		{
			ft_putchar_fd('2', 1);
			temp = 147483648; 
		}
		else
			temp = temp * be_positive;
	}
	if (temp >= 10)
	{
		ft_putnbr_fd((temp / 10), fd);
	}
	ft_putchar_fd(((temp % 10)+ '0'), fd);
}

// int main (void)
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// }