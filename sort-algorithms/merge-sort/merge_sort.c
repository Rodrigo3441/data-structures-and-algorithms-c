#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"

void print_division_status(
			int *arr, 
			int left_index,
			int right_index)
		{
		
		if (right_index - left_index < 1){
			
			printf("[%d]\n", arr[left_index]);
			
		} else {
			printf("[");
		
			for (int i = left_index; i <= right_index; i++){
			printf("%d -> ", arr[i]);
			}	
		
			printf("]\n");
		}
		
}

void merge(int *arr, int left_index, int right_index, int medium){
	// fingers that will point to each array
	int i, j, k;
	int left_size = medium - left_index + 1;
	int right_size = right_index - medium;
	
	// tmp arrays
	int *left = (int*)malloc(left_size * sizeof(int));
	int *right = (int*)malloc(right_size * sizeof(int));
	
	// populates the left array
	for (i = 0; i < left_size; i++){
		left[i] = arr[left_index + i];
	}
	//populates the right array
	for (j = 0; j < right_size; j++){
		right[j] = arr[medium + 1 + j];
	}
	
	// restart the control variables
	i = 0;
	j = 0;
	k = left_index;
	
	while (i < left_size && j < right_size){
		if (left[i] <= right[j]){
			arr[k] = left[i];
			i++;
		} else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}
		
	while (i < left_size){
		arr[k] = left[i];
		i++;
		k++;
	}
	
	while (j < right_size){
		arr[k] = right[j];
		j++;
		k++;
	}
	
	// clean up temporary arrays used during the execution
	free(left);
	free(right);

	for (int i = 0; i <= right_index; i++){
		printf("[%d]",arr[i]);
	}
	printf("\n");
}

void merge_sort(int *arr, int left_index, int right_index){
	int size = right_index - left_index;
	int medium = (right_index + left_index) / 2;
	
	// stops division if the array only contains one element
	if (size < 1){
//		print_division_status(arr, left_index, right_index);
		return;
	}
	
//	print_division_status(arr, left_index, right_index);
	
	merge_sort(arr, left_index, medium);
	merge_sort(arr, medium+1, right_index);
	
	merge(arr, left_index, right_index, medium);
}

