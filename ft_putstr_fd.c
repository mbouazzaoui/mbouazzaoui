/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:26:19 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/24 23:32:19 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*int	main()
{
	int	*fd;

	fd = open("/Users/mbouazza/Desktop/1337/libft/pwdr", 
	
	O_RDWR | O_CREAT, S_IRUSR, S_IWUSR);
	ft_putstr_fd("MOUSSA", fd)
	printf("%d", fd);
}*/
