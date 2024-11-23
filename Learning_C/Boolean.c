#include <stdio.h>
#include <stdbool.h>

int main (){

    // bool value1 = true; // true returns a value of 1
    // bool value2 = false; // false returns a value of 0

    // bool value1 = (12>9); // "greater than" operator
    // bool value2 = (12<9); // "less than" operator

    // bool value1 = (12==12); // "Equal to" operator
    // bool value2 = (12!=12); // "NOT Equal to" operator

    // bool value1 = (12>=12); // "Greater than or equal to" operator
    // bool value2 =  (12<=9); // "Less than or equal to" operator
    
   //  bool value1 = (<=12.11); // It doesn't matter if floating point values are being used.
   // bool value2 = (12.32<=12.11);

   /* double double1 = 24.246;
    double double2 = 13.86;

    int num1 = 24;
    int num2 = 13;

    bool value1 = (double1>=double2);
    bool value2 = (num1<=num2);

    printf("Boolean Value 1: %d\n", value1);
    printf("Boolean Value 2: %d", value2);
*/
   //  int age = 28;
   // double height = 5.95;

    // bool result = (age>=18)&&(height>=5.5); // "AND" Operator - This only returns a true result if both statements are true.
    // bool result = (age>=18)||(height>=5.5); // "OR" Operator - This returns a true result if either of the results are true. It will still return a true statement if both results are true.
    
    // For the "NOT" Operator, it only works with a single statement. Therefore in the below example, the statement regarding height has been removed.
    
    int age = 8;
    
    bool result = !(age>=18); // So the "!" is the "NOT" Operator. In this example a result of 1 (or true) has been returned. This is because essentially the statement is not not true and therefore kinda true. We flip it!
    printf ("Result = %d", result);

    return 0;
}
