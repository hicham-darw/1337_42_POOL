CC=gcc -Wall -Werror -Wextra
OBJ=obj
SRC=src
PNAME=ft_atoi_base
LIB=ft_atoi_base.a


$(PNAME): $(LIB)
	$(CC) -o $(PNAME) main.c $(LIB) -I.

$(LIB): $(OBJ) atoi_base get_index skip_sign str_is_base valid_int skip_whitespaces strlen
	ar rcs $(LIB) $(OBJ)/*.o
$(OBJ): 
	mkdir -p $(OBJ)
atoi_base:
	$(CC) -c ft_atoi_base.c -o $(OBJ)/ft_atoi_base.o
get_index:
	$(CC) -c $(SRC)/ft_get_index.c -o $(OBJ)/ft_get_index.o
skip_sign:
	$(CC) -c $(SRC)/ft_skip_sign.c -o $(OBJ)/ft_skip_sign.o
str_is_base:
	$(CC) -c $(SRC)/ft_str_is_base.c -o $(OBJ)/ft_str_is_base.o
valid_int:
	$(CC) -c $(SRC)/ft_get_int.c -o $(OBJ)/ft_get_int.o 
skip_whitespaces:
	$(CC) -c $(SRC)/ft_skip_whitespaces.c -o $(OBJ)/ft_skip_whitespaces.o
strlen:
	$(CC) -c $(SRC)/ft_strlen.c -o $(OBJ)/ft_strlen.o

all: $(PNAME)

clean:
	rm -rf $(OBJ)/*.o $(LIB)
fclean: clean
	rm -rf $(OBJ) $(PNAME) $(LIB)
re: fclean $(PNAME)
