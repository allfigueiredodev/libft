/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis-p <aperis-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:00:12 by aperis-p          #+#    #+#             */
/*   Updated: 2023/09/24 00:02:56 by aperis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_del_content(void *content)
// {
// 	if(!content)
// 		return ;
// 	free(content);
// }

// void *double_content(void *content)
// {
//     int *new_content = malloc(sizeof(int));
//     if (!new_content)
//         return NULL;
//     *new_content = *(int *)content * 2;
//     return new_content;
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*mapped;

	mapped = NULL;
	if (!lst || !f || !del)
		return (NULL);
	if (!mapped)
		mapped = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&mapped, node);
		lst = lst->next;
	}
	return (mapped);
}
