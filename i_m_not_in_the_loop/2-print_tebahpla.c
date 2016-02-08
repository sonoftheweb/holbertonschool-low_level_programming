#include <stdio.h>
#include "my_functions.h"

/*Function to print all alphabets in lowercase and in reverse order*/
void print_tebahpla(void){
	char tebahpla;
	for(tebahpla = 'z'; tebahpla >= 'a'; tebahpla-- ){
		print_char(tebahpla);
	}
}