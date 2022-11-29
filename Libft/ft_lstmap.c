/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:58:09 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/29 14:57:44 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*newlst;

	if (del == NULL || lst == NULL || f == NULL)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	node = newlst;
	while (lst->next != NULL)
	{
		lst = lst->next;
		node->next = ft_lstnew(f(lst->content));
		node = node->next;
		if (node == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}	
	}
	node->next = NULL;
	return (newlst);
}
