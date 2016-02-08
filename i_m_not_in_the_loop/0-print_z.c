#include <stdio.h>
#include "my_functions.h"

//this function prints a single character passed to the print_char function in another file.
void print_z(void){
	char z;
	z = 'z';
	print_char(z);
	print_char('\n');
}
