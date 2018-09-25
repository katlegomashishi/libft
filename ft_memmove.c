/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:42:01 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:50:16 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_1;
	char	*temp_2;
	int		index;

	temp_1 = (char *)dest;
	temp_2 = (char *)src;
	if (temp_1 > temp_2)
	{
		index = n - 1;
		while (index >= 0)
		{
			temp_1[index] = temp_2[index];
			index--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return ((void *)dest);
}
