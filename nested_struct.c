// https://www.geeksforgeeks.org/how-to-declare-struct-inside-struct-in-c/

// C program to declare a structure inside a structure
#include <stdio.h>

// Declaring the inner struct
struct InnerStruct {
    char innerChar;
    float innerFloat;
};

// Declaring the outer struct
struct OuterStruct {
    int outerData;
    struct InnerStruct inner;
};

int main()
{
    // Creating an instance of the outer struct
    struct OuterStruct myStruct;

    // Accessing and modifying the members of the inner
    // struct
    myStruct.inner.innerChar = 'X';
    myStruct.inner.innerFloat = 5.14;

    // Accessing the members of both the outer and
    // inner structs
    printf("Outer Data: %d\n", myStruct.outerData);
    printf("Inner Char: %c\n", myStruct.inner.innerChar);
    printf("Inner Float: %.2f\n",
           myStruct.inner.innerFloat);

    return 0;
}
