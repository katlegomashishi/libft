/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 09:50:56 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:55:53 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		index;
	int		length;
	char	*dest;

	length = ft_strlen(src);
	index = -1;
	if (!(dest = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (src[++index] != '\0')
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
