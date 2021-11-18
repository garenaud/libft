# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 15:33:28 by grenaud-          #+#    #+#              #
#    Updated: 2021/11/18 14:40:31 by grenaud-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\

BONUS =	ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\

OBJ = $(SRC:.c=.o)

OBJ_B = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME):
		@$(COMPILE) $(SRC) $(BONUS)
		@$(LIB) $(OBJ) $(OBJ_B)
		@$(RANLIB)

$(OBJ):
		@$(SRC)
		@$(COMPILE) -c $(SRC)

$(OBJ_B):
		@$(SRC) $(BONUS)
		@$(COMPILE) -c $(BONUS)

bonus:	fclean @$(OBJ_B) $(OBJ)
		@$(COMPILE) $(NAME) $(OBJ_B) $(OBJ)

clean:
		@$(REMOVE) $(OBJ) $(OBJ_B)

fclean:	clean
		@$(REMOVE) $(NAME)

re:		fclean all

.PHONY: all clean fclean re