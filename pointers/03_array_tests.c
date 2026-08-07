#include <stdio.h>
#include <stdbool.h>

int main(void){
	int arr[5] = {5,2,34,7,8};
	
	// arr[i] = *(arr + i) (i: offset sizeof(type))
	// since arrays are continuous in memory, this syntax works as well
	for (int i = 0; i < 4; i++){
		printf("%d", *(arr + i));
	}
	
	
	return 0;
}
