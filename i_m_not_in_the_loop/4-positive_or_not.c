#include <stdio.h>
#include "my_functions.h"

void positive_or_not(int n){
	if(n < 0){
		print_char('N');
	}
	else if(n > 0){
		print_char('P');
	}
	else{
		print_char('Z');
	}
}