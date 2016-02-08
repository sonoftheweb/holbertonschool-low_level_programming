#include <stdio.h>
#include "my_functions.h"

void print_tebahpla(void){
	char tebahpla;
	for(tebahpla = 'z'; tebahpla >= 'a'; tebahpla-- ){
		print_char(tebahpla);
	}
}