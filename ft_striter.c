/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:03:15 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:18:56 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each charaacter of the string passed as argument.
** Each character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s)
		{
			(f)(s);
			s++;
		}
	else
		return ;
}
