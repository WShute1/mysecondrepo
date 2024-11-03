#include <stdio.h>

/**
 * @brief 
 * This brief and asterix format comes from the extension Doxygen Documentation Generator
 */
 union TypeConverter {
        int intValue;
        float floatValue;
 };

int main() {
    union TypeConverter converter;
    //converter.floatValue =3.14;
    converter.intValue =3;
    printf("Union memory address:%p\n", &converter);
    printf("Union.float = %.2f,memory address: %p\n",converter.floatValue, &converter.floatValue);
    printf("Union.int = %d memory address: %p\n\n", converter.intValue,&converter.intValue);
    }