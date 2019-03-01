/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:45:39 by wharring          #+#    #+#             */
/*   Updated: 2019/02/27 16:49:24 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	t_byte *a_ptr;
	t_byte *b_ptr;

	a_ptr = (t_byte *)dest;
	b_ptr = (t_byte *)src;
	c = (t_byte)(c);
	while (n)
	{
		*a_ptr = *b_ptr;
		++a_ptr;
		if (*b_ptr == c)
			return (a_ptr);
		++b_ptr;
		--n;
	}
	return (NULL);
}
