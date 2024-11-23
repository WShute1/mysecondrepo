/* 
Addition        +
Subtraction     -
Multiplication  *
Division        /
Remainder      %
Increment       ++
Decrement       --
*/

#include<stdio.h>

int main(){

/*int x = 12;

// int result = x + 8;
//printf("%d", result);

//printf("%d", x+8);

// char x ='5'; //The code automatically converts this 5 to it's ascii value which is 53.
double x = 5.67; // The code converts this to a 5 as the int result is for integer.
int y = 9;

//int result = x + y;
double result = x + y;
//int remainder = x % y;

//printf("%d", result);
printf("%lf", result);
//printf("\n%d", remainder);

return 0;
}
*/

double a = 5.67;
int b = 9;

double result =(int)a + b; //the (int)a represents an EXPLICIT type conversion as data is being lost, 5.67 is being converted to 5.
int result2 = (b%6);
printf("%d\n", result2);
printf("%lf", result);

return 0;
}