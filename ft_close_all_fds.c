/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_all_fds.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:10:44 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:10:57 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	close_all_fds(int (*fds)[2], int total_fds)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < total_fds)
	{
		close(fds[i][j]);
		close(fds[i][j + 1]);
		i++;
	}
}
