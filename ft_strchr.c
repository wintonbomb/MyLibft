/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 19:40:54 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:53:17 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** locates the first ocurrence of c (converted to a char) in the string pointed
** to by s. The terminating null character is considered to be part of the
** string; therefore if c is '\0', the functions locate the '\0'
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_cpy;

	s_cpy = (char *)s;
	while (*s_cpy)
	{
		if (*s_cpy == (char)c)
			return (s_cpy);
		s_cpy++;
	}
	if (*s_cpy == c)
		return (s_cpy);
	return (NULL);
}
