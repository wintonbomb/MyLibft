/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:29:11 by wharring          #+#    #+#             */
/*   Updated: 2019/02/28 17:31:36 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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