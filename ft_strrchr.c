/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:13:09 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:13:16 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *haystack, int c)
{
	int length;
	int index;

	length = ft_strlen(haystack) + 1;
	index = length - 1;
	while (index >= 0)
	{
		if (haystack[index] == c)
			return ((char *)(haystack + index));
		index--;
	}
	return (NULL);
}
