#include <stdio.h>


void Increasing(int *array[]){
	
}

void SetArray(int array[],int *SizeOfArray){

	// SizeOfArray -> Dia Chi
	// *SizeOfArray -> Gia tri
	printf("Set number of elements in array: ");
	scanf("%d", SizeOfArray);

	printf("Set element in array: \n");
	for ( int i = 0; i < *SizeOfArray; i++ ){
		printf("Array[%d] = ", i);
		scanf("%d" , &array[i]);
	} 
}

void ShowArray(int array[],int SizeOfArray){
	for (int i = 0; i < SizeOfArray; i++){
		printf("Array[%d] = %d\n", i, array[i]);
	}
}

void PassByValue(int x){
	x = x - 1;
}

void PassByReference(int* x){
	*x = *x - 1;
}

int main(void){
	int array[100], SizeOfArray = 0 ;
	SetArray(array, &SizeOfArray);

	printf("=========================\n");
	printf("Values in array: \n");
	ShowArray(array, SizeOfArray);

	printf("=========================\n");

	int x = 100;
	PassByValue(x);
	printf("Pass By Value: %d\n", x);
	PassByReference(&x);
	printf("Pass By Reference: %d\n", x);

	printf("=========================\n");


	return 0;
}
