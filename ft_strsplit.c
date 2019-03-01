/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:11:21 by wharring          #+#    #+#             */
/*   Updated: 2019/02/28 21:09:48 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		w_len(const char *str, int i, char c)
{
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	return (i);
}

static int		w_count(const char *str, char c)
{
	int		count;
	int		prev;

	count = 0;
	prev = 0;
	while (*str)
	{
		if (*str == c && prev == 1)
			prev = 0;
		if (*str != c && prev == 0)
		{
			prev = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static void		var_init(int *new_x, int *i, int *y)
{
	*new_x = 0;
	*y = 0;
	*i = 0;
}

static char		**end(char **a, int y)
{
	a[y] = 0;
	return (a);
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
	return (end(a, y));
}
