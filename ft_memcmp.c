/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:03:17 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/17 21:33:30 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		{
			if ((*(unsigned char *)s1) == (*(unsigned char *)s2))
			{
				s1++;
				s2++;
			}
			else
			{
				return ((*(int *)s1) - (*(int *)s2));
			}
		}
	}
	return (0);
}
