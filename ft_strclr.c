/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:01:00 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:17:59 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Sets every character of the string to the value '\0'.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s)
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
}
