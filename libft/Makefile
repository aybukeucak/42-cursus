# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 15:19:20 by ayucak            #+#    #+#              #
#    Updated: 2023/07/24 14:49:22 by ayucak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strtrim.c \
	   ft_bzero.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strdup.c \
	   ft_calloc.c ft_split.c ft_strlen.c ft_tolower.c ft_itoa.c \
	   ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c \
	   ft_isalpha.c ft_memcmp.c ft_strnstr.c ft_isascii.c ft_substr.c\
	   ft_memcpy.c ft_strjoin.c ft_strrchr.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
	   ft_strmapi.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: clean re fclean all