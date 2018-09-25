/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:42:26 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:53:10 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *haystack, int c)
{
	int		index;
	char	*temp;
	int		length;

	index = 0;
	length = ft_strlen(haystack) + 1;
	while (length)
	{
		if (haystack[index] == (char)c)
		{
			temp = (char *)(haystack + index);
			return ((char *)temp);
		}
		length--;
		index++;
	}
	return (NULL);
}
