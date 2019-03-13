/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:47:24 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:41:27 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographically compare the null-term strings s1 and s2. Compares not more
** than n chars. Designed for comparing strings, rather than binary data
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n != 0)
	{
		if ((t_byte)(*s1) - (t_byte)(*s2) != 0)
			return ((t_byte)(*s1) - (t_byte)(*s2));
		++s1;
		++s2;
		--n;
	}
	if (n)
		return ((t_byte)(*s1) - (t_byte)(*s2));
	return (0);
}
