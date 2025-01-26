// https://www.geeksforgeeks.org/structures-c/

#include <stdio.h>

#include <stdlib.h>


// Defining a structure to represent a student
struct Student {
    char name[50];
    int age;
    float grade;
};

void simple_struct() {
  
    // Declaring and initializing a structure
    // variable
    struct Student s1 = {"Rahul",20, 18.5};
  
    // Designated Initializing another stucture
      struct Student s2 = {.age = 18, .name =
      "Vikas", .grade = 22};
    
    // Accessing structure members
    printf("%s\t%d\t%.2f\n", s1.name, s1.age,
    s1.grade);
    printf("%s\t%d\t%.2f\n", s2.name, s2.age,
    s2.grade);
    
}

struct Student2 {
    int id;
      char grade;
};

int copy_struct() {
    struct Student2 s1 = {1, 'A'};
  
      // Create a copy of student s1
    struct Student2 s1c = s1;

    printf("Student2 1 ID: %d\n", s1c.id);
    printf("Student2 1 Grade: %c", s1c.grade);

}

// Structure definition
struct A {
    int x;
};

// Function to increment values
void increment(struct A a, struct A* b) {
      a.x++;
      b->x++;
}


void passing_structure_to_functions(){
      struct A a  = { 10 };
      struct A b  = { 10 };
  
      // Passing a by value and b by pointer
      increment(a, &b);
  
      printf("a.x: %d \tb.x: %d", a.x, b.x);
}


int main() {

    simple_struct();

    printf("\n_______________\n");

    copy_struct();

    printf("\n_______________\n");
    
    passing_structure_to_functions();

    return 0;
}
