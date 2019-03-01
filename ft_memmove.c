/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 19:28:02 by wharring          #+#    #+#             */
/*   Updated: 2019/02/27 19:32:31 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*src_c;
	char	*dest_c;
	size_t	i;

	i = -1;
	src_c = (char *)src;
	dest_c = (char *)dest;
	if (src_c < dest_c)
		while ((int)(--len) >= 0)
			*(dest_c + len) = *(src_c + len);
	else
		while (++i < len)
			*(dest_c + i) = *(src_c + i);
	return (dest);
}
