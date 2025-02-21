CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ = obj
SRC = src
LIB_NAME = lib.a
PNAME = do-op


all: $(PNAME)

$(PNAME): $(LIB_NAME)
	$(CC) $(CFLAGS) -o $(PNAME) main.c $(LIB_NAME)
$(LIB_NAME): $(OBJ) $(OBJ)/ft_strlen.o $(OBJ)/ft_check_str.o $(OBJ)/ft_check_op.o $(OBJ)/ft_atoi.o $(OBJ)/ft_putnbr.o
	ar rcs lib.a $(OBJ)/*.o
$(OBJ): 
	mkdir -p obj
$(OBJ)/ft_strlen.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_strlen.c -o $(OBJ)/ft_strlen.o
$(OBJ)/ft_check_str.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_check_str.c -o $(OBJ)/ft_check_str.o
$(OBJ)/ft_check_op.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_check_op.c -o $(OBJ)/ft_check_op.o
$(OBJ)/ft_atoi.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_atoi.c -o $(OBJ)/ft_atoi.o
$(OBJ)/ft_putnbr.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_putnbr.c -o $(OBJ)/ft_putnbr.o

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(LIB_NAME) $(PNAME)

re: fclean all
