/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:09:50 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:16:38 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start] && index < len)
	{
		temp[index] = s[start];
		index++;
		start++;
	}
	temp[index] = '\0';
	return (temp);
}
