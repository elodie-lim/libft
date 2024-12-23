# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elodlim <elodlim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 10:00:35 by elodlim           #+#    #+#              #
#    Updated: 2024/11/30 10:00:35 by elodlim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall -Wextra -Werror -g3
FILE_EXTENSION := .c

NAME := libft.a

SRC_DIRS := .

SRCS := $(shell find $(SRC_DIRS) -name '*$(FILE_EXTENSION)' -and -not -name '*_bonus$(FILE_EXTENSION)')
SRCS_BONUS := $(shell find $(SRC_DIRS) -name '*_bonus$(FILE_EXTENSION)')
OBJS := $(SRCS:$(FILE_EXTENSION)=.o)
OBJS_BONUS := $(SRCS_BONUS:$(FILE_EXTENSION)=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus : $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re