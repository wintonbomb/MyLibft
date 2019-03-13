/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:13:20 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:48:18 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts an upper-case letter to lowercase
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
