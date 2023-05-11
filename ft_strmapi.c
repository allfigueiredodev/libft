/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:45:17 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/11 17:42:05 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_mapi_func(unsigned int n, char c)
{
	char str;
	
	str = c + n;
	return(str);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;
	
	i = 0;
	str = (char *) malloc(ft_strlen(s) * sizeof(char) + 1);
	if(!str)
		return(NULL);
	if(!s || !f)
		return (NULL);*(str + i) = '\0';
	while(*(s + i))
	{
		*(str + i) = f(1, *s);
		i++;		
	}
	*(str + i) = '\0';
	return(str);	
}

// int main(void)
// {
// 	printf("%s", ft_strmapi("q5w6e9r7t8y9u2i1o0p", *ft_mapi_func));	
// }