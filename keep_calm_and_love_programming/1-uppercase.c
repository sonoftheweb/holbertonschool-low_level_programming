char uppercase(char input){
	if(input >= 'a' && input <= 'z'){
		input -= 32;
	}
	return (input);
}