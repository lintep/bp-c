// https://www.geeksforgeeks.org/introduction-to-recursion-2/

// more example https://www.geeksforgeeks.org/c-recursion/

#include <stdio.h>

// Recursive function to find the sum of 
// numbers from 0 to n
int findSum(int n)
{
    // Base case 
    if (n == 0) 
        return 0; 
  
    // Recursive case 
    return n + findSum(n - 1);
}

int fact(int n) {
  
    // BASE CONDITION
    if (n == 0)
        return 1;
  
    return n * fact(n - 1);
}

void printFun(int test)
{
    if (test < 1)
        return;
    else {
        printf("%d ", test);
        printFun(test - 1); // statement 2
        printf("%d ", test);
        return;
    }
}

// Function for fibonacci
int fib(int n)
{
    // Stop condition
    if (n == 0)
        return 0;

    // Stop condition
    if (n == 1 || n == 2)
        return 1;

    // Recursion function
    else
        return (fib(n - 1) + fib(n - 2));
}


int main()
{
    int n = 5;
    printf("%d", findSum(n));

    printf("\n____________________\n");

    printf("Factorial of 5 : %d\n", fact(5));

    printf("\n____________________\n");

    int test = 3;
    printFun(test);

    printf("\n____________________\n");

    // Initialize variable n.
    n = 5;
    printf("Fibonacci series "
           "of %d numbers is: ",
           n);

    // for loop to print the fibonacci series.
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
