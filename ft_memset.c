/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 08:33:20 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:50:41 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;
	char	*temp;

	temp = (char *)s;
	index = 0;
	while (index < n)
	{
		temp[index] = (unsigned char)c;
		index++;
	}
	s = temp;
	return ((void *)s);
}
