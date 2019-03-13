/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:08:51 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:40:09 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Append a copy of the null-term string s2 to the end of the null-term strin s1
** then add a terminating '\0'. It appends not more than n chars from s2
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s2_len;
	char	*copy;

	copy = ft_strlen(s1) + s1;
	s2_len = ft_strlen((char *)s2);
	if (s2_len < n)
	{
		*(copy + s2_len) = 0;
		ft_memcpy(copy, s2, s2_len);
	}
	else
	{
		*(copy + n) = 0;
		ft_memcpy(copy, s2, n);
	}
	return (s1);
}
