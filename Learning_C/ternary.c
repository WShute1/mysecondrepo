#include<stdio.h>
//Ternary means composed of three items.
int main (){
//Applicable for any boolean condition equating to a true or false answer...
// test_condition? expression1  : expression2; //If the test condition is true, expression 1 is executed. If the test condition is false, expression2 is executed instead.
/*
int age = 24;
(age >=18)? printf("You can vote as you are %d", age) : printf("You cannot vote as you are %d", age);
*/
/*
char operator = '+';

int num1 = 8;
int num2 =7;

int result = (operator == '+')? (num1 + num2) : (num1 - num2); //This one checks the arithmetic operator and adds the two int numbers if the arithmetic operator is a +. The int result at the beginning of this line (line 16), assigns the exececuted result as a value against the term 'result'
printf("%d", result);
*/
//Using a ternary statement instead of an ifelse statement can make code cleaner and shorter.

int number = 32;

(number%2==0)?
printf("This is an even number"):
printf("This is an odd number");
}