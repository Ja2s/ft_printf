# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 12:01:39 by jgavairo          #+#    #+#              #
#    Updated: 2023/11/29 16:00:46 by jgavairo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_printf_c.c ft_printf_id.c ft_printf_p.c ft_printf_symbol.c ft_printf_u.c \
ft_printf_x.c ft_printf_mx.c ft_putchar_fd.c ft_putnbr_fd_unb.c ft_putnbr_fd.c ft_putnbrbase_fd.c \
ft_putstr_fd.c ft_strchr.c ft_strlen.c ft_printf_s.c ft_printf_checker.c 
OBJ = $(SRC:.c=.o)
DEP = $(OBJ:.o=.d)
NAME = libftprintf.a

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