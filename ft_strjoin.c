/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:11:50 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 13:31:05 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		total_len;
	int		k;

	k = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(total_len * sizeof(char));
	if (!new)
		return (NULL);
	while (*s1 != '\0')
	{
		new[k] = *s1;
		s1++;
		k++;
	}
	while (*s2 != '\0')
	{
		new[k] = *s2;
		s2++;
		k++;
	}
	return (new);
}

// int main(void)
// {
// 	printf("%s", ft_strjoin("<<<<<", ">>>>>"));
// 	return (0);	
// }