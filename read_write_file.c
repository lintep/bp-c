// https://www.geeksforgeeks.org/basics-file-handling-c/

// C program to Open a File,
// Write in it, And Close the File
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void create_write_text_file()
{

    // Declare the file pointer
    FILE* filePointer;

    // Get the data to be written in file
    char dataToBeWritten[50] = "GeeksforGeeks-A Computer "
                               "Science Portal for Geeks";

    // Open the existing file GfgTest.c using fopen()
    // in write mode using "w" attribute
    filePointer = fopen("GfgTest.c", "w");

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL) {
        printf("GfgTest.c file failed to open.");
    }
    else {

        printf("The file is now opened.\n");

        // Write the dataToBeWritten into the file
        if (strlen(dataToBeWritten) > 0) {

            // writing in the file using fputs()
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }

        // Closing the file using fclose()
        fclose(filePointer);

        printf("Data successfully written in file "
               "GfgTest.c\n");
        printf("The file is now closed.");
    }
  
}


void read_text_file()
{

    // Declare the file pointer
    FILE* filePointer;

    // Declare the variable for the data to be read from
    // file
    char dataToBeRead[50];

    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("GfgTest.c", "r");

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL) {
        printf("GfgTest.c file failed to open.");
    }
    else {

        printf("The file is now opened.\n");

        // Read the dataToBeRead from the file
        // using fgets() method
        while (fgets(dataToBeRead, 50, filePointer)
               != NULL) {

            // Print the dataToBeRead
            printf("%s", dataToBeRead);
        }

        // Closing the file using fclose()
        fclose(filePointer);

        printf(
            "Data successfully read from file GfgTest.c\n");
        printf("The file is now closed.");
    }

}


struct threeNum {
    int n1, n2, n3;
};


void write_binary_file_with_struct() {

    int n;
    // Structure variable declared here.
    struct threeNum num;
    FILE* fptr;
    if ((fptr = fopen("program.bin", "wb")) == NULL) {
        printf("Error! opening file");
        // If file pointer will return NULL
        // Program will exit.
        exit(1);
    }
    int flag = 0;
    // else it will return a pointer to the file.
    for (n = 1; n < 5; ++n) {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        flag = fwrite(&num, sizeof(struct threeNum), 1,
                      fptr);
    }

    // checking if the data is written
    if (!flag) {
        printf("Write Operation Failure");
    }
    else {
        printf("Write Operation Successful");
    }

    fclose(fptr);
    
}

void read_binary_file()
{
    int n;
    struct threeNum num;
    FILE* fptr;
    if ((fptr = fopen("program.bin", "rb")) == NULL) {
        printf("Error! opening file");
        // If file pointer will return NULL
        // Program will exit.
        exit(1);
    }
    // else it will return a pointer to the file.
    for (n = 1; n < 5; ++n) {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2,
               num.n3);
    }
    fclose(fptr);

}


int main() {

    create_write_text_file();

    printf("\n------------------\n");

    read_text_file();

    printf("\n*************\n");

    write_binary_file_with_struct();

    printf("\n------------------\n");
    
    read_binary_file();

    return 0;
}
