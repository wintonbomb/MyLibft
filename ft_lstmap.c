/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:02:54 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:49:48 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates a list lst and applies the function f to each link to create a
** "fresh" list (using (malloc(3)) resulting from the successive applications
** of f. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*iter_old;
	t_list	*iter_new;

	if (lst)
	{
		new_list = f(lst);
		if (!(new_list))
			return (NULL);
		else
		{
			iter_old = lst->next;
			iter_new = new_list;
			while (iter_old)
			{
				iter_new->next = f(iter_old);
				iter_old = iter_old->next;
				iter_new = iter_new->next;
			}
		}
		return (new_list);
	}
	else
		return (NULL);
}
