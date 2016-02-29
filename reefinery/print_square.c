void print_square(int num){
	int rows, cols, last=num;
	if(num > 0){
		for(rows = 1; rows <= num; rows++){
			for(cols = 1; cols <= num; cols++){
				if(rows == 1 || rows == last){
					if(cols == 1 || cols == last){
						print_char('o');
					}
					else{
						print_char('-');
					}
				}else{
					if(cols == 1 || cols == last){
						print_char('|');
					}else{
						print_char(' ');
					}
				}
			}
			print_char('\n');
		}
	}
}