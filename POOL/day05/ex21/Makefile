main: object_file/main.o object_file/ft_atoi_base.o object_file/ft_atoi_binary.o object_file/ft_atoi_decimal.o object_file/ft_atoi_hexadecimal.o object_file/ft_atoi_octal.o object_file/ft_strcmp.o
	gcc object_file/main.o object_file/ft_atoi_base.o object_file/ft_atoi_binary.o object_file/ft_atoi_decimal.o object_file/ft_atoi_hexadecimal.o object_file/ft_atoi_octal.o object_file/ft_strcmp.o -o main
	 
object_file/main.o: main.c 
	gcc -c main.c -o object_file/main.o
object_file/ft_atoi_base.o : ft_atoi_base.c
	gcc -c ft_atoi_base.c -o object_file/ft_atoi_base.o	
object_file/ft_atoi_binary.o: base/ft_atoi_binary.c
	gcc -c base/ft_atoi_binary.c -o object_file/ft_atoi_binary.o
object_file/ft_atoi_decimal.o: base/ft_atoi_decimal.c 
	gcc -c base/ft_atoi_decimal.c -o object_file/ft_atoi_decimal.o
object_file/ft_atoi_hexadecimal.o: base/ft_atoi_hexadecimal.c
	gcc -c base/ft_atoi_hexadecimal.c -o object_file/ft_atoi_hexadecimal.o
object_file/ft_atoi_octal.o: base/ft_atoi_octal.c
	gcc -c base/ft_atoi_octal.c -o object_file/ft_atoi_octal.o
object_file/ft_strcmp.o:  ../ex06/ft_strcmp.c
	gcc -c ../ex06/ft_strcmp.c -o object_file/ft_strcmp.o

clean:
	rm object_file/*.o main
