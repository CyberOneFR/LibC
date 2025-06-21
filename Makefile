# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 05:06:30 by ethebaul          #+#    #+#              #
#    Updated: 2025/06/21 06:36:39 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR			=	./build/
HEADERS_DIR			=	./headers/
SRCS_DIR			=	./srcs/

MKCONFIGURE			=	./configure.mk
MKGENERATED			=	./generated.mk
MKCOLOR				=	./color.mk

CC					=	cc
CFLAGS				=	-Wall -Wextra -Werror -g3 -O3 -march=native
LIBS				=	-lpthread

NAME				=	Libc.a

all: $(NAME)
	@echo -e $(GREEN)Successfully Built $(NAME)$(RESET)

-include $(MKCONFIGURE) $(MKGENERATED) $(MKCOLOR)

$(NAME): $(OBJS) $(LIBFT_ARCHIVE)
	@ar -rcs -o $@ $(OBJS)
	@echo -e $(BLUE)$(NAME)$(RESET) compiling: $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY : all clean fclean re