/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:13:23 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/05 20:30:48 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t total;
    size_t dest_size;
    size_t i;
    
    total = (ft_strlen(dst) + 1) + (ft_strlen(src) + 1);
    dest_size = (ft_strlen(dst) + 1);
    i = 0;
    
    if (!dst || !src)
    {
        return (0);
    }
    
    while(*dst != '\0' && i < size - 1)
    {
        *(dst + dest_size) = *src;
        dst++;
        src++;
        i++;
    }
    *dst = '\0';
    return (total);
}

// int main (void)
// {
// 	char dest[40] = "I'm the dest!";
// 	char src[] = "I'm the src!";	
// 	printf("%zu\n", ft_strlcat(dest, src, 30));
// 	// printf("%s\n", src);
// 	// printf("%s\n", dest);
// }
