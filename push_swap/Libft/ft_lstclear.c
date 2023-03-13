/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:29:03 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/29 14:46:22 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextlst;

	if (del == NULL)
		return ;
	while (lst && *lst)
	{
		nextlst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextlst;
	}
	*lst = NULL;
}
