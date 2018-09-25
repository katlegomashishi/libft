/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:45:52 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:09:52 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *pointer;

	if (!(pointer = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	pointer = (char *)ft_memset(pointer, '\0', (size + 1));
	return (pointer);
}
