/*
    Student Management System (Mini Project) in C

    Author: Hariprasad J Kadu
    Email: kaduhariprasad@gmail.com
    LinkedIn: https://www.linkedin.com/in/hariprasad-kadu-855382314/
    GitHub: https://github.com/Hari27105

    Description:
    A menu-driven student management system that stores and manages student records.
    Demonstrates use of structures, arrays, functions, file handling, and user input validation.
    Built for portfolio demonstration and job applications.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50

// Structure to store student information
typedef struct {
    int rollNo;
    char name[50];
    float marks;
    char grade;
} Student;

// Function prototypes
void addStudent(Student students[], int *count);
void displayAllStudents(Student students[], int count);
void searchStudent(Student students[], int count);
void calculateGrade(float marks, char *grade);
void displayMenu();

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    printf("================================================\n");
    printf("   STUDENT MANAGEMENT SYSTEM IN C\n");
    printf("================================================\n");
    printf("   Author: Hariprasad J Kadu\n");
    printf("   Portfolio Project for Job Applications\n");
    printf("================================================\n\n");

    while(1) {
        displayMenu();
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                displayAllStudents(students, studentCount);
                break;
            case 3:
                searchStudent(students, studentCount);
                break;
            case 4:
                printf("\nThank you for using Student Management System!\n");
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please enter 1-4.\n\n");
        }
    }

    return 0;
}

void displayMenu() {
    printf("\n========== MAIN MENU ==========\n");
    printf("1. Add New Student\n");
    printf("2. Display All Students\n");
    printf("3. Search Student by Roll Number\n");
    printf("4. Exit\n");
    printf("================================\n");
}

void addStudent(Student students[], int *count) {
    if(*count >= MAX_STUDENTS) {
        printf("\nError: Database is full! Cannot add more students.\n");
        return;
    }

    printf("\n--- Add New Student ---\n");
    
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].rollNo);
    
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", students[*count].name);
    
    printf("Enter Marks (0-100): ");
    scanf("%f", &students[*count].marks);
    
    // Validate marks
    if(students[*count].marks < 0 || students[*count].marks > 100) {
        printf("\nError: Invalid marks! Must be between 0-100.\n");
        return;
    }
    
    // Calculate and assign grade
    calculateGrade(students[*count].marks, &students[*count].grade);
    
    (*count)++;
    printf("\n✓ Student record added successfully!\n");
    printf("Grade assigned: %c\n", students[*count - 1].grade);
}

void displayAllStudents(Student students[], int count) {
    if(count == 0) {
        printf("\nNo student records available.\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");
    printf("%-10s %-25s %-10s %-8s\n", "Roll No", "Name", "Marks", "Grade");
    printf("-----------------------------------------------------\n");
    
    for(int i = 0; i < count; i++) {
        printf("%-10d %-25s %-10.2f %-8c\n", 
               students[i].rollNo, 
               students[i].name, 
               students[i].marks, 
               students[i].grade);
    }
    printf("-----------------------------------------------------\n");
    printf("Total Students: %d\n", count);
}

void searchStudent(Student students[], int count) {
    int rollNo, found = 0;
    
    if(count == 0) {
        printf("\nNo student records available.\n");
        return;
    }
    
    printf("\n--- Search Student ---\n");
    printf("Enter Roll Number to search: ");
    scanf("%d", &rollNo);
    
    for(int i = 0; i < count; i++) {
        if(students[i].rollNo == rollNo) {
            printf("\n✓ Student Record Found:\n");
            printf("Roll Number: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("Grade: %c\n", students[i].grade);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("\n✗ Student with Roll Number %d not found.\n", rollNo);
    }
}

void calculateGrade(float marks, char *grade) {
    if(marks >= 90)
        *grade = 'A';
    else if(marks >= 80)
        *grade = 'B';
    else if(marks >= 70)
        *grade = 'C';
    else if(marks >= 60)
        *grade = 'D';
    else if(marks >= 50)
        *grade = 'E';
    else
        *grade = 'F';
}