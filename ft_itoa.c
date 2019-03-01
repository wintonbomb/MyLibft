/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 14:30:39 by wharring          #+#    #+#             */
/*   Updated: 2019/02/28 20:55:47 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_digit_count(long int n, size_t base)
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

long int	ft_abs(long int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
{
	size_t	digits;
	char	*num_string;
	char	*i;
	char	*dig_str;

	dig_str = "-0123456789";
	digits = ft_digit_count(n, 10);
	num_string = ft_strnew(digits);
	if (num_string)
	{
		ft_memset(num_string, dig_str[1], digits);
		i = num_string + digits - 1;
		if (n < 0)
			*num_string = dig_str[0];
		while (n)
		{
			*i = dig_str[1 + (ft_abs(n) % 10)];
			i--;
			n /= (long int)10;
		}
	}
	return (num_string);
}
