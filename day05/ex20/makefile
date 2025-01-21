main: main.o ft_putnbr_base.o putnbr_base/ft_convert_to_binary.o putnbr_base/ft_convert_to_hexadecimal.o putnbr_base/ft_convert_to_octal.o ../ex01/ft_putnbr.o ../ex06/ft_strcmp.o putnbr_base/ft_putchar.o
	@gcc main.o ft_putnbr_base.o putnbr_base/ft_convert_to_binary.o putnbr_base/ft_convert_to_hexadecimal.o putnbr_base/ft_convert_to_octal.o ../ex01/ft_putnbr.o ../ex06/ft_strcmp.o putnbr_base/ft_putchar.o -o main
main.o:
	@gcc -c main.c -o main.o
ft_putnbr_base.o:
	@gcc -c ft_putnbr_base.c -o ft_putnbr_base.o
putnbr_base/ft_convert_to_binary.o:
	@gcc -c putnbr_base/ft_convert_to_binary.c -o putnbr_base/ft_convert_to_binary.o
putnbr_base/ft_convert_to_hexadecimal.o:
	@gcc -c putnbr_base/ft_convert_to_hexadecimal.c -o putnbr_base/ft_convert_to_hexadecimal.o
putnbr_base/ft_convert_to_ocal.o:
	@gcc -c putnbr_base/ft_convert_to_octal.c -o putnbr_base/ft_convert_to_octal.o
putnbr_base/ft_putchar.o:
	@gcc -c putnbr_base/ft_putchar.c -o putnbr_base/ft_putchar.o
../ex01/ft_putnbr.o:
	@gcc -c ../ex01/ft_putnbr.c -o ../ex01/ft_putnbr.o
../ex06/ft_strcmp.o:
	@gcc -c ../ex06/ft_strcmp.c -o ../ex06/ft_strcmp.o

clean:
	@rm ft_putnbr_base.o putnbr_base/ft_convert_to_binary.o putnbr_base/ft_convert_to_hexadecimal.o putnbr_base/ft_convert_to_octal.o ../ex01/ft_putnbr.o ../ex06/ft_strcmp.o putnbr_base/ft_putchar.o main.o  main
