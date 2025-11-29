# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
/*   By: afomin afomin@student.42kl.edu.my          #+#  +:+        #+#       */
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 15:17:51 by afomin            #+#    #+#              #
#    Updated: 2025/11/29 14:48:49 by afomin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBC = ar -rcs
RM = rm -f

GNL_DIR = get_next_line

LIBFT_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

LIBFT_BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c

GNL_FILES = get_next_line.c get_next_line_bonus.c get_next_line_utils_bonus.c

LIBFT = $(LIBFT_FILES)
LIBFT_BONUS = $(LIBFT_BONUS_FILES)
GNL = $(addprefix $(GNL_DIR)/, $(GNL_FILES))

OBJS_LIBFT = $(LIBFT:.c=.o)
OBJS_LIBFT_B = $(LIBFT_BONUS:.c=.o)
OBJS_GNL = $(GNL:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: ${NAME}

$(NAME): $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_GNL)
	$(LIBC) $(NAME) $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_GNL)
	$(MAKE) clean
	
bonus: $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_GNL)
	$(LIBC) $(NAME) $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_GNL)

clean:
	$(RM) $(OBJS_LIBFT) $(OBJS_LIBFT_B) $(OBJS_GNL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
