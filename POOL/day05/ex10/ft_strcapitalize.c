char*	ft_strcapitalize(char* str)
{
	int i = 0;
	while(str[i]){
		if(i == 0){
			if(str[i] >= 97 && str[i] <= 122){
				str[i] = (int)str[i]-32;
			}
		}else{
			if(str[i] >= 97 && str[i] <= 122 ){
				int j = i-1;
				if((str[j] >= 32 && str[j] <= 47) || (str[j] >= 58 && str[j] <= 64) || (str[j] >= 91 && str[j] <= 96) || (str[j] >= 123 && str[j] <= 126)){
					str[i] = str[i]-32;
				}
			}else{
				if(str[i] >= 65 && str[i] <= 90){
					int j = i-1;
					if((str[j] >= 65 && str[j] <= 90) || (str[j] >= 97 && str[j] <= 122)){
						str[i] = str[i]+32;
					}
				
				}
			}
		}
	i++;
	}
	
	return str;
}
