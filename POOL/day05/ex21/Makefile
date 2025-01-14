main: main.o ft_atoi_base.o base/ft_atoi_binary.o base/ft_atoi_decimal.o base/ft_atoi_hexadecimal.o base/ft_atoi_octal.o ../ex06/ft_strcmp.o
	@gcc main.o ft_atoi_base.o base/ft_atoi_binary.o base/ft_atoi_decimal.o base/ft_atoi_hexadecimal.o base/ft_atoi_octal.o ../ex06/ft_strcmp.o -o main
	 
main.o: main.c 
	@gcc -c main.c -o main.o
ft_atoi_base.o : ft_atoi_base.c
	@gcc -c ft_atoi_base.c -o ft_atoi_base.o	
base/ft_atoi_binary.o: base/ft_atoi_binary.c
	@gcc -c base/ft_atoi_binary.c -o base/ft_atoi_binary.o
base/ft_atoi_decimal.o: base/ft_atoi_decimal.c 
	@gcc -c base/ft_atoi_decimal.c -o base/ft_atoi_decimal.o
base/ft_atoi_hexadecimal.o: base/ft_atoi_hexadecimal.c
	@gcc -c base/ft_atoi_hexadecimal.c -o base/ft_atoi_hexadecimal.o
base/ft_atoi_octal.o: base/ft_atoi_octal.c
	@gcc -c base/ft_atoi_octal.c -o base/ft_atoi_octal.o
../ex06/ft_strcmp.o:  ../ex06/ft_strcmp.c
	@gcc -c ../ex06/ft_strcmp.c -o ../ex06/ft_strcmp.o

clean:
	@rm *.o base/*.o main
