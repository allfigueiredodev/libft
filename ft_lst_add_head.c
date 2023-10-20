/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_head.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:32:52 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:33:47 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_add_head(t_dclist **alst, t_dclist *new)
{
	t_dclist	*last;
	t_dclist	*head;

	if (!(new))
		return ;
	last = (*alst)->prev;
	head = *alst;
	*alst = new;
	(*alst)->prev = last;
	(*alst)->next = head;
	last->next = *alst;
	head->prev = *alst;
}
