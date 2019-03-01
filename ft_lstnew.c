/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:55:10 by wharring          #+#    #+#             */
/*   Updated: 2019/02/28 18:59:33 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		if (content)
		{
			node->content_size = content_size;
			node->content = malloc(content_size);
			if (node->content)
				ft_memmove(node->content, content, content_size);
		}
		else
		{
			node->content_size = 0;
			node->content = malloc(0);
			node->content = NULL;
		}
		node->next = NULL;
	}
	return (node);
}
