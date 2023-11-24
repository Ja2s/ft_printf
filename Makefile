# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 12:01:39 by jgavairo          #+#    #+#              #
#    Updated: 2023/11/22 13:56:49 by jgavairo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = 
OBJ = $(SRC:.c=.o)
DEP = $(OBJ:.o=.d)
NAME = libft.a

.PHONY : all bonus clean fclean re

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

-include $(DEP)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus : $(OBJ) $(BONUS_OBJ)
	$(MAKE) SRC="$(SRC) $(BONUS)" DEP="$(DEP) $(BONUS_DEP)"

clean :
	rm -rf $(OBJ) $(BONUS_OBJ) $(DEP) $(BONUS_DEP)

fclean : clean
	rm -f $(NAME)

re : fclean all