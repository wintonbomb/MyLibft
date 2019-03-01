/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:24:48 by wharring          #+#    #+#             */
/*   Updated: 2019/02/26 18:55:29 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy;

	i = 0;
	copy = str;
	if (n == 0)
		return (str);
	while (i < n)
	{
		copy[i] = (unsigned char)(c);
		i++;
	}
	return (str);
}
