#include <stdio.h>
#include <stdlib.h>

int array[100];

void array_input(int *array, int *n)
{
	printf("Nhap so phan tu mang: ");
	scanf("%d", n);
	for (int i = 0; i < *n; i++)
	{
		printf("array[%d]: ", i);
		scanf("%d", array);
		array++;
	}

}

void array_output(int *array, int n)
{
	printf("Output\n");
	for(int i = 0; i < n; i++)
	{
		printf("array[%d] = %d\n", i, *array);
		array++;
	}
}
int *findMax(int *a, int *b)
{
	if (*a > *b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(){
	
	int x = 1000;// dia chi cua x la "x"

	int *pointer;

	/*
	 
	 &pt: dia chi cua con tro tren ram
	 pt: dia chi cua con tro tro den tren ram
	 *pt: gia tri tai vung dia chi con tro tro den tren ram
	 
	 */

	pointer = &x;

	printf("&x = %p\n",(void*)&x);

	printf("pointer = %p\n", (void*)pointer);
	if (pointer == &x){
		printf("(pointer) is address of x\n");
	}
	printf("&pointer la dia chi cua con tro tren ram: %p\n", (void*)&pointer);
	printf("*pointer la gia tri cua dia chi con tro tro den tren ram: %d\n", *pointer);
	printf("=========================================================================\n");
	// Mang la chuoi cac dia chi lien tiep tren RAM, khai bao nhu v nghia la dang khai bao dia chi, trong dia chi co cac gia tri 0x01, 0x02, 0x03,...
	char arr[10] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A};
	
	char *pt_0;
	char *pt_1;

	pt_0 = arr;
	pt_1 = arr;
	// *pt_0 la gia tri tai dia chi con tro tro den
	printf("pt_0 = %d\n", pt_0[0]); 

	for (int i = 0; i < 10; i++){
		printf("%x\n", *(pt_0+i));
	}
	printf("=========================================================================\n");
	
	int ArraySize;
	array_input(array, &ArraySize);
	array_output(array, ArraySize);
	printf("====================================================================\n");
	int a = 100;
	int b = 1000;
	
	int *result;
	result = findMax(&a, &b);
	printf("Max: %d\n", *result);

	return 0;
}

