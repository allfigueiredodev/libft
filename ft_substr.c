/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:23:52 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/08 21:08:34 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	int i;
	int j;
	
	i = start;
	j = 0;
	if(!(sub = (char*) malloc(len * sizeof(char))))
		return NULL;
	while(len && *s != '\0')
	{
		sub[j] = s[i];
		j++;
		i++;
		len--;
	}
	return (sub);
}

// int main(void)
// {
// 	char qwerty[] = "qwertyuiop";
// 	char *tester;

// 	if(!(tester = (char*)malloc( 4 * sizeof(char))))
// 		return (1);
// 	tester = ft_substr(qwerty, 3, 4);
// 	printf("%s", tester);

// 	return(0);
// }