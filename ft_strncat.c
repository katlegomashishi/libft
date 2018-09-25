/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 13:25:54 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:04:47 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *str, size_t n)
{
	size_t dest_length;
	size_t index;

	index = 0;
	dest_length = ft_strlen(dest);
	while (str[index] != '\0' && index < n)
	{
		dest[dest_length + index] = str[index];
		index++;
	}
	dest[dest_length + index] = '\0';
	return (dest);
}
