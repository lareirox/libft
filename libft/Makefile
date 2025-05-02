# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nugoncal <nugoncal@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 09:58:21 by nugoncal          #+#    #+#              #
#    Updated: 2025/04/08 14:30:04 by nugoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
INC = -I includes

SRCS = ft_ *.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all



#	Your Makefile must at contain at least the rules $(NAME), all, clean, fclean and re.

#	To submit bonuses for your project, you must include a bonus rule in your Makefile,
#	which will add all the various headers, libraries, or functions that are not allowed in
#	the main part of the project. 

#	Bonuses must be placed in _bonus.{c/h} files, unless the subject specifies otherwise. 
#	The evaluation of mandatory and bonus parts is conducted separately
