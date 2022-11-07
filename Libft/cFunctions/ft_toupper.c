/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:58:36 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/31 19:10:22 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		return(c - 32);
	else
		return(c);	 
}

int main(void)
{
	char c;

	c = '#';
	printf("%c -> %c\n", c, ft_toupper(c));
}