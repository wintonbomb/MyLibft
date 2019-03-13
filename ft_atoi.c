/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:07:47 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:54:26 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts a string into an integer numerical representation. Result *= 10
** adds a digit with each loop.
*/

#include "libft.h"

int					ft_atoi(const char *str)
{
	unsigned int	i;
	int				negative;
	int				result;

	i = 0;
	negative = 0;
	result = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-result);
	return (result);
}
