/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:31:45 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/02 18:20:13 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while ((*s1 != '\0' || *s2 != '\0'))
    {
        while(*s1 == *s2 && n != 0)
        {
            s1++;
            s2++;
            n--;
        } 
        return (*s1 - *s2);       
    }
    return (*s1 - *s2);
}

// int main(void)
// {
//     printf("%d", ft_strncmp("tes", "tes", 0));    
// }