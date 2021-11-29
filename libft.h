/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:36:13 by mbouazza          #+#    #+#             */
/*   Updated: 2021/11/27 02:03:36 by mbouazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>
# include <inttypes.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_isalnum(int c);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strnstr(const char *str, const char *tfnd, size_t len);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strchr(const char *s, int c);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memcpy(void *dest, const void *src, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(const char *s1, char const *set);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);
#endif
