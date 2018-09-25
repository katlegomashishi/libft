/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 10:17:34 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:41:51 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			index;

	temp = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (temp[index] == (unsigned char)c)
		{
			return ((void *)(temp + index));
		}
		index++;
	}
	return (NULL);
}
