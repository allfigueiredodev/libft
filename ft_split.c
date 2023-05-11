/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:32:16 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/10 15:51:08 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_del_count(char const *s, char c)
// {
// 	int counter;
		
// 	counter = 0;
// 	while(*s)
// 	{
// 		if(*s == c)
// 		{
// 			counter++;
// 		}
// 		s++;
// 	}
// 	return (counter);	
// }
int ft_is_delimiter(char const *s, char c)
{

}

// char **ft_split(char const *s, char c)
// {
// 	char **array;
// 	int i;
// 	int j;
// 	char *temp;

// 	i = 0;
// 	j = 0;
// 	if(!(array = ((char *)malloc(ft_del_count(s, c) * sizeof(char*)))))
// 		return (NULL);	
// 	while(*s)
// 	{
// 		if(s[i] == c)
// 		{
// 			array[i] = 
// 		}
// 	}	
// }

int main(void)
{
	// printf("%s", ft_split("abbbbbabbbbabbbbaaaabbba", 'a'));
	printf("%d", ft_is_delimiter("abbbbbabbbbabbbbaaaabbba", 'a'));
}