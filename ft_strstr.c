/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:40:20 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:47:14 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurrence of the null-term string needle in the
** null-term string haystack
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;

	needle_len = ft_strlen((char *)needle);
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (!(ft_strncmp(haystack, needle, needle_len)))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
