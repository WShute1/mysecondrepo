#include <stdio.h>
//The below is the basic syntax of the while loop.
/*
int main(){

    while (condition){ //The "condition" is a boolean condition with either a true or false answer.
        //statements inside while;  //If the condition is true, the statements here are completed and the while loop is evaluated again. This will continue until the original condition becomes false.

    }


    return 0;
}
*/
/*
int main (){

    int count = 1;

    while (count<5){
        printf("count number is %d\n", count);
        printf("While loop in C\n");
        count = count+1;
    }

    printf("Final count number is %d", count);

    return 0;
}
*/
/*
//The below script is able to use the while loop to create a multiplication table of any number
int main (){

    double number;
    printf("Please enter the number here:");
    scanf("%lf", &number);
    
    int count = 1;

    while (count <=10){
        double product = number*count;
        printf("%.2lf x %d = %.2lf\n", number, count, product);
        count = count + 1;
    }
    return 0;
}
*/
/*
//Below is the basic strucutre of the do while loop.
 int main () {
    do {
        //body of loop;         //The body of the loop is executed first.
    } while condition;          // Subsequent to the body of the loop being executed, the while condition is assessed. If it's true, the body of the loop is repeated. 

    return 0;
 }
 */

 int main () {
    int count = 1;

    do {
    printf("%d\n", count);
    count = count +1;    
    } while (count<5);  

    return 0;
 }
 //The major difference between the while loop and the do while loop is that even if the while condition is false, the do while loop will still have one output as the do is prior to the while condition check.