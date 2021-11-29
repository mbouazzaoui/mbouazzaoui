/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:44:10 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/27 01:57:44 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	rd;

	d = ft_strlen(dst);
	rd = d;
	s = ft_strlen(src);
	if (d >= dstsize || !dstsize)
		return (dstsize + s);
	while (*src && d < dstsize - 1)
	{
		dst[d] = *src;
		d++;
		src++;
	}
	dst[d] = '\0';
	return (rd + s);
}
