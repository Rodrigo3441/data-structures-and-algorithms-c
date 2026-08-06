#include <stdio.h>
#include "bubble-sort/bubble_sort.h"
#include "select-sort/select_sort.h"
#include "insertion-sort/insertion_sort.h"

void print_array(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d -> ", arr[i]);
    }

    printf("NULL\n");
}

int main(void) {
    int size = 20;

    int values[20] = {84, 12, 67, 45, 93, 29, 51, 78, 36, 90, 14, 62, 73, 5, 88, 41, 99, 27, 50, 61};
	int values2[20] = {84, 12, 67, 45, 93, 29, 51, 78, 36, 90, 14, 62, 73, 5, 88, 41, 99, 27, 50, 61};
	int values3[20] = {84, 12, 67, 45, 93, 29, 51, 78, 36, 90, 14, 62, 73, 5, 88, 41, 99, 27, 50, 61};
//    print_array(values, size);

	select_sort(values, size);
    insertion_sort(values2, size);
    bubble_sort(values3, size);
//    print_array(values, size);

    return 0;
}
