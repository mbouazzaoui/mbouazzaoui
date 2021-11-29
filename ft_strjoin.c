/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:07:16 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/27 02:19:14 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_strcat(char *dst, char *src)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
	while (src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (*(char *)dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*src;
	char	*string;

	if (!s1 || !s2)
		return (NULL);
	dst = (char *)s1;
	src = (char *)s2;
	string = (char *)malloc(sizeof(char)
			* (ft_strlen(src) + ft_strlen(dst) + 1));
	if (!string)
		return (NULL);
	*string = 0;
	ft_strcat(string, dst);
	ft_strcat(string, src);
	return (string);
}
