#include <stdio.h>
#include <stdbool.h>
#include "insertion_sort.h"

int insertion_sort(int *arr, int size){

    int total_steps = 0;
    int total_swaps = 0;

  	for (int i = 1; i < size; i++){
  		int key = arr[i];
  		int j = i - 1;
  		
  		while (j >= 0 && arr[j] > key){
  			total_steps++;
  			total_swaps++;
  			
  			arr[j+1] = arr[j];
  			j = j - 1;
		}
		arr[j + 1] = key;
	}
	
    printf("The array has been sorted in ascending order using the Insertion Sort algorithm.\n");
    printf("Total steps: %d\n", total_steps);
    printf("Total swaps: %d\n", total_swaps);
    
    return 0;
}
