/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:49:22 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/26 22:10:09 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	first;
	int	len;
	int	last;
	int	i;

	len = 0;
	first = 0;
	if (!s1)
		return (NULL);
	last = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[first]) && s1[first])
		first++;
	while (ft_strchr(set, s1[last]) && last >= first)
	{
		last--;
		len++;
	}
	i = ft_strlen(s1) - first - len;
	return (ft_substr(s1, first, i));
}
