/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:58:17 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/17 22:28:36 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if (!ft_isascii(c))
		return ((char *)s);
	if (c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	else
	{
		while (*s != '\0')
		{
			if (*s == c)
			{
				ptr = (char *)s;
			}
			s++;
		}
		return (ptr);
	}
	return (ptr);
}
