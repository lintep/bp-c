// https://www.geeksforgeeks.org/pointer-array-array-pointer/

// C Program to illustrate the 2D array
#include <stdio.h>

void one_d_array() {
  
 int arr[5] = {1, 2, 3, 4, 5};

    // Create a pointer to integer
    int *p1;

    // Pointer to an array of 5 integers
    int(*p2)[5];

    // Points to 0th element of the arr
    p1 = arr;

    // Points to the whole array arr
    p2 = &arr;
  
      printf("p1 = %p\n", p1);
      printf("*p2 = %p\n\n", *p2);
  
      // incrementing both pointers
    p1++;
    p2++;
    printf("p1 = %p\n", p1);
    printf("*p2 = %p", p2);

}

void two_d_array(){
    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
  
      // pointer to above array
    int (*ptr)[2][3] = &arr;

      // Traversing the arry using ptr
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
                printf("%d ", (*ptr)[i][j]);
        }
        printf("\n");
    }

}

int three_d_array() {
  
    int arr[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}},
                       {{7, 8}, {9, 10}, {11, 12}}};

    // Pointer to the 3D array
    int (*ptr)[2][3][2] = &arr;

    // Traversing the 3D array using the pointer
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", (*ptr)[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    
}


int main() {

    one_d_array();

    two_d_array();
    
    three_d_array();

    return 0;
}
