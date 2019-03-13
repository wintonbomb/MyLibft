/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 11:14:14 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:54:15 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the absolute value of n
*/

#include "libft.h"

long int	ft_abs(long int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
