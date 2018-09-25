/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:56:27 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:01:18 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *str)
{
	int dest_length;
	int index;

	index = 0;
	dest_length = ft_strlen(dest);
	while (str[index] != '\0')
	{
		dest[dest_length + index] = str[index];
		index++;
	}
	dest[dest_length + index] = '\0';
	return (dest);
}
