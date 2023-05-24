/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:32:16 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/24 16:08:02 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_del_count(char const *s, char c)
{
	size_t		counter;
	char const	*ptr;
	int			i;

	ptr = s;
	counter = 0;
	i = 0;
	while (*(ptr + i))
	{
		while (*(ptr + i) == c && *(ptr + i) != '\0')
			i++;
		while (*(ptr + i) != c && *(ptr + i) != '\0')
			i++;
		if (*(ptr + i) != '\0' || *(ptr + i - 1) != c)
			counter++;
	}
	return (counter);
}

int	ft_btw(char const *s, char c)
{
	int			counter;
	char const	*ptr;
	int			i;

	ptr = s;
	if (*(ptr + 0) == c)
		i = 1;
	else
		i = 0;
	counter = 0;
	while (*(ptr + i))
	{
		if (*(ptr + i) == c)
		{
			return (counter);
		}
		counter ++;
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	char const	*temp;
	int			i;
	int			j;

	result = NULL;
	temp = s;
	i = 0;
	j = 0;
	result = (char **) malloc((ft_del_count(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (temp[i])
	{
		if (temp[i] != c)
		{
			result[j] = malloc((ft_btw(&temp[i], c) + 1) * sizeof(char));
			if (result[j] == NULL)
				return (NULL);
			ft_strlcpy(result[j++], &temp[i], ft_btw(&temp[i], c) + 1);
			i += ft_btw(&temp[i], c);
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

// int main(void)
// {
// 	char **string = ft_split("xssssxggxxggxxuuuuuu", 'x');
// 	int i = 0;
// 	while(i < 5)
// 	{
// 		printf("%s\n", string[i]);
// 		i++;
// 	}	
// }