/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 19:45:53 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:46:09 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first ocurrence of c (converted to a char) in the string pointed
** to by s. The terminating null char is considered to be part of the string;
** therefore if c is '\0', the function locate the terminating '\0'.
*/

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*s_cpy;
	int		i;

	i = 0;
	c = (char)c;
	s_cpy = (char *)s;
	while (s_cpy[i])
		i++;
	if (s_cpy[i] == c)
		return (s_cpy + i);
	while (i > 0)
	{
		if (s_cpy[i] == c)
			return (s_cpy + i);
		i--;
	}
	if (s_cpy[i] == c)
		return (s_cpy + i);
	return (NULL);
}
