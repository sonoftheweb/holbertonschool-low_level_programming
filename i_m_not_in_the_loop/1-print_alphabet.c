#include <stdio.h>
#include "my_functions.h"

//print all alphabets from a to z in lowercase. This is only possible because c treats all
//as numbers
void print_alphabet(void){
	char alphabet;
	for(alphabet = 'a'; alphabet <= 'z'; alphabet++ ){
		print_char(alphabet);
	}
}