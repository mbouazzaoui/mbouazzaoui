/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:13:17 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/13 19:31:43 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char )s2[i]);
		i++;
	}
	return (0);
}
/*int main () {
   char str1[15] = "abcdef";
   char str2[15] = "ABCDEF";
   int ret1;
   int ret2;

   ret1 = strncmp(str1, str2, 2);
   ret2 = ft_strncmp(str1, str2, 2);
   printf(" my fct : %d \n ther fct : %d ",ret2,ret1);

   return(0);
}*/
