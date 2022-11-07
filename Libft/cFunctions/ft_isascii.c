/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:56:27 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/26 14:07:56 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(char *c)
{
	if ((unsigned char) *c >= 128)
		return (0);

	return (*c);
}

int	main(void)
{
	char	*c;

	c = "a";

	printf("%d", ft_isascii(c));
}
