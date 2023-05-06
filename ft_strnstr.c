/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:37:26 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/06 16:52:13 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
	char *ptr;
	int counter;
	int i;
	int j;
	
	ptr = NULL;
	counter = len;
	i = 0;
	j = 0;
	if(*little == '\0')
		return ((char *)big);		
	while(*big && counter > 0)
	{
		if(little[j] == big[i])
		{
			ptr = (char *)&big[i];
			j ++;
		}
		else
		{
			j = 0;
		}
		i++;
		counter--;
	}
	return(ptr);	
}

// int main(void)
// {
// 	char s1[] = "qwerteay";
// 	char s2[] = "";
// 	printf("%s", ft_strnstr(s1, s2, 3));
// 	return (0);
// }