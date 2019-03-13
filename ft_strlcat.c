/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 14:42:29 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:37:20 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy and concatenate strings with the same input parameters and output
** result
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	char	*i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len < size)
	{
		i = dst + dst_len;
		ft_bzero(i, size - dst_len);
		ft_memcpy(i, src, size - dst_len - 1);
		return (dst_len + src_len);
	}
	return (size + src_len);
}
