# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 17:15:05 by ethebaul          #+#    #+#              #
#    Updated: 2025/04/22 17:48:01 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILDIR	=	./build/
HEADERS	=	./headers/

VPATH	=	srcs
SRCS	=	strtoi.c

OBJS	=	$(addprefix $(BUILDIR), $(SRCS:.c=.o))
DEPS	=	$(addprefix $(BUILDIR), $(SRCS:.c=.d))

NAME	=	libc.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -O3 -march=native -MMD -MP -I$(HEADERS)

all: $(NAME)

$(NAME): $(OBJS) Makefile
	ar -c -r $(NAME) -o $(OBJS)

./build/%.o: %.c | $(BUILDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILDIR):
	mkdir -p $(BUILDIR)

-include $(DEPS)

clean:
	rm -rf $(BUILDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re