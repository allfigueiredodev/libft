/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:33:48 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/08 20:16:30 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	int *ptr;
	int i;

	i = 0;
	if(!nmemb || nmemb > SIZE_MAX)
		return(NULL);	
	if(!(ptr = (int *)(malloc(nmemb * size))))
		return(NULL);
	while(nmemb)
	{
		ptr[i] = 0;
		i++;
		nmemb--;
	}
	return(ptr);		
}

// int main(void)
// {
// 	printf("%p", ft_calloc(10, sizeof(size_t)));
// 	return(0);	
// }