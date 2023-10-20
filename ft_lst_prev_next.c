/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_prev_next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:34:58 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:52:18 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_prev_next(t_dclist **alst, t_dclist *new)
{
	t_dclist	*head;

	head = *(alst);
	if (alst)
	{
		if (!(*alst)->content)
			*alst = new;
		else if (head->next == head)
		{
			new->prev = ft_dc_lst_last(*(alst));
			new->next = head;
			head->next = new;
			head->prev = new;
		}
		else
		{
			new->prev = ft_dc_lst_last(*(alst));
			new->prev->next = new;
			new->next = head;
			head->prev = new;
		}
	}
}
