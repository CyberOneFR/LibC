# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 17:15:05 by ethebaul          #+#    #+#              #
#    Updated: 2025/04/23 05:16:58 by ethebaul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILDIR		=	./build/
BUILDIR_DBG	=	./build_dbg/
HEADERS		=	./headers/

VPATH		=	./srcs/:\
				./srcs/array/:\
				./srcs/array/macro/:\
				./srcs/list/:\
				./srcs/memory/:\
				./srcs/string/:\
				./srcs/string/cast/:\
				./srcs/string/macro/

SRCS		=	arr_size.c\
				map_array.c\
				sum_array.c\
				mem_copy.c\
				mem_zero.c\
				smalloc.c\
				scalloc.c\
				str_int.c\
				str_long.c\
				str_size.c\
				str_join.c\
				str_split.c

SRCS_DBG	=	./srcs_dbg/debug.c

DEPS		=	$(addprefix $(BUILDIR), $(SRCS:.c=.d))
OBJS		=	$(addprefix $(BUILDIR), $(SRCS:.c=.o))
DEPS_DBG	=	$(addprefix $(BUILDIR_DBG), $(SRCS:.c=.d))
OBJS_DBG	=	$(addprefix $(BUILDIR_DBG), $(SRCS:.c=.o))

NAME		=	libc.a
DEBUG		=	debug

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -O3 -march=native -I$(HEADERS)
CFLAGS_DBG	=	-Wall -Wextra -Werror -g3 -I$(HEADERS)

all: $(NAME)

$(NAME): $(OBJS) Makefile
	ar rcs $@ $(OBJS)

$(DEBUG): $(OBJS_DBG) $(SRCS_DBG) Makefile
	$(CC) $(CFLAGS_DBG) -MD -MP -MF $(BUILDIR_DBG)$@.d -o $@ $(OBJS_DBG) $(SRCS_DBG)

$(BUILDIR)%.o: %.c | $(BUILDIR)
	$(CC) $(CFLAGS) -MD -MP -o $@ -c $<

$(BUILDIR_DBG)%.o: %.c | $(BUILDIR_DBG)
	$(CC) $(CFLAGS_DBG) -MD -MP -o $@ -c $<

$(BUILDIR):
	mkdir -p $@

$(BUILDIR_DBG):
	mkdir -p $@

-include $(DEPS) $(DEPS_DBG)

clean:
	rm -rf $(BUILDIR) $(BUILDIR_DBG)

fclean: clean
	rm -f $(NAME) $(DEBUG)

re: fclean all

.PHONY : all clean fclean re