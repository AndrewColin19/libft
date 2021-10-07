# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolin <acolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 13:09:45 by acolin            #+#    #+#              #
#    Updated: 2021/10/07 13:09:45 by acolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.exe
SRCS = ft_strlen.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strnstr.c \
ft_atoi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_islower.c \
ft_isupper.c \
ft_isspace.c \
main.c

OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

#.c.o: gcc ${CFLAGS} -c $< -o ${<:.c=.o}

#${NAME}: ${OBJS} ar rc ${NAME} ${OBJS} ranlib ${NAME}

${NAME}:
	gcc ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	del /f ${OBJS}

fclean: clean
	del /f ${NAME}

re: fclean all