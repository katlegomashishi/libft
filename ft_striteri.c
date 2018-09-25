/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:10:06 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:56:51 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int index;

	index = 0;
	if (s && f)
		while (s[index] != '\0')
		{
			f((unsigned int)index, s + index);
			index++;
		}
}
