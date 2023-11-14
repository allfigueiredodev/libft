/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:04:35 by brunrodr          #+#    #+#             */
/*   Updated: 2023/11/10 18:47:10 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list	args;
	size_t length;
	
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
