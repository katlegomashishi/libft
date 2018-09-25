/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 12:09:46 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:25:45 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_length(int n)
{
	int length;

	length = 0;
	if (n < 0)
	{
		n = -n;
		length++;
	}
	length++;
	n /= 10;
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	char	*string;
	int		length;

	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = ft_length(n);
	if (!(string = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	string[length] = '\0';
	if (n < 0)
	{
		n = -n;
		string[0] = '-';
	}
	string[--length] = (n % 10) + 48;
	n /= 10;
	while (n)
	{
		string[--length] = (n % 10) + 48;
		n /= 10;
	}
	return (string);
}
