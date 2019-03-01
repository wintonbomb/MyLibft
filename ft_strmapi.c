/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:00:58 by wharring          #+#    #+#             */
/*   Updated: 2019/02/28 16:07:31 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	char			*i;
	unsigned int	index;

	if (s)
	{
		new_str = ft_strdup(s);
		index = 0;
		if (new_str)
		{
			i = new_str;
			while (*i)
			{
				*i = (*f)(index, *i);
				i++;
				index++;
			}
		}
		return (new_str);
	}
	else
		return (NULL);
}
