/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:32:16 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/15 20:11:31 by aperis-p         ###   ########.fr       */
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
	if(*(ptr + 0) == c)
		i = 1;
	else
		i = 0;

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
	char const *temp;
	int i;
	int j;

	temp = s;
	i = 0;
	j = 0;
	result = (char **) malloc((ft_del_count(s, c) + 2) * sizeof(char *));
	if(result == NULL)
		return(NULL);
	while(temp[i])
	{
		result[j] = (char *) malloc(ft_count_btw(&temp[i], c) * sizeof(char) + 1);
		if(result[j] == NULL)
			return (NULL);
		if(temp[i] == c)
			i++;
		ft_strlcpy(result[j], &temp[i], ft_count_btw(&temp[i], c) + 1);
		j++;
		i += ft_count_btw(&temp[i], c);
	}
	return(result);		
}

// int main(void)
// {
// 	char **string = ft_split("cccxdddxjjjxlll", 'x');
// 	int i = 0;
// 	while(i < 5)
// 	{
// 		printf("%s\n", string[i]);
		
// 		i++;
// 	}	
// }