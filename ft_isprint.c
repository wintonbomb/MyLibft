/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:16:43 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:21:15 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Test to see if it is a printable character
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
