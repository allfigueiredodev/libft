/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allesson <allesson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:56:22 by aperis-p          #+#    #+#             */
/*   Updated: 2023/12/19 09:56:34 by allesson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!(*lst) || !*lst || !del)
		return ;
	while ((*lst))
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
