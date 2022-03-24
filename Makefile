FUNC = *.c
OBJ = *.o

libft: $(OBJ)
	ar rcs libft.a *.o
$(OBJ): $(FUNC)
	gcc -c -Wall -Wextra -Werror *.c
clean:
	rm *.o
