#include <stdio.h>
/*
//Below isthe syntax for a 'for' loop.
int main(){

    for(initialisationExpression; testExpression;updateExpression){ //
        //code inside the for loop
    }
    return 0;
}
*/
int main(){
    int sum = 0;
    for(int i = 2; i <= 100; i= i+2) {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}