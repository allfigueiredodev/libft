/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:37:26 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/19 16:08:56 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	char	*ptr;
	size_t		i;

	ptr = NULL;
	i = 0;
	if (!*little)
		return ((char *)big);
	while (*big && i < len)
	{
		if (*little == *big)
		{
			if(i + ft_strlen(little) > len)
				return(NULL);
			if (ft_strncmp(big, little, ft_strlen(little)) == 0)
			{
				ptr = (char *)big;
				return (ptr);
			}				
		}
		big++;
		i++;
	}
	return (ptr);
}

// int main(void)
// {
// 	char * empty = (char*)"";
// 	// char haystack[30] = "aaabcabcd";
// // // 	// char needle[10] = "aabc";
// // // 	printf("%s\n", ft_strnstr(haystack, "a", -1)); // == haystack /* 3 */ 
// // // 	printf("%s\n", ft_strnstr(haystack, "c", -1)); // == haystack + 4 /* 4 */ 
// 	printf("%s\n", ft_strnstr(empty, "", 0)); // empty // /* 6 */ 
// // printf("%s\n", ft_strnstr(haystack, "aaabc", 5)); // == haystack /* 8 */ 
// // printf("%s\n", ft_strnstr(haystack, "abcd", 9)); // == haystack + 5 /* 10 */ 
// // // 	printf("%s\n", ft_strnstr(haystack, "cd", 8)); // NULL /* 11 */ 
// // // 	printf("%s\n", ft_strnstr(haystack, "a", 1)); // haystack /* 12 mbueno-g */ 
// 	return (0);
// }
