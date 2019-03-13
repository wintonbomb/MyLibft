/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:12:10 by wharring          #+#    #+#             */
/*   Updated: 2019/03/12 17:16:18 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a "fresh" string ending with '\0'.
** If the allocation fails the function returns NULL
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}
