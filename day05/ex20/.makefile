CC=gcc
CFLAGS=-Wall -Werror -Wextra
PNAME=main
LIB=my_lib.a
OBJ=obj

$(PNAME): $(LIB)
	$(CC) $(CFLAGS) ft_putnbr_base.c $(LIB) -o $(PNAME) -Iincludes

$(LIB): $(OBJ) ft_is_alpha ft_is_numeric ft_is_valid ft_strlen
	ar rcs $(LIB) $(OBJ)/*.o
$(OBJ):
	mkdir -p $(OBJ)
ft_is_alpha: 
	$(CC) $(CFLAGS) -c src/ft_is_alpha.c -o $(OBJ)/ft_is_alpha.o
ft_is_numeric:
	$(CC) $(CFLAGS) -c src/ft_is_numeric.c -o $(OBJ)/ft_is_numeric.o
ft_is_valid: 
	$(CC) $(CFLAGS) -c src/ft_is_valid.c -o $(OBJ)/ft_is_valide.o
ft_strlen: 
	$(CC) $(CFLAGS) -c src/ft_strlen.c -o $(OBJ)/ft_strlen.o

all: $(PNAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(LIB) $(PNAME)
re: fclean all 
