int	ft_is_prime(int nb){

	int i = 2;
	if(nb < 0) return -1;
	if(nb == 0 || nb == 1) return 0;
	while(i < nb){
		if(nb%i == 0) return 0;
	i++;
	}
	return 1;
}
