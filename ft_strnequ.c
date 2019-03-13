/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:39:47 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:26:45 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2 up to n characters or unitl a
** '\0' is reached. If the 2 strings are identical, the function returns 1,
** or 0 otherwise.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 && s2)
		while (i < n && s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	return (1);
}
