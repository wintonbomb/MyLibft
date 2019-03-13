/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:11:21 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:33:52 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns an array of "fresh" strings (all
** ending with '\0', including the array itself) obtained by spliting s using
** the character c as a delimiter. If the allocation fails the function returns
** NULL. Example: ft_strsplit("*hello*fellow***students*", '*') returns the
** array ["hello", "fellow", "students"].
*/

#include "libft.h"

static void		var_init(int *new_x, int *i, int *y)
{
	*new_x = 0;
	*y = 0;
	*i = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**a;
	int		y;
	int		new_x;
	int		i;
	int		h;

	var_init(&new_x, &i, &y);
	if (!(s) || !(a = (char **)malloc(sizeof(char **) * (w_count(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			h = i;
			if (!(a[y] = (char *)malloc(sizeof(char *) * (w_len(s, i, c)) + 1)))
				return (NULL);
			while (h < (i = w_len(s, i, c)))
				a[y][new_x++] = s[h++];
			a[y++][new_x] = '\0';
			new_x = 0;
		}
	}
	return (ft_end(a, y));
}
