char lowercase(char l){
	if(l >= 'A' && l <= 'Z'){
		l += 32;
	}
	return (l);
}