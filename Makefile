# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 22:04:50 by aelkhali          #+#    #+#              #
#    Updated: 2022/10/31 22:33:11 by aelkhali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFILES = srcs/ft_printf.c srcs/task_distributor.c srcs/put_hex.c srcs/put_nums.c \
		 srcs/ft_itoa_hex.c srcs/ft_putchar.c srcs/ft_putstr.c
FLAGS = -Wall -Wextra -Werror 
OBJS = $(CFILES:.c=.o)
AR = ar -rc
RM = rm -rf

all : $(NAME)
	@echo "$(NAME) created successfully..."

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Compiling ..."

.c.o :
	@$(CC) $(FLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJS)
	@echo "cleaning the object files..."

fclean : clean
	@$(RM) $(NAME)
	@echo "cleaning Everything..."

re : fclean all