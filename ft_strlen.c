/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:01:00 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 19:38:09 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Computes the length of the string s that precede the NUL character
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
