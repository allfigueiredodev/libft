/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:22:27 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/02 20:26:12 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char conv;
    char * ptr;
        
    conv = c;
    ptr = s;

        while(n != 0)
        {
            *ptr = conv;
            ptr++;
            n--;
        }
        return(s);
}
// int main(void)
// {
//     char str[] = "qwertyuiop";
//     printf("%s", (char *)ft_memset("str", '#', 4));
// }