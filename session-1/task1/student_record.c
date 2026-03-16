/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student student1) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    float average = 0;
    for (int i = 0; i < 3; i++) {
        average += student1.marks[i];
    };
    
    return (average/3); // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student student1) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    printf("Name: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("Marks: %.1f, %.1f, %.1f\n", student1.marks[0], student1.marks[1], student1.marks[2]);
    printf("Average Mark: %.2f\n", calculate_average(student1));
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    
    Student student1 = {
        .id = 12345,
        .name = "John Smith",
        .marks = {75.0, 68.5, 81.0}
    };
    
    // TODO: display the student data and average mark
    
    return 0;
}