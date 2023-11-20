/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:30:03 by aperis-p          #+#    #+#             */
/*   Updated: 2023/11/20 15:30:31 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strcspn(const char *str, char *delim1) 
{
    size_t length;

    length = 0;
    while (*str)
    {
        if (*str == *delim1)
            return (length);
        str++;
        length++;
    }
    return (length);
}
