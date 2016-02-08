#include <stdio.h>
#include "my_functions.h"

void print_alphabet(void){
	char alphabet;
	for(alphabet = 'a'; alphabet <= 'z'; alphabet++ ){
		print_char(alphabet);
	}
}