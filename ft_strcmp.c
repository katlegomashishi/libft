/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 09:27:26 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:54:18 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
