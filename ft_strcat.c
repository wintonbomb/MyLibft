/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 19:37:33 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:48:22 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Append a copy of the null-terminated string s2 to the end of the string s1
** then add a terminating '\0'. The string s1 must have sufficient space
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	len;
	char	*copy;

	copy = ft_strlen(s1) + s1;
	len = ft_strlen((char *)s2) + 1;
	ft_memcpy(copy, s2, len);
	copy += len - 1;
	*copy = 0;
	return (s1);
}
