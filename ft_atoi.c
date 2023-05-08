/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:56:13 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/08 16:43:44 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

int is_valid(char c)
{
	if((c > 32 && c < 43) || (c > 43 && c < 45)
    || (c > 45 && c < 48) || (c > 57))
		return (1);
	return (0);
}

int ft_atoi(const char *nptr)
{
    int result;
    int sign;
    
    result = 0;
    sign = 1;
    if(is_valid(*nptr))
		return(0);
	while((*nptr >= 1 && *nptr <= 32) ||(*nptr == '-' || *nptr == '+'))
	{
		if(*nptr == '-')
			sign = -1;
		nptr++;
	}
	while((*nptr != '\0') && (*nptr >= 48 && *nptr <= 57))
	{
		result = (result * 10) + (*nptr - 48); 
		nptr++;    
	}
	return(result * sign);    
}

// int main(void)
// {
// 	printf("test 0: %d\n", ft_atoi("654")); // = 654
// 	printf("test 1: %d\n", ft_atoi("sgd")); // = 0
// 	printf("test 2: %d\n", ft_atoi("s654g654d")); // = 0
// 	printf("test 3: %d\n", ft_atoi("654g654d")); // = 654
// 	printf("test 4: %d\n", ft_atoi("9    654")); // = 9
// 	printf("test 5: %d\n", ft_atoi("    654")); // = 654
// 	printf("test 6: %d\n", ft_atoi("6.54")); // = 6
// 	printf("test 7: %d\n", ft_atoi(".654")); // = 0
// 	printf("test 8: %d\n", ft_atoi("-.654")); // = 0
// 	printf("test 9: %d\n", ft_atoi("-654")); // = -654
// 	printf("test 10: %d\n", ft_atoi("	654")); // = 654
// 	return(0);
// }