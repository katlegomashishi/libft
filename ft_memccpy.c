/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:07:29 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:35:09 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*temp_1;
	unsigned char	*temp_2;

	index = 0;
	temp_1 = (unsigned char *)dest;
	temp_2 = (unsigned char *)src;
	while (index < n)
	{
		temp_1[index] = temp_2[index];
		if (temp_1[index] == (unsigned char)c)
			return (dest + 1 + index);
		index++;
	}
	return (NULL);
}
