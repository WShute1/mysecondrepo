    #include<stdio.h>
    
    int main(){
    //    int age; // an int variable to store the input data.
    //    double number;
    //    char alphabet;

    //    printf("Enter Age Value: "); // This function means that when the executable file is expecting an input, a prompt is created.
    //    scanf("%d", &age); //inside the function there are two variables, the format specifier "%d". The second variable is the variable name. The "&"" represents the memory address of the age variable and where it will be stored.

    //    printf("Enter Double and Character Input Values: ");
    //    scanf("\n%lf %c", &number, &alphabet);
        
    //    printf("Enter character input: ");
    //    scanf("\n%c", &alphabet);

    //    printf("Age=%d\n", age);
    //    printf("Number=%lf\n", number);
    //    printf("Character=%c", alphabet);

        int value1;
        int value2;

        printf("Multiplier!");
        printf("\nEnter two numbers with a space between: ");
        scanf("%d %d", &value1, & value2);

        printf("Multiplied value = %d", value1*value2); 

        return 0;
    }