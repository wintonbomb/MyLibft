/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:55:10 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:43:08 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a "fresh" link. The variables content
** and content_size of the new link are initialized by copy of the parameters
** of the function. If the parameter content is nul, the variable content is
** initialized to NULL and the variable content_size is intialized to 0 even if
** the parameter content_size isn't. The variable next is intialized to NULL.
** If the allocation fails, the function returns NULL.
*/

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
