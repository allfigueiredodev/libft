/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dc_lst_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:38:22 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:49:57 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dclist	*ft_dc_lst_last(t_dclist *lst)
{
	t_dclist	*head;

	if (!lst)
		return (NULL);
	if (ft_dc_lstsize(lst) == 1)
		return (lst);
	head = lst;
	lst = lst->next;
	while (lst->next != head)
		lst = lst->next;
	return (lst);
}
