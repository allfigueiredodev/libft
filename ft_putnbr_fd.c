/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:44:54 by aperis-p          #+#    #+#             */
/*   Updated: 2023/11/10 18:31:23 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nmbr;
	size_t			len;

	len = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nmbr = n * -1;
	}
	else
		nmbr = n;
	if (nmbr >= 10)
		len += ft_putnbr_fd((nmbr / 10), fd);
	ft_putchar_fd(((nmbr % 10) + '0'), fd);
	return (len);
}
