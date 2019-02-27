/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wharring <wharring@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 20:21:32 by wharring          #+#    #+#             */
/*   Updated: 2019/02/21 17:19:23 by wharring         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef	struct			s_list
{
		void					*content;
		size_t					content_size;
		struct s_list	*next;
}										t_list;

typedef unsigned char t_byte;

size_t							ft_strlen(const char *s);
char 							*ft_strcpy(char *dest, const char *src);
char							*ft_strdup(const char *s);
int								ft_atoi(const char *str);

#endif
