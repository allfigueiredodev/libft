/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:58:48 by aperis-p          #+#    #+#             */
/*   Updated: 2023/05/10 22:22:41 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int n_counter(int n)
{
	int counter;
	int negative;
	
	counter = 0;
	negative = 0;
	if(n < 0)
		negative = 1;
	while(n != 0)
	{
		n = n / 10;
		counter ++;	 
	}
	if(negative == 1)
		return (counter + 2);
	return (counter + 1);	
}

char *ft_itoa(int n)
{
	char *result;
	int temp;
	int len;
	int sign;
	
	len = n_counter(n);
	sign = -1;
	if(n < 0)
		temp = n * sign;
	else
		temp = n;
	if(!(result = (char*) malloc(n_counter(n) * sizeof(char))))
		return (NULL);
	if(n < 0)
		result[0] = '-';
	result[len - 1] = '\0';	
	while(temp != 0)
	{	
		result[(len--) - 2] = (temp % 10) + '0';
		temp = temp / 10;
	}
	return(result);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(42467));
// 	return(0);
// }