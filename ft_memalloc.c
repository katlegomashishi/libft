/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 15:13:41 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:33:31 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *pointer;

	if (!(pointer = (void *)malloc(sizeof(pointer) * size)) || !size)
		return (NULL);
	pointer = ft_memset(pointer, 0, size);
	return (pointer);
}
