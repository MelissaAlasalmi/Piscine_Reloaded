# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malasalm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 20:06:27 by malasalm          #+#    #+#              #
#    Updated: 2019/10/17 20:09:23 by malasalm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re:  fclean all

.PHONY: clean fclean re
