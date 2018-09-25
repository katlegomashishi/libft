/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 08:37:26 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:11:01 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	length;

	if (*s2 == '\0')
		return ((char *)s1);
	length = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= length)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, length) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
