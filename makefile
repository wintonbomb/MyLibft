# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wharring <wharring@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/26 18:00:04 by wharring          #+#    #+#              #
#    Updated: 2019/02/28 21:26:07 by wharring         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FLAGS = -Wall -Werror -Wextra -c

HEADERS = libft.h

CC = gcc

SRC_DIR = ./

OBJ_DIR = ./

C_FILES =		ft_strcpy.c \
					ft_atoi.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_putchar.c \
					ft_strcpy.c \
					ft_strdup.c \
					ft_strlen.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_bzero.c \
					ft_isprint.c \
					ft_itoa.c \
					ft_lstadd.c \
					ft_lstdel.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_memalloc.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memdel.c \
					ft_memmove.c \
					ft_memset.c \
					ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putendl.c \
					ft_putnbr_fd.c \
					ft_putnbr.c \
					ft_putstr_fd.c \
					ft_putstr.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strclr.c \
					ft_strcmp.c \
					ft_strdel.c \
					ft_strequ.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strncat.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strnequ.c \
					ft_strnew.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strsplit.c \
					ft_strstr.c \
					ft_strsub.c \
					ft_strtrim.c \

SOURCES = $(ADDPREFIX $(SRC_DIR), $(C_FILES))

OBJECTS = $(addprefix $(OBJ_DIR), $(patsubst %.c, %.o, $(C_FILES)))

default: all

all:	$(NAME)

$(NAME):
		$(CC) $(C_FLAGS) -c $(C_FILES) -I$(HEADERS)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

fclean: clean
		/bin/rm -rf $(NAME)

clean:
		/bin/rm -rf $(OBJECTS)

re:		fclean $(NAME)
