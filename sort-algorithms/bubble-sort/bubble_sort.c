#include <stdio.h>
#include <stdbool.h>
#include "bubble_sort.h"

int bubble_sort(int *arr, int size){

    int total_steps = 0;
    int total_swaps = 0;

    for (int i = 0; i < size - 1; i++){
        bool has_swapped = false;

        for (int j = 0; j < size - i -1; j++){
            total_steps++;

            if (arr[j] > arr[j + 1]){
                total_swaps++;

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                has_swapped = true;
            }

            
        }

        if (!has_swapped){
            break;
        }
    }

    printf("The array has been sorted in ascending order using the Bubble Sort algorithm.\n");
    printf("Total steps: %d\n", total_steps);
    printf("Total swaps: %d\n", total_swaps);
    
    return 0;
}