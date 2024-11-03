#include <stdio.h> // we need this library to get access to the input and out put methods for printing to terminal

int main()
{
    printf("Hello World\n"); // lets say hello, where it all began...
    int age =28; //Specifying an integer variable
    printf("Age:%d\n", age); //Basic print function
    printf("New Age:%d\n", age*3); //Added maths into the printf function

    int firstNumber, thirdNumber = 25; //Two variables can be assigned the same value on one line.
    printf("First Number:%d\n", firstNumber);
    int secondNumber = 42;
    printf("Second Number:%d\n", secondNumber);
    printf("Multiplied Value:%d\n", firstNumber*secondNumber); //Maths of multiplying two variables
    printf("Third Number:%d\n", thirdNumber);

    double value = 122.36;
    float quantity = -12.414299f; //Notice the f after the number to denote float. Also used a negative to trial if that works...
    printf("The double number is %lf\n", value); // This is using the double data type. The output has 6 decimal places.
    printf("The double number is %.2lf\n", value); // By changing the format of the printing from %lf to %.2lf, the decimal places will reduce to 2 d.p.
    printf("The float quantity is %.4f\n", quantity); // Used to 4 decimal places. Notice it rounds up from the original float quantity, it doesn't just cut the d.ps. off
    double number = 5.5e6;
    printf("Using e6 = %.0lf\n", number);
    char character = 'W';
    printf("\n%c\n", character); // Only a single bite, so only single characters. Notice only single quotation marks used.
    printf("%d\n", character); // The character is internally stored as a number. One can print the number which has been associated to the character. For W, 87 was printed in the output.
    printf("int size = %zu\n", sizeof(age)); // Provides the bite size of a specified variable.

    printf("Goodbye World\n"); // this seems fitting as the program will close after this.
    
    return 0; // returns 0 to the int of main() and terminate the program
}