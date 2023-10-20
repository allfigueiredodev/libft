/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dc_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:44:27 by aperis-p          #+#    #+#             */
/*   Updated: 2023/10/19 21:45:46 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_dc_list(t_dclist *stack)
{
	t_dclist	*head;

	if (!stack)
		return ;
	head = stack;
	stack = stack->next;
	if (stack == head)
	{
		ft_printf("%d, \n", head->content);
		return ;
	}
	ft_printf("%d, \n", head->content);
	while (stack->next != head)
	{
		ft_printf("%d, \n", stack->content);
		stack = stack->next;
	}
	ft_printf("%d, \n", stack->content);
}
