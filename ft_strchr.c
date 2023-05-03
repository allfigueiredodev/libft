/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:59:26 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/01 20:43:34 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(char *s, int c)
{
	char *ptr;
	int i;
	
	i = 0;
	if(c == '\0')
	{
		while (*s != '\0')
		{
			i++;
			s++;
		}
		ptr = s;
		return (ptr);		
	}
	
	while(*s != '\0')
	{			
		if(*s == c)
		{
			ptr = s;
			return (ptr);
		}
		s++;	
	}
	return(NULL);
}

// int main (void)
// {
// 	int letter = '\0';
// 	printf("%s", ft_strchr("qertyu", letter));
// }