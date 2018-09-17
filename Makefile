# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbixby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 17:38:54 by bbixby            #+#    #+#              #
#    Updated: 2018/09/17 00:46:35 by bbixby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -c -Wall -Werror -Wextra -std=c99
HEADER = libft.h
CFILES = ./ft_memset.c \
./ft_bzero.c \
./ft_memcpy.c \
./ft_memccpy.c \
./ft_memmove.c \
./ft_memchr.c \
./ft_memcmp.c \
./ft_strlen.c \
./ft_strdup.c \
./ft_strcpy.c \
./ft_strncpy.c \
./ft_strcat.c \
./ft_strncat.c \
./ft_strlcat.c \
./ft_strchr.c \
./ft_strrchr.c \
./ft_strstr.c \
./ft_strnstr.c \
./ft_strcmp.c \
./ft_strncmp.c \
./ft_atoi.c \
./ft_isalpha.c \
./ft_isdigit.c \
./ft_isalnum.c \
./ft_isascii.c \
./ft_isprint.c \
./ft_toupper.c \
./ft_tolower.c \
./ft_memalloc.c \
./ft_memdel.c \
./ft_strnew.c \
./ft_strdel.c \
./ft_strclr.c \
./ft_striter.c \
./ft_striteri.c \
./ft_strmap.c \
./ft_strmapi.c \
./ft_strequ.c \
./ft_strnequ.c \
./ft_strsub.c \
./ft_strjoin.c \
./ft_strtrim.c \
./ft_strsplit.c \
./ft_itoa.c \
./ft_putchar.c \
./ft_putstr.c \
./ft_putendl.c \
./ft_putnbr.c \
./ft_putchar_fd.c \
./ft_putstr_fd.c \
./ft_putendl_fd.c \
./ft_putnbr_fd.c \
./ft_lstnew.c \
./ft_lstdelone.c \
./ft_lstdel.c \
./ft_lstadd.c \
./ft_lstiter.c \
./ft_lstmap.c

OFILES	= $(CFILES:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I=$(HEADER) $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all