/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:55:55 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:34:54 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates sufficient memory for a copy of s1, does the copy, and returns a
** pointer to it. Pointer may be used as an argument to function free.
*/

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen((char *)s1);
	copy = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!(copy))
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
