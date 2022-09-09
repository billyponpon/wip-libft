# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pchin <pchin@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 08:15:36 by pchin             #+#    #+#              #
#    Updated: 2022/09/07 10:57:19 by pchin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# $@ contain target name which is $(NAME)
# $? Outputs all prerequisites newer than the target $(OBJS)
# $^ Outputs all prerequisites

NAME	= libft.a
INCLUDE	= libft.h

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar
ARFLAGS	= rcs
RM		= rm -f

SRCS	= \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
B_SRCS	= \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJS	= $(SRCS:.c=.o)
B_OBJS	= $(B_SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(ARFLAGS) $@ $?

bonus:		$(OBJS) $(B_OBJS)
			$(AR) $(ARFLAGS) $(NAME) $?

%.o: %.c
			$(CC) $(CFLAGS) -c $?

clean:
			$(RM) $(OBJS) $(B_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus		

.PHONY:		all bonus clean fclean re rebonus