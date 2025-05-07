# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 09:58:21 by nugoncal          #+#    #+#              #
#    Updated: 2025/05/02 13:03:20 by nugoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		cc
CFLAGS =	-Wall -Wextra -Werror
INC =		-I includes

SRC =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

//SRCBON	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

OBJ =		$(SRC:.c=.o)

//OBJBON	=	${SRCBON:.c=.o}

AR = ar -rcs

NAME = libft.a

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

//bonus: ${OBJBON}
	$(AR) $(NAME) $(OBJBON)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all



#	Your Makefile must at contain at least the rules $(NAME), all, clean, fclean and re.

#	To submit bonuses for your project, you must include a bonus rule in your Makefile,
#	which will add all the various headers, libraries, or functions that are not allowed in
#	the main part of the project. 

#	Bonuses must be placed in _bonus.{c/h} files, unless the subject specifies otherwise. 
#	The evaluation of mandatory and bonus parts is conducted separately
