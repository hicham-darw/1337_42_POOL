#include	<stddef.h>
#include	<stdlib.h>
#include	<unistd.h>

void	ft_putchar(char );
void	ft_display_board(char **board);
char	**initial_board(char **);
int	safe_pos(char **, int , int);
int	put_queens(char **, int);
int	check_up_left(char **, int, int);
int	check_up(char **, int, int);
int	check_up_right(char **, int, int);
void	*ft_memset(void *, int c, int len);

#define SIZE 8

void	ft_eight_queens_puzzle_2(void)
{
	char **chessboard;
	int	i, j;

	chessboard = (char **)malloc(sizeof(char *) * (SIZE + 1));
	if(!chessboard)
		return;
	chessboard[SIZE] = NULL;
	i = 0;
	while(i < SIZE)
	{
		chessboard[i] = (char *)malloc(sizeof(char) * (SIZE + 1));
		if(!chessboard[i])
			return;
		ft_memset(chessboard[i], '.', SIZE);
		i++;
	}

	put_queens(chessboard, 0);
}

int	put_queens(char **board, int i)
{
	int	j, rows, cols;

	if(i == 8)
	{
		rows = 0;
		while(rows < SIZE && board[rows])
		{
			cols = 0;
			while(cols < SIZE && board[rows][cols])
			{
				if(board[rows][cols] == 'Q')
					ft_putchar((cols + 1) + 48);
				cols++;
			}
			rows++;
		}
		ft_putchar('\n');
		return 1;
	}

	j = 0;
	while(j < SIZE)
	{
		if(safe_pos(board, i, j) == 1)
		{
			board[i][j] = 'Q';
			put_queens(board, i + 1);
			board[i][j] = '.';
		}
		j++;
	}
	return 0;
}

void	*ft_memset(void *buff, int c, int len)
{
	char	*str;
	int	i = 0;

	if(!buff)
		return NULL;
	str = (char *)buff;
	while(i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return buff;
}

int	safe_pos(char **board, int i, int j)
{
	if(!board)
		return 0;
	if(!check_up_left(board, i, j))	
		return 0;
	if(!check_up(board, i, j))
		return 0;
	if(!check_up_right(board, i, j))
		return 0;
	return 1;
}

int	check_up_left(char **board, int i, int j)
{
	if(!board || !*board)
		return 0;
	if(i == 0 || j == 0)
		return 1;
	i -= 1;
	j -= 1;
	while(i >= 0 && j  >= 0 && board[i][j])
	{
		if(board[i][j] != '.')
			return 0;
		i--;
		j--;
	}
	return 1;
}

int	check_up(char **board, int i, int j)
{
	if(!board || !*board)
		return 0;
	if(i == 0)
		return 1;
	i -= 1;
	while(i >= 0 && board[i][j])
	{
		if(board[i][j] != '.')
			return 0;
		i--;
	}
	return 1;
}

int	check_up_right(char **board, int i, int j)
{
	if(!board)
		return 0;
	if(i == 0 || j == (SIZE - 1))
		return 1;
	i -= 1;
	j += 1;
	while(i >= 0 && j < SIZE && board[i][j])
	{
		if(board[i][j] != '.')
			return 0;
		i--;
		j++;
	}
	return 1;
}
