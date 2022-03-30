# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 15:51:58 by fmarin-p          #+#    #+#              #
#    Updated: 2022/03/30 16:02:43 by fmarin-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUNC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c 
OBJ = $(FUNC:.c=.o)
OBJBONUS = $(BONUS:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): $(FUNC) 
	@gcc -c -Wall -Wextra -Werror $(FUNC)

bonus: $(OBJBONUS) $(OBJ)
	@ar rcs $(NAME) $(OBJBONUS) $(OBJ)

$(OBJBONUS): $(BONUS) 
	@gcc -c -Wall -Wextra -Werror $(BONUS)

clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re
