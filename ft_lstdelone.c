/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:32:36 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:44:45 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter a link's pointer address and frees the memory of the
** link's content using the function del given as a parameter, then frees the
** link's memory using free(3). The memory of net must not be freed under any
** circumstance. Finally, the pointer to the link that was just freed must be
** set to NULL (quite similar to the function ft_memdel in the mandatory part)
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	(*del)((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
