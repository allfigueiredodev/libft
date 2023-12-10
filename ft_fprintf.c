/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:04:35 by brunrodr          #+#    #+#             */
/*   Updated: 2023/12/09 22:36:59 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list	args;
	size_t	length;

	length = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				length += ft_putstr_fd(va_arg(args, char *), fd);
			else if (*format == 'd')
				length += ft_putnbr_fd(va_arg(args, int), fd);
			else if (*format == 'c')
				length += ft_putchar_fd(va_arg(args, int), fd);
			else
				length += ft_putstr_fd("ERROR", fd);
		}
		else
			length += ft_putchar_fd(*format, fd);
		format++;
	}
	va_end(args);
	return (length);
}
