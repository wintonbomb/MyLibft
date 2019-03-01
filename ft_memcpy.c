/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:31:20 by wharring          #+#    #+#             */
/*   Updated: 2019/02/27 16:36:11 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte	*a_ptr;
	t_byte	*b_ptr;

	a_ptr = (t_byte *)dst;
	b_ptr = (t_byte *)src;
	while (n)
	{
		*a_ptr = *b_ptr;
		++a_ptr;
		++b_ptr;
		--n;
	}
	return (dst);
}
