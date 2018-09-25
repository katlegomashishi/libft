/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 13:03:49 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:44:12 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*temp_1;
	char	*temp_2;
	size_t	index;

	temp_1 = (char *)s1;
	temp_2 = (char *)s2;
	index = 0;
	while (index < n && temp_1[index] == temp_2[index])
		index++;
	if (index == n)
		return (0);
	else
		return ((unsigned char)temp_1[index] - (unsigned char)temp_2[index]);
}
