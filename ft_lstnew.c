/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamashis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 14:42:25 by kamashis          #+#    #+#             */
/*   Updated: 2018/09/25 11:32:08 by kamashis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_node;

	if (!(new_node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	else
	{
		if (!(new_node->content = malloc(sizeof(content_size))))
			return (NULL);
		new_node->content = ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;
	}
	new_node->next = NULL;
	return (new_node);
}
