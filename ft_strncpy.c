/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:00:41 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:08:38 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t index;

	index = 0;
	while (src[index] != '\0' && n)
	{
		n--;
		dest[index] = src[index];
		index++;
	}
	while (n)
	{
		dest[index] = '\0';
		n--;
		index++;
	}
	return (dest);
}
