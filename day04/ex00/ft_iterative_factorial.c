int	ft_iterative_factorial(int nb){

	int count = 1;
	int result = 1;
	if(nb <= 0 || nb > 12) return 0;
	while(count <= nb){
		result = result*count;
	count++;
	}

	return result ;
}

