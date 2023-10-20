/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dc_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:18:48 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:20:06 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dc_lstclear(t_dclist **lst)
{
	t_dclist	*ptr;
	t_dclist	*temp;

	if (!(*lst)->next && *lst)
	{
		free(*lst);
		return ;
	}
	ptr = (*lst);
	*lst = (*lst)->next;
	while ((*lst) != ptr)
	{
		temp = (*lst)->next;
		free(*lst);
		(*lst) = temp;
	}
	free(*lst);
	ptr = NULL;
}
