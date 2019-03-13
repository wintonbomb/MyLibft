/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:48:06 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:17:12 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the address of a string that need to be freed with
** free(3), then sets its pointer to NULL
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}
