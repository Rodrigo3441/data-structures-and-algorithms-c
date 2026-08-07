#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void){
	bool is_menu_running = true;
	int numberA = 0;
	int numberB = 0;
	
	printf("Enter a number A: ");
	scanf("%d", &numberA);
	
	printf("Enter a number B: ");
	scanf("%d", &numberB);
	
	while (is_menu_running){
		printf("Current Numbers:\n");
		printf("Number A: %d\n", numberA);
		printf("Number B: %d\n\n", numberB);
		
		printf("=========================================\n");
		printf("Select your desired procedure: \n");
		printf("1- Double Number A\n");
		printf("2- Swap Number A and B\n");
		printf("3- Exit\n");
		printf("=========================================\n\n");
		
		char option;
		
		scanf(" %c", &option);
		
		switch (option){
			case '1':
				printf("case 1\n");
				break;
			case '2':
				swap(&numberA, &numberB);
				break;
			case '3':
				is_menu_running = false;
				break;
		}
		
	}

	
	
	return 0;
}
