/* 
this file is outdated, it'll be reviewed later
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 50


/*
Purpose:
    Sorts an integer array in ascending order using
    the Bubble Sort algorithm.
*/

int bubble_sort(int *arr, int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return 0;
}

/*
Purpose:
    Performs a Linear Search to locate a target value
    by checking each array element sequentially.
*/
int linear_search(int *arr, int size, int target) {
    int total_steps = 0;

    for (int i = 0; i < size; i++){
        total_steps++;

        if (arr[i] == target){
            printf("SUMMARY");
            printf("The array value%d is equal to the target %d\n", arr[i], target);
            printf("Total steps to complete the search: ");

            return 1;
        }
    }

    return -1;
}

/*
Purpose:
    Performs an iterative Binary Search on a sorted
    array to locate the target value.
*/
int binary_search(int *arr, int size, int target) {

    
    int start = 0;
    int end = size - 1;
    int total_steps = 0;

    while (start <= end) {
        int pivot = start + (start + end) / 2;

        total_steps++;
        printf("%d == %d\n", arr[pivot], target);

        if (arr[pivot] == target){
            printf("total steps: %d\n", total_steps);
            return 1;
        } 

        if (arr[pivot] < target){
            start = pivot + 1;
            printf("moving the start pointer to %d\n", arr[start]);
        } else {
            end = pivot - 1;
            printf("moving the end pointer to %d\n", arr[end]);
        }

    }

    return -1;
}

/*
Purpose:
    Generates sample data, sorts the array, receives
    user input, and executes the search algorithms.
*/
int main(void) {
    srand(time(NULL));

    int target;
    int values[ARRAY_SIZE];

    // generates a random number for each array position
    for (int i = 0; i < ARRAY_SIZE; i++) {
        values[i] = rand(); 
    }

    // print all the array values
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("%d -> ", values[i]);
    }

    printf("Enter the value you want to find: ");
    scanf("%d", &target);

    // sorts the array

    bubble_sort(values, ARRAY_SIZE);

    // print all the array values
    for (int i = 0; i < ARRAY_SIZE; i++){
        printf("%d -> ", values[i]);
    }

    printf("NULL\n");

    if (binary_search(values, ARRAY_SIZE, target) != -1){
        printf("The value was found");
    } else {
        printf("The file wasn't found");
    }

    // binary_search(values, 100, target);

    
    return 0;
}