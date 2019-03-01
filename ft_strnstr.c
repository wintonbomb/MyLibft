/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:05:50 by wharring          #+#    #+#             */
/*   Updated: 2019/02/27 20:37:58 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*static_case1(const char *big, const char *small, size_t len)
{
	char		*ptr_big;
	char		*ptr_small;

	ptr_big = (char *)big;
	ptr_small = (char *)small;
	while (*ptr_big && len)
	{
		if (*ptr_small == 0)
			return (ptr_big - ft_strlen(small));
		if (*ptr_small == *ptr_big)
			ptr_small++;
		else
		{
			ptr_big -= ptr_small - (char *)small;
			len += ptr_small - (char *)small;
			ptr_small = (char *)small;
		}
		len--;
		ptr_big++;
	}
	if (*ptr_small == 0)
		return (ptr_big - ft_strlen(small));
	return (NULL);
}

char			*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	const char	*s1_cpy;
	const char	*s2_cpy;
	size_t		len_cpy;

	s1_cpy = s1;
	s2_cpy = s2;
	len_cpy = len;
	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	while (*s1 && len)
	{
		if (*s1 == s2[i])
			i++;
		else
			i = 0;
		if (s2[i] == '\0')
			return ((char *)(s1 - i + 1));
		s1++;
		len--;
	}
	return (static_case1(s1_cpy, s2_cpy, len_cpy));
	return (NULL);
}
