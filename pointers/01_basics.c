#include <stdio.h>

int main(void){
	
    int age = 23;
    float dolar_price = 5.24;
    double real_price = 0.86;
    char initial_name = 'A';
    int number_array[5] = {5,3,7,5,3};
    
    // pointers for the values
    int *age_ptr = &age;
    float *dolar_price_ptr = &dolar_price;
    double *real_price_ptr = &real_price;
    char *initial_name_ptr = &initial_name;
    int *number_array_ptr = number_array; // array name is a pointer to the first element of the array
    
    
    for (int i = 0; i < 5; i++){
    	printf("value: %d\n", number_array_ptr[i]);
	}
	
	
	int number = 20;
	
	int *a = &number;
	int *b = &number;
	
	printf("%d\n", *a);
	printf("%d\n", *b);
	
	*a = 100;
	
	printf("%d\n", *a);
	printf("%d\n", *b);
	
	int baka = 23;
	
	int *baka1 = &baka;
	
	int **baka2 = &baka1;
	
	printf("baka value: %d | baka1 pointer: %p\n", baka, baka1);
	printf("baka1 value: %d | baka2 pointer: %p\n;", baka1, &baka2);

    return 0;
}
