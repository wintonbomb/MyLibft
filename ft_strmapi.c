/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:00:58 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:22:54 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each charaacter of the string passed as argument
** by giving its index as first argument to create a "fresh" new string
** (with malloc(3)) resulting from the successive applications of f.
*/

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
