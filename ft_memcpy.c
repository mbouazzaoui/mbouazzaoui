/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:39:25 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/24 22:07:20 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*t;
	const char	*b;

	i = 0;
	t = dest;
	b = src;
	if ((src || dest) == '\0')
		return (NULL);
	while (i < n)
	{
		t[i] = b[i];
		i++;
	}
	return (dest);
}
/*}
int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50] = "Heloooo!!";
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/
