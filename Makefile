# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wharring <wharring@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/26 18:00:04 by wharring          #+#    #+#              #
#    Updated: 2019/02/26 18:07:12 by wharring         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FLAGS = -Wall -Werror -Wextra -c

HEADERS = libft.h

CC = gcc

SRC_DIR = ./

OBJ_DIR = ./

C_FILES = 		ft_strcpy.c \

SOURCES = $(ADDPREFIX $(SRC_DIR), $(C_FILES))

OBJECTS = $(addprefix $(OBJ_DIR), $(patsubst %.c, %.o, $(C_FILES)))

default: all

all:	$(NAME)

$(NAME):
		$(CC) $(C_FLAGS) -c $(C_FILES) -I$(HEADERS)
		ac rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

fclean: clean
		/bin/rm -rf $(NAME)

clean:
		/bin/rm -rf $(OBJECTS)

re:		fclean $(NAME)