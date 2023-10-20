/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:30:23 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:31:48 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dclist	*ft_lst_new_node(int content)
{
	t_dclist	*node;

	node = (t_dclist *)malloc(sizeof(t_dclist));
	if (!node)
		return (NULL);
	node->content = content;
	node->prev = node;
	node->next = node;
	return (&*node);
}
