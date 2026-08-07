#include <stdio.h>
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
		
			for (int i = left_index; i < right_index; i++){
			printf("%d -> ", arr[i]);
			}	
		
			printf("]\n");
		}
		
}

int merge_sort(int *arr, int left_index, int right_index){
	int size = right_index - left_index;
	int medium = (right_index + left_index) / 2;
	
	// stops division if the array only contains one element
	if (size < 1){
		print_division_status(arr, left_index, right_index);
		return arr;
	}
	
	print_division_status(arr, left_index, right_index);
	
	int *left_array = merge_sort(arr, left_index, medium);
	
	int *right_array = merge_sort(arr, medium+1, right_index);
}
