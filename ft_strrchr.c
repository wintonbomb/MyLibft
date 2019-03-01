/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 19:45:53 by wharring          #+#    #+#             */
/*   Updated: 2019/02/27 19:49:30 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
