/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dc_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:41:25 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:43:41 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dc_lstsize(t_dclist *lst)
{
	int			total;
	t_dclist	*head;

	total = 0;
	if (!lst)
		return (total);
	head = lst;
	lst = lst->next;
	if (lst == head)
		return (1);
	else if (!lst || !lst->next)
		return (total);
	while (lst != head)
	{
		total++;
		lst = lst->next;
	}
	total++;
	lst = head;
	return (total);
}
