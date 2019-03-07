/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_count.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 11:56:09 by wharring          #+#    #+#             */
/*   Updated: 2019/03/01 12:18:18 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		w_count(const char *str, char c)
{
	int		count;
	int		prev;

	count = 0;
	prev = 0;
	while (*str)
	{
		if (*str == c && prev == 1)
			prev = 0;
		if (*str != c && prev == 0)
		{
			prev = 1;
			count++;
		}
		str++;
	}
	return (count);
}
