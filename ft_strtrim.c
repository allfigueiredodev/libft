/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:49:37 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/16 14:20:43 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_present(const char *str, const char *set)
{
	while (*set)
	{
		if (*str == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*begin;
	char	*end;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	begin = (char *)&s1[i];
	end = (char *)&s1[len - 1];
	while (ft_is_present(&s1[i++], set))
		begin++;
	while (ft_is_present(&s1[(len--) - 1], set))
		end--;
	len = ft_strlen(begin) - ft_strlen(end);
	trimmed = ((char *)malloc(len * sizeof(char)));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, begin, len + 1);
	return (trimmed);
}

// int main(void)
// {
// 	printf("%s\n", ft_strtrim("axdddadddddax", "ax"));
// 	return(0);
// }