#include <stdio.h>
#include "my_functions.h"

/*Function to check if number is positive, negative or 0. Think of a line graph.*/
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