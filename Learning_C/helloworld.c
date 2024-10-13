#include <stdio.h>  //library or header file that contains standard input/ouput operations
#include "usefulfunctions.h"
/*
 * main() function every c program must have a main.
 * it has a returnable'int' this is for exit codes.
 */
int main(void){

	//printf is referenced from the stdio.h library to ouptut to standard out
	printf("Hello World!\n");
	printf("%d\n", sqr(255));
	printf("Goodbye World!\n");  // /n is an escape charater to print a new line
	return 0; // this is our exit status -0 is good, 1 is bad ...
}
