#include <stdio.h>
#include "my_functions.h"

/*Function to print all base 16 numbers from 0 to F. This one had me going crazy!*/
void print_base16(void){

	int i;

 	for (i = 0; i < 16; i++){
	 	if (i < 10)
			print_char(((char) i) + 48);
		else
			print_char(((char) i) + 55);
	}
}