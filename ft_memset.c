/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:24:48 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:39:15 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Fill a byte string with a byte value
*/

#include "libft.h"
#include <stdio.h>

void				*ft_memset(void *str, int c, size_t n)
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

/*
int	main(void)
{
	char str[6] = "Hello";

	printf("\nBeforememset(): %s\n", str);
	memset(str + 1, '.', 2);
	printf("After: %s\n", str);
	return (0);
}
*/