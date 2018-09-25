/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:55:08 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:47:53 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*temp_1;
	char	*temp_2;

	index = 0;
	if (n == 0 || dest == src)
		return (dest);
	temp_1 = (char *)dest;
	temp_2 = (char *)src;
	while (index < n)
	{
		temp_1[index] = temp_2[index];
		index++;
	}
	dest = (void *)temp_1;
	return (dest);
}
