/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:06:03 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:20:01 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests to see if it is an ascii character
*/

#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	else
		return (0);
}
