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
	while(*s)
	{
		if(*s == c)
		counter++;
		s++;
	}
	return (counter);
}

int ft_count_btw(char const *s, char c)
{
	int counter;
	char const *ptr;
	int i;

	ptr = s;
	i = 1;

	counter = 0;
	while(*(ptr + i))
	{
		if(*(ptr + i) == c)
		{
			return (counter);
		}
		counter ++;
		i++;
	}
	return (counter);
}

char **ft_split(char const *s, char c)
{
	char **result = NULL;
	int total;
	char const *temp;
	int i;
	int j;

	total = 0;
	temp = s;
	i = 0;
	j = 0;
	result = (char **) malloc(ft_del_count(s, c) * sizeof(char *));
	if(result == NULL)
		return(NULL);
	while(temp[i])
	{
		if(temp[i] == c)
		{
			result[j] = (char *) malloc(ft_count_btw(&temp[i], c) * sizeof(char) + 1);
			if(result[j] == NULL)
				return (NULL);
			ft_strlcpy(result[j], &temp[i], ft_count_btw(&temp[i], c));
			i++;
			j++;
		}
		ft_strlcpy(result[j], &temp[i], ft_count_btw(&temp[i], c));
		i++;
	}
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	return(result);		
}

int main(void)
{
	printf("%s", *ft_split("cccxdddxeeexfff", 'x'));
}