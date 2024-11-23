#include "include/header.h"

int main( int argc, char* argv[]){

if (argc ==2){
    greeter(argv[1]);
}
else {
    greeter("nobody");
}
    printf("Value of PI is : %.5lf", PI);
    printf("\nValue of GI is : %.5lf", GR);
    return 0;
}