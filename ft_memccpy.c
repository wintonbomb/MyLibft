/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:45:39 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:43:55 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies bytes from string src to string dst. If the char c occurs in the
** string src, the copy stops and a pointer to the byte after the copy of c
** in the string dst is returned. Otherwise, n bytes are copied, and a NULL
** pointer is returned
*/

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
