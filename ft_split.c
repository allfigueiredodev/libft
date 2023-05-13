/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:32:16 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/12 21:16:34 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_del_count (const char *s, char c)
{
	size_t counter;

	counter = 0;
	while(*s != c)
	{
		counter++;
		s++;
	}
	return (counter);
}

char **ft_split(char const *s, char c)
{
	char **result;
	const char *ptr;
	int i;
	int j;	
	size_t size;
	
	ptr = s;
	i = 0;
	j = 0;
	result = NULL;
	while(*(s + i))
	{
		size = ft_del_count(s, c);
		if(*(s + i) != c)
		{
			result[j] = (char *) malloc(size * sizeof(char));			
			ft_strlcpy(result[j], s, size);
			j++;
			ptr = s;
		}
		i++;		
	}	
	return(result);		
}

int main(void)
{
	// char *array[] = ft_split("aaabaaabaaa", 'b');
	printf("%s", *ft_split("aaabaaabaaa", 'b'));
}