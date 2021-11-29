/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:35:09 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/26 22:24:06 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (s[i] != ch)
	{
		if (s[i] == '\0')
			return (NULL);
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	return ((char *)&s[i]);
}
/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'f';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
