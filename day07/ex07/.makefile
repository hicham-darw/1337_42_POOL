main: object_files/main.o object_files/ft_strncat.o object_files/ft_strlen.o object_files/ft_split.o
	gcc object_files/main.o object_files/ft_strncat.o object_files/ft_strlen.o object_files/ft_split.o -o main

object_files/main.o: 
	gcc -c main.c -o object_files/main.o
object_files/ft_strncat.o:
	gcc -c ../../day05/ex17/ft_strncat.c -o object_files/ft_strncat.o
object_files/ft_strlen.o:
	gcc -c ../../day03/ex06/ft_strlen.c -o object_files/ft_strlen.o
object_files/ft_split.o:
	gcc -c ft_split.c -o object_files/ft_split.o

clean:
	rm object_files/*.o main
