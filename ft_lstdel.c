/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:29:11 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:45:52 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a pointer to a link and frees the memory
** of this link and every successors of that link using the functions del and
** free(3). Finally the pointer to the link that was just freed must be set to
** NULL (quite similar to the function ft_memdel from the mandatory part)
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*iter;
	t_list	*prev;

	iter = *alst;
	while (iter)
	{
		del(iter->content, iter->content_size);
		prev = iter;
		iter = iter->next;
		ft_memdel((void **)(&prev));
	}
	*alst = NULL;
}
