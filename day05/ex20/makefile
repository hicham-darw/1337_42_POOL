gcc = CC
CFLAGS = -Wall -Wextra -Werror
PNAME = main
SRC = src
OBJ = obj
LIB_NAME = my_lib.a

$PNAME: $(OBJ) $(LIB_NAME) 
	$(CC) $(CFLAGS) -o $(PNAME) main.c $(LIB_NAME)

$(LIB_NAME): $(OBJ) $(OBJ)/ft_putnbr_base.o $(OBJ)/ft_convert_to_binary.o $(OBJ)/ft_convert_to_hexadecimal.o $(OBJ)/ft_convert_to_octal.o $(OBJ)/ft_putchar.o $(OBJ)/ft_putnbr.o $(OBJ)/ft_putstr.o $(OBJ)/ft_strcmp.o $(OBJ)/ft_len_binary.o $(OBJ)/ft_fill_ptr_binary.o $(OBJ)/ft_transfer_to_negative_binary.o $(OBJ)/ft_strrev.o $(OBJ)/ft_strlen.o $(OBJ)/ft_swap.o $(OBJ)/ft_iterative_power.o $(OBJ)/ft_put_hexa.o $(OBJ)/ft_strcpy.o $(OBJ)/ft_strncat.o
	ar rcs $(LIB_NAME) $(OBJ)/*.o
$(OBJ):
	mkdir -p $(OBJ)
$(OBJ)/ft_putnbr_base.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_putnbr_base.c -o $(OBJ)/ft_putnbr_base.o
$(OBJ)/ft_convert_to_binary.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_convert_to_binary.c -o $(OBJ)/ft_convert_to_binary.o
$(OBJ)/ft_put_hexa.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_put_hexa.c -o $(OBJ)/ft_put_hexa.o
$(OBJ)/ft_convert_to_hexadecimal.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_convert_to_hexadecimal.c -o $(OBJ)/ft_convert_to_hexadecimal.o
$(OBJ)/ft_strcpy.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_strcpy.c -o $(OBJ)/ft_strcpy.o
$(OBJ)/ft_strncat.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_strncat.c -o $(OBJ)/ft_strncat.o
$(OBJ)/ft_iterative_power.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_iterative_power.c -o $(OBJ)/ft_iterative_power.o
$(OBJ)/ft_convert_to_octal.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_convert_to_octal.c -o $(OBJ)/ft_convert_to_octal.o
$(OBJ)/ft_putchar.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_putchar.c -o $(OBJ)/ft_putchar.o
$(OBJ)/ft_putnbr.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_putnbr.c -o $(OBJ)/ft_putnbr.o
$(OBJ)/ft_putstr.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_putstr.c -o $(OBJ)/ft_putstr.o
$(OBJ)/ft_strcmp.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_strcmp.c -o $(OBJ)/ft_strcmp.o
$(OBJ)/ft_len_binary.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_len_binary.c -o $(OBJ)/ft_len_binary.o
$(OBJ)/ft_fill_ptr_binary.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_fill_ptr_binary.c -o $(OBJ)/ft_fill_ptr_binary.o
$(OBJ)/ft_transfer_to_negative_binary.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_transfer_to_negative_binary.c -o $(OBJ)/ft_transfer_to_negative_binary.o
$(OBJ)/ft_strrev.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_strrev.c -o $(OBJ)/ft_strrev.o
$(OBJ)/ft_strlen.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_strlen.c -o $(OBJ)/ft_strlen.o
$(OBJ)/ft_swap.o:
	$(CC) $(CFLAGS) -c $(SRC)/ft_swap.c -o $(OBJ)/ft_swap.o

clean:
	rm $(OBJ)/*.o
fclean: clean
	rm -rf $(OBJ) $(PNAME)
all: $(PNAME)

re: clean all
