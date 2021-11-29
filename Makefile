# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouazza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 23:38:28 by mbouazza          #+#    #+#              #
#    Updated: 2021/11/26 22:32:49 by mbouazza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

sources = ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_atoi.c ft_isprint.c\
	ft_strchr.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_strlcat.c ft_tolower.c ft_memcmp.c \
	ft_strlcpy.c ft_toupper.c ft_memcpy.c ft_strlen.c ft_memmove.c ft_strncmp.c \
	ft_memset.c	ft_strnstr.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c 

OBJECTS = $(sources:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all 

