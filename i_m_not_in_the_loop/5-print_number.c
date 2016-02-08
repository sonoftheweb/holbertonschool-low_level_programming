#include <unistd.h>
#include <stdlib.h>
#include "my_functions.h"

void print_number(int n){
	char s = std::to_string(n); 
	print_char(n);
}