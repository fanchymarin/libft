FUNC = *.c
OBJ = *.o
all: libft

libft: $(OBJ)
	@ar rcs libft.a *.o
$(OBJ): $(FUNC)
	@gcc -c -Wall -Wextra -Werror *.c
fclean:
	@rm *.o
	@echo tamos ready
