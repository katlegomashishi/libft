/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 08:25:29 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:21:29 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_spaces(const char *str)
{
	int	index;

	index = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
			str[index] == '\f' || str[index] == '\v' || str[index] == '\r')
		index++;
	return (index);
}

int				ft_atoi(const char *str)
{
	int		number;
	int		index;
	int		negative;

	index = ft_spaces(str);
	number = 0;
	negative = 0;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + str[index] - '0';
		index++;
	}
	if (negative)
		return (-number);
	else
		return (number);
}
