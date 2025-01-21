int	ft_sqrt(int nb){

	int i = 1;
	while(i <= nb/2){
		if( i * i == nb)  
			return i ;  
		i++;
	}
	return 0;
	
}

