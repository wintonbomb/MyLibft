/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:55:26 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:21:44 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each charaacter of the string given as argument to
** create a "fresh" new string (with malloc(3)) resulting from the successive
** applications of f.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	char	*i;

	if (s)
	{
		new_str = ft_strdup(s);
		if (new_str)
		{
			i = new_str;
			while (*i)
			{
				*i = (*f)(*i);
				i++;
			}
		}
		return (new_str);
	}
	else
		return (NULL);
}
