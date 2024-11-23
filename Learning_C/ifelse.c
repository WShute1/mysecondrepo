#include <stdio.h>


int main (){

/*
if (test condition) { //If the test condition is true, the body of if statement is executed.
    //body of IF statement
}
*/


//The below uses two IF statements.
/* int age;
printf("Enter your age: ");
scanf("%d", &age);

if(age>=18){
    printf("\nApproved to Vote");
}
if(age<18){
    printf("\nUnderage! Not permitted to vote");
}
    return 0;
}
*/
//The BELOW uses the If Else statement.
/*
int age;
printf("Enter your age: ");
scanf("%d", &age);

if(age>=18){
    printf("\nApproved to Vote");
    
    return 0;
}
else{
    printf("\nUnderage! Not permitted to vote");
}
return 0;
}
*/
//Below represents the standard format for the else if statement inclusion.
/*
if(test_condition1) {       //If test_condition 1 is true, it will return statement 1
    body of statement 1;
}
else if(test_condition2){    //If test_condition 1 is false but test_condition 2 is true, the else if statement is returned.
    body of statement 2;
}
else {                      //If neither test condition 1 or 2 are correct, then the else statement (statement3) is returned.
    body of statement 3;
    }
*/
    
int age;
printf("Please enter age: ");
scanf("%d", &age);

if(age>120 || age <0){ // Using the OR operator (||) means that two if statements can be combined into a single check.
    printf("Invalid Age");
}

else if(age>=18){
    printf("Permitted to vote");
}
else {
    printf("Ineligible to vote");
}

        return 0;
}