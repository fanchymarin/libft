FUNC = *.c
OBJ = *.o

libft: $(OBJ)
	ar rcs libft.a *.o
$(OBJ): $(FUNC) libft.h
	gcc -c -Wall -Wextra -Werror *.c
