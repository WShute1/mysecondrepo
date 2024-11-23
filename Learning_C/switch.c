#include<stdio.h>

/*
switch(variable/expression) { 
    case value1://If the result of the variable or the expression is equal to value1, then the body of case 1 shall be executed.
        //body of case 1;
        break; //It is important to use break after each case, otherwise every case will be performed.

    case value2:
        //body of case 2;
        break;

    case valueN:
        //body of case N;
        break;        

    default:        //If no case value is matched, the default case shall be executed.
        //body of default;
}
*/
/*
int main (){
    
    int number;
    printf("Please enter a number between 1 and 7: ");
    scanf("%d", &number);

    switch(number) {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;  

        case 4:
        printf("Thursday");
        break; 

        case 5:
        printf("Friday");
        break; 

        case 6:
        printf("Saturday");
        break;  

        case 7:
        printf("Sunday");
        break;

        default:
        printf("No day of the week selected");  
    }

    return 0;
}
*/
/* //The below script highlights that multiple cases can be assigned to the same subsequent execution.
int main (){
    
    int number;
    printf("Please enter a number between 1 and 7: ");
    scanf("%d", &number);

    switch(number) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("Weekday");
        break;

        case 6:
        case 7:
        printf("Weekend");
        break;  

        default:
        printf("No day of the week selected");  
    }

    return 0;
}
*/
//The below script is a basic calculator.
int main(){

    char operator;
    printf("Choose an operator: ");
    scanf("%c", &operator);

    float num1, num2;

    printf("Enter first number here : ");
    scanf("%f", &num1);
    printf("Enter second number here : ");
    scanf("%f", &num2);

    float result;

    switch (operator) {
        case '+':
        result = num1+num2;
        break;

        case '-':
        result = num1-num2;
        break;

        case '*':
        result = num1*num2;    
        break;

        case '/':
        result = num1/num2;
        break;

    }

printf("The answer is %f", result);

    return 0;
}