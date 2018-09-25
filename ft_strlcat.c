/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 12:11:33 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:00:52 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*characters;
	char		*reader;
	size_t		length;

	characters = (char *)ft_memchr(dst, '\0', size);
	if (characters == NULL)
		return (size + ft_strlen(src));
	reader = (char *)src;
	length = (size_t)(characters - dst) + ft_strlen(reader);
	while ((size_t)(characters - dst) < size - 1 && *reader != '\0')
	{
		*characters = *reader;
		characters++;
		reader++;
	}
	*characters = '\0';
	return (length);
}
