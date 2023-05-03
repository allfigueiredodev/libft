/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:58:17 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/03 12:30:26 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(char *s, int c)
{
    char *ptr;

    ptr = NULL;
            
    if (c == '\0')
    {
        while(*s != '\0')
        {
            s++;  
        }
        ptr = s;
        return (ptr);
    }
    else
    {      
        while(*s)
        {
            if(*s == c)
            {
                ptr = s;
            } 
            s++;
        }
    }
    return(ptr);
}

// int main(void)
// {
//     printf("%s\n", ft_strrchr("qwertyyyyyytu", 'u'));
//     printf("%s\n", ft_strrchr("qwertyyyyyytu", '\0'));
//     printf("%s\n", ft_strrchr("qwertyyyyyytu", 'x'));
// }