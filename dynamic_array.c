// https://www.geeksforgeeks.org/dynamic-array-in-c/



// C program to create dynamic array using malloc() function 
  
#include <stdio.h> 
#include <stdlib.h>
 
void malloc_example() {
  
    // address of the block created hold by this pointer 
    int* ptr; 
    int size; 
  
    // Size of the array 
    printf("Enter size of elements:"); 
    scanf("%d", &size); 
  
    //  Memory allocates dynamically using malloc() 
    ptr = (int*)malloc(size * sizeof(int)); 
  
    // Checking for memory allocation 
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
    } 
    else { 
  
        // Memory allocated 
        printf("Memory successfully allocated using "
               "malloc.\n"); 
  
        // Get the elements of the array 
        for (int j = 0; j < size; ++j) { 
            ptr[j] = j + 1; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (int k = 0; k < size; ++k) { 
            printf("%d, ", ptr[k]); 
        } 
    } 

}

void calloc_example(){
    // address of the block created hold by this pointer 
    int* ptr; 
    int size; 
  
    // Size of the array 
    printf("Enter size of elements:"); 
    scanf("%d", &size); 
  
    //  Memory allocates dynamically using calloc() 
    ptr = (int*)calloc(size, sizeof(int)); 
  
    // Checking for memory allocation 
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
    } 
    else { 
  
        // Memory allocated 
        printf("Memory successfully allocated using "
               "malloc.\n"); 
  
        // Get the elements of the array 
        for (int j = 0; j < size; ++j) { 
            ptr[j] = j + 1; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (int k = 0; k < size; ++k) { 
            printf("%d, ", ptr[k]); 
        } 
    } 

}

void resize_dynamic_array_using_realloc() {
  
    // address of the block created hold by this pointer 
    int* ptr; 
    int size = 5; 
  
  
    //  Memory allocates dynamically using calloc() 
    ptr = (int*)calloc(size, sizeof(int)); 
  
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
        printf("Memory successfully allocated using "
               "calloc.\n"); 
    } 
  
    // inserting elements 
    for (int j = 0; j < size; ++j) { 
        ptr[j] = j + 1; 
    } 
  
    printf("The elements of the array are: "); 
    for (int k = 0; k < size; ++k) { 
        printf("%d, ", ptr[k]); 
    } 
  
    printf("\n"); 
  
    size = 10; 
  
    int *temp = ptr; 
  
    //  using realloc 
    ptr = realloc(ptr, size * sizeof(int)); 
    if (!ptr) { 
        printf("Memory Re-allocation failed."); 
        ptr = temp; 
    } 
    else { 
        printf("Memory successfully re-allocated using "
               "realloc.\n"); 
    } 
  
    // inserting new elements 
    for (int j = 5; j < size; ++j) { 
        ptr[j] = j + 10; 
    } 
  
    printf("The new elements of the array are: "); 
    for (int k = 0; k < size; ++k) { 
        printf("%d, ", ptr[k]); 
    } 

    
}


int main() {

    malloc_example();

    printf("\n_________\n");

    calloc_example();
    
    printf("\n_________\n");
	
    resize_dynamic_array_using_realloc();

    return 0;
}
