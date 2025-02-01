
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = srcs
OBJ = obj
LIB_NAME = libft.a

all: $(LIB_NAME)

$(LIB_NAME): $(OBJ)/ft_atoi.o $(OBJ)/ft_iterative_power.o $(OBJ)/ft_putchar.o $(OBJ)/ft_putnbr.o $(OBJ)/ft_putstr.o $(OBJ)/ft_recursive_power.o $(OBJ)/ft_sort_integer_table.o $(OBJ)/ft_sqrt.o $(OBJ)/ft_strcat.o $(OBJ)/ft_strcmp.o $(OBJ)/ft_strcpy.o $(OBJ)/ft_str_is_alpha.o $(OBJ)/ft_str_is_numeric.o $(OBJ)/ft_str_is_printable.o $(OBJ)/ft_strlcat.o $(OBJ)/ft_strlcpy.o $(OBJ)/ft_strlen.o $(OBJ)/ft_strlowcase.o $(OBJ)/ft_strncat.o $(OBJ)/ft_strncmp.o $(OBJ)/ft_strncpy.o $(OBJ)/ft_strrev.o $(OBJ)/ft_strstr.o $(OBJ)/ft_strupcase.o $(OBJ)/ft_swap.o
	ar rcs $(LIB_NAME) $(OBJ)/*.o


$(OBJ): 
	mkdir -p $(OBJ)
	@echo "compilation..."
$(OBJ)/ft_atoi.o: $(SRC)/ft_atoi.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_atoi.c -o $(OBJ)/ft_atoi.o
$(OBJ)/ft_iterative_power.o: $(SRC)/ft_iterative_power.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_iterative_power.c -o $(OBJ)/ft_iterative_power.o
$(OBJ)/ft_putchar.o: $(SRC)/ft_putchar.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_putchar.c -o $(OBJ)/ft_putchar.o
$(OBJ)/ft_putnbr.o: $(SRC)/ft_putnbr.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_putnbr.c -o $(OBJ)/ft_putnbr.o
$(OBJ)/ft_putstr.o: $(SRC)/ft_putstr.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_putstr.c -o $(OBJ)/ft_putstr.o
$(OBJ)/ft_recursive_power.o: $(SRC)/ft_recursive_power.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_recursive_power.c -o $(OBJ)/ft_recursive_power.o
$(OBJ)/ft_sort_integer_table.o: $(SRC)/ft_sort_integer_table.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_sort_integer_table.c -o $(OBJ)/ft_sort_integer_table.o
$(OBJ)/ft_sqrt.o: $(SRC)/ft_sqrt.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_sqrt.c -o $(OBJ)/ft_sqrt.o
$(OBJ)/ft_strcat.o: $(SRC)/ft_strcat.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strcat.c -o $(OBJ)/ft_strcat.o
$(OBJ)/ft_strcmp.o: $(SRC)/ft_strcmp.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strcmp.c -o $(OBJ)/ft_strcmp.o
$(OBJ)/ft_strcpy.o: $(SRC)/ft_strcpy.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strcpy.c -o $(OBJ)/ft_strcpy.o
$(OBJ)/ft_str_is_alpha.o: $(SRC)/ft_str_is_alpha.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_str_is_alpha.c -o $(OBJ)/ft_str_is_alpha.o
$(OBJ)/ft_str_is_numeric.o: $(SRC)/ft_str_is_numeric.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_str_is_numeric.c -o $(OBJ)/ft_str_is_numeric.o
$(OBJ)/ft_str_is_printable.o: $(SRC)/ft_str_is_printable.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_str_is_printable.c -o $(OBJ)/ft_str_is_printable.o
$(OBJ)/ft_strlcat.o: $(SRC)/ft_strlcat.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strlcat.c -o $(OBJ)/ft_strlcat.o
$(OBJ)/ft_strlcpy.o: $(SRC)/ft_strlcpy.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strlcpy.c -o $(OBJ)/ft_strlcpy.o
$(OBJ)/ft_strlen.o: $(SRC)/ft_strlen.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strlen.c -o $(OBJ)/ft_strlen.o
$(OBJ)/ft_strlowcase.o: $(SRC)/ft_strlowcase.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strlowcase.c -o $(OBJ)/ft_strlowcase.o
$(OBJ)/ft_strncat.o: $(SRC)/ft_strncat.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strncat.c -o $(OBJ)/ft_strncat.o
$(OBJ)/ft_strncmp.o: $(SRC)/ft_strncmp.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strncmp.c -o $(OBJ)/ft_strncmp.o
$(OBJ)/ft_strncpy.o: $(SRC)/ft_strncpy.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strncpy.c -o $(OBJ)/ft_strncpy.o
$(OBJ)/ft_strrev.o: $(SRC)/ft_strrev.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strrev.c -o $(OBJ)/ft_strrev.o
$(OBJ)/ft_strstr.o: $(SRC)/ft_strstr.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strstr.c -o $(OBJ)/ft_strstr.o
$(OBJ)/ft_strupcase.o: $(SRC)/ft_strupcase.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_strupcase.c -o $(OBJ)/ft_strupcase.o
obj/ft_swap.o: $(SRC)/ft_swap.c | $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)/ft_swap.c -o $(OBJ)/ft_swap.o

clean: 
	rm -rf $(OBJ)
fclean: clean 
	rm -f $(LIB_NAME)
re: fclean all
