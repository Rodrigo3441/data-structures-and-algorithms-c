#include <stdio.h>
#include <stdbool.h>

int select_sort(int *arr, int size){
	
	int total_steps = 0;
    int total_swaps = 0;
    
    for (int i = 0; i < size - 1; i++){
    	
    	int lowest = i;
    	
    	for (int j = i + 1; j < size - 1; j++){
    		total_steps++;
    		
    		if (arr[j] < arr[lowest]){
    			lowest = j;
			}
				
		}
		
		int temp = arr[i];
		arr[i] = arr[lowest];
		arr[lowest] = temp;
		
		total_swaps++;
		
	}
	
	printf("The array has been sorted in ascending order using the Select Sort algorithm.\n");
    printf("Total steps: %d\n", total_steps);
    printf("Total swaps: %d\n", total_swaps);
	
}
