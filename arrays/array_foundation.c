/*
=====================================================
Array Fundamentals Exercise
=====================================================
Program Purpose:
    This program demonstrates the fundamental operations
    performed on a fixed-size integer array in C.

Features:
    - Reads 10 integer values from the user.
    - Displays all stored values.
    - Finds the highest and lowest values.
    - Calculates the average of all values.
    - Performs a linear search for a user-provided value.
    - Counts how many values satisfy a given condition
      (grade >= 7).

Concepts Practiced:
    - Arrays
    - Iteration with for loops
    - Conditional statements (if)
    - Linear Search
    - Basic data aggregation (min, max, average, count)

Notes:
    - This exercise is part of my Data Structures and
      Algorithms (DSA) studies using the C language.
    - The implementation is intended for learning
      purposes and may be extended or improved later.
=====================================================
*/

#include <stdio.h>

int main(void) {
    int values[10];
    int highest = 0;
    float average = 0;
    int target = 0;
    int count = 0;

    // receives the grades from the user
    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    int lowest = values[0];

    // print all the vaues
    for (int i = 0; i < 10; i++) {
        printf("Value %d: %d\n", i + 1, values[i]);
    }

    // find the highest and lowest values
    for (int i = 0; i < 10; i++) {
        if (values[i] > highest) {
            highest = values[i];
        }

        if (values[i] < lowest) {
            lowest = values[i];
        }
    }

    // find the average
    for (int i = 0; i < 10; i++) {
        average += values[i];
    }
    average /= 10;

    printf("Highest value: %d\n", highest);
    printf("Lowest value: %d\n", lowest);
    printf("Average value: %.2f\n", average);

    // search for a specific value
    printf("Enter a value to search for: ");
    scanf("%d", &target);

    // prints the value and the index if found
    for (int i = 0; i < 10; i++) {
        if (values[i] == target) {
            printf("Value %d found at index %d\n", target, i);
            break;
        }
    }

    // count how many students have been approved (grade >= 7)
    for (int i = 0; i < 10; i++) {
        if (values[i] >= 7) {
            count ++;
        }
    }

    printf("Number of students approved: %d\n", count);

    printf("=====================================\n");
    printf("Final Report:\n");
    printf("Highest value: %d\n", highest);
    printf("Lowest value: %d\n", lowest);
    printf("Average value: %.2f\n", average);
    printf("Number of students approved: %d\n", count);
    printf("=====================================");


    return 0;
}