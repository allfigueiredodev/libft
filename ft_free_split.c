/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:54:47 by aperis-p          #+#    #+#             */
/*   Updated: 2023/12/09 22:35:44 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (split[i])
		{
			free(split[i]);
			split[i] = NULL;
		}
		i++;
	}
	if (split)
	{
		free(split);
		split = NULL;
	}
}
