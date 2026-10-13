/*
 * week4_2_struct_student.c
 * Author: Azizjon
 * Student ID: 251ADB090
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[50]), id (int), grade (float)
// Example:
struct Student {
    char name[40];
    int id;
    int report;
    float grade;
};

int main(void) {
    // TODO: Declare two Student variables

    struct Student student1;
    struct Student student2;
    
    // TODO: Assign the values (use strcpy for the name):
    //       Student 1: Alice Johnson, 1001, 9.1
    //       Student 2: Bob Smith,     1002, 8.7

    strcpy(student1.name, "Joseph Jonson");
    student1.id = 10;
    student1.report = 0;
    student1.grade = 9.2;
    

    strcpy(student2.name, "Azizjon Rakhimjonov");
    student2.id = 90;
    student2.report = 0;
    student2.grade = 7.73;

    // TODO: Print each student exactly as:
    //       Student <k>: <name>, ID: <id>, Grade: <grade with 1 decimal, %.1f>

    printf("Student 1: %s, ID: %d, Grade: %.1f, Reports: %d\n", student1.name, student1.id, student1.grade, student1.report);
    printf("Student 2: %s, ID: %d, Grade: %.1f, Reports: %d\n", student2.name, student2.id, student2.grade, student2.report);
    return 0;
}
