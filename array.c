// https://www.geeksforgeeks.org/multidimensional-arrays-in-c/

// C Program to illustrate the 2D array
#include <stdio.h>

int two_d_array() {
  
    // Create and initialize an array with 3 rows
      // and 2 columns
    int arr[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };

    // Print each array element's value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
        }
          printf("\n");
    }

}

int three_d_array() {
  
    // Create and Initialize the 3-dimensional array
    int arr[2][3][2] = { { { 1, 1 }, { 2, 3 }, { 4, 5 } },
                         { { 6, 7 }, { 8, 9 }, { 10, 11 } } };

      // Loop through the depth
    for (int i = 0; i < 2; ++i) {
      
          // Loop through the rows of each depth
        for (int j = 0; j < 3; ++j) {
          
              // Loop through the columns of each row
            for (int k = 0; k < 2; ++k)
                printf("arr[%i][%i][%i] = %d   ", i, j, k,
                       arr[i][j][k]);
              printf("\n");
        }
      printf("\n\n");
    }
    
}

int main() {
    two_d_array();
    
    three_d_array();

    return 0;
}