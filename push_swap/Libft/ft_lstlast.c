/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:34:45 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/29 13:09:22 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	if (last == NULL)
		return (NULL);
	if (last->next == NULL)
		return (last);
	while (last != NULL)
	{
		if (last->next == NULL)
			return (last);
		last = last->next;
	}
	return (NULL);
}
