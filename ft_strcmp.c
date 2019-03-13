/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 18:05:58 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:12:46 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This lexicographically compares the strings s1 and s2
*/

#include "libft.h"

/*
#include "stdio.h"
#include "string.h"
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if ((t_byte)(*s1) - (t_byte)(*s2) != 0)
			return ((t_byte)(*s1) - (t_byte)(*s2));
		s1++;
		s2++;
	}
	return ((t_byte)(*s1) - (t_byte)(*s2));
}

/*
int		main(void)
{
	char str1[] = "hagaZ";
	char str2[] = "haga";

	printf("%d\n", ft_strcmp(str1, str2));
}
*/
