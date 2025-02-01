#include	"includes/libft.h"

#define BUFF_SIZE 3800

int	main(int argc, char **argv)
{
	char buffer[BUFF_SIZE];
	int fd , i, read_size;

	memset(buffer, 0, BUFF_SIZE);
	if(argc == 1)
	{
		write(1, "file name missing.\n", 19);
		exit(0);

	}else if (argc > 2)
	{
		write(1, "too many arguments.\n", 20);
		exit(0);
	}else
	{
		fd = open(argv[1], O_RDONLY, 0600);
		if(fd == -1)
		{
			write(1,"error opening file\n", 19);
			exit(0);
		}
		while((read_size = read(fd, buffer, BUFF_SIZE)) > 0){
			if(read_size <= 0){
				exit(0);
			}
			while(i < read_size){
				ft_putchar(buffer[i]);
				i++;
			}
		}
		memset(buffer, 0, BUFF_SIZE);
		close(fd);
	}
	
	return 0;
}
