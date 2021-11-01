# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 15:33:28 by grenaud-          #+#    #+#              #
#    Updated: 2021/11/01 18:48:17 by grenaud-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		= $(shell find . -name "*.c")

OBJ		= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

COMPILE	= gcc $(CFLAGS) -c

LIB		= ar rc $(NAME)

RANLIB	= ranlib $(NAME)

REMOVE	= rm -f

all		= $(NAME)

$(NAME):
		@$(COMPILE) $(SRC)
		@$(LIB) $(OBJ)
		@$(RANLIB)

clean:
		@$(REMOVE) $(OBJ)

fclean:
		@$(REMOVE) $(NAME)

re:	fclean all

.PHONY: all clean fclean re