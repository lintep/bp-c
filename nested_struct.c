// https://www.geeksforgeeks.org/how-to-declare-struct-inside-struct-in-c/
// https://www.geeksforgeeks.org/nested-structure-in-c-with-examples/

// C program to declare a structure inside a structure
#include <stdio.h>
#include <string.h> 

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

// Declaration of the  
// dependent structure 
struct Employee 
{ 
  int employee_id; 
  char name[20]; 
  int salary; 
}; 
  
// Declaration of the  
// Outer structure 
struct Organisation  
{ 
  char organisation_name[20]; 
  char org_number[20]; 
    
  // Dependent structure is used  
  // as a member inside the main 
  // structure for implementing  
  // nested structure 
  struct Employee emp;  
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


   printf("\n\n_________________________\n\n");

  // Structure variable 
  struct Organisation org;  
    
  // Print the size of organisation  
  // structure 
  printf("The size of structure organisation : %ld\n",  
          sizeof(org)); 
    
  org.emp.employee_id = 101;   
  strcpy(org.emp.name, "Robert"); 
  org.emp.salary = 400000; 
  strcpy(org.organisation_name,  
         "GeeksforGeeks"); 
  strcpy(org.org_number, "GFG123768"); 
    
    
  // Printing the details 
  printf("Organisation Name : %s\n",  
          org.organisation_name);   
  printf("Organisation Number : %s\n",  
          org.org_number);   
  printf("Employee id : %d\n",  
          org.emp.employee_id);   
  printf("Employee name : %s\n",  
          org.emp.name);   
  printf("Employee Salary : %d\n",  
          org.emp.salary);   

    return 0;
}
