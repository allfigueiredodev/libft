/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:49:37 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/08 22:04:30 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimmed;
	int i;

	i = 0;
	if(!(trimmed = ((char *)malloc(ft_strlen(s1) * sizeof(char)))))
		return(NULL);
	while(*s1)
	{
		if(*s1 == *set)
		{
			s1++;
		}
		else
		{
			trimmed[i] = *s1;
			s1++;	
			i++;
		}
	}
	return (trimmed);	
}

// int main(void)
// {
// 	printf("%s", ft_strtrim("adddddddda", "a"));
// 	return(0);
// }