/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 19:23:01 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:45:32 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares byte string s1 against byte string s2. Both strings are assumed
** to be n bytes long
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_byte	*s1_ptr;
	t_byte	*s2_ptr;

	s1_ptr = (t_byte *)s1;
	s2_ptr = (t_byte *)s2;
	while (n)
	{
		if (*s1_ptr != *s2_ptr)
			return (*s1_ptr - *s2_ptr);
		++s1_ptr;
		++s2_ptr;
		--n;
	}
	return (0);
}
