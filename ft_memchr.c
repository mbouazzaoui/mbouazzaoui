/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:28:14 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/13 19:23:22 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return (&p[i]);
		}
		i++;
	}
	return (NULL);
}
/*int main () {
   const char str[] = "torialspoint.com";
   const char ch = 'r';
   char *ret;

   ret = ft_memchr(str, ch, 3);

   printf("String is - |%s|\n",ret);

   return(0);
}*/
