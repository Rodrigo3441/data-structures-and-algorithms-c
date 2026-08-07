#ifndef MERGE_SORT_H
#define MERGE_SORT_H

void merge_sort(int *arr, int left, int right);
void print_division_status(
			int *arr, 
			int left_index,
			int right_index);
void merge(int *arr, int left_index, int right_index, int medium);

#endif
