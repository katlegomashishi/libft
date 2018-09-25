/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 14:51:20 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 12:02:39 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		length;
	char	*temp;
	int		index;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	index = 0;
	if (!(temp = (char *)malloc(sizeof(char) * length + 1)))
		return (NULL);
	while (s[index] != '\0')
	{
		temp[index] = f(s[index]);
		index++;
	}
	temp[index] = '\0';
	return (temp);
}
