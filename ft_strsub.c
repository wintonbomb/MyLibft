/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:17:47 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:28:10 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a "fresh" substring from the string
** given as argument. The substring begins at index start and is of size len.
** If start and len aren't refering to a valid substring, the behavior is undef
** If the allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s)
	{
		sub = ft_strnew(len);
		if (sub)
			ft_memmove(sub, s + start, len);
		return (sub);
	}
	else
		return (NULL);
}
