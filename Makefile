# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpepin <mpepin@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 20:02:51 by mpepin            #+#    #+#              #
#    Updated: 2021/12/16 16:23:54 by mpepin           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# All files
SRC =	ft_atoi.c \
		ft_split.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlcat.c \
		ft_strtrim.c \
		ft_strlcpy.c \
		ft_strrchr.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c

OBJS_DIR = objs/
OBJS = ${SRC:.c=.o}
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

# Bonus files
SRCB =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c 

OBJSB = ${SRCB:.c=.o}
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

# Name of the exec file
NAME = libft.a

# Flags compile
FLAGS = -Wall -Wextra -Werror

# Delete
RM = rm -f

$(OBJS_DIR)%.o:	%.c libft.h
				@mkdir -p $(OBJS_DIR)
				@echo "Compiling: $<"
				@clang $(FLAGS) -c $< -o $@

$(NAME):	$(OBJECTS_PREFIXED)
			@ar rcs $(NAME) $(OBJECTS_PREFIXED)
			@echo "Libft Done !"

all: $(NAME)

bonus: $(SRCB)

clean:
			rm -rf $(OBJS_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

bonus:		$(OBJECTS_BONUS_PREFIXED)
			@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
			@echo "Libft Bonus Done !"