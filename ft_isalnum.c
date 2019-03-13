/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:02:51 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 18:18:12 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for any character to see if it is a # or letter
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
