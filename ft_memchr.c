/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 19:19:27 by wharring          #+#    #+#             */
/*   Updated: 2019/02/27 19:21:46 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte *s_ptr;

	s_ptr = (t_byte *)s;
	c = (t_byte)c;
	while (n)
	{
		if (*s_ptr == c)
			return (s_ptr);
		++s_ptr;
		--n;
	}
	return (NULL);
}
