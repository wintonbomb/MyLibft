/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 11:11:32 by wharring          #+#    #+#             */
/*   Updated: 2019/03/01 12:25:12 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digit_count(long int n, size_t base)
{
	size_t	num_digits;

	num_digits = 0;
	if (n < 0)
		num_digits++;
	while (n)
	{
		num_digits++;
		n /= (long int)base;
	}
	if (!num_digits)
		return (1);
	return (num_digits);
}
