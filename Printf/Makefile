# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oalsadi- <oalsadi-@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 15:16:51 by oalsadi-          #+#    #+#              #
#    Updated: 2024/03/12 15:17:01 by oalsadi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar -rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = 

OBJ = $(SRC:.c=.o)
INCLUDE = libft.h


OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE) 
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJBONUS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJBONUS) $(OBJ)


%.o: %.c $(INCLUDE) 	
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re 

clean:	
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus
