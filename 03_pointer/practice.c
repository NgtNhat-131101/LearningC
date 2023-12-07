#include <stdio.h>
#include <stdlib.h>

// Su dung con tro de sap xep mot mang theo thu tu tang dan

void main(void){
	printf("===========exercise===============");
	char array[] = {10, 4,2,9, 0, -3};
	char *pt;
	pt = array;

	int len = sizeof(array)/sizeof(array[0]);

	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j ++){
			if (*(pt + i) > *(pt + j)){
				char temp = *(pt + j);
				*(pt + j) = *(pt + i);
				*(pt + i) = temp;
			}
		}
	}
	for (int i = 0; i < len-1; i++)
	{
		printf("%d\n", *(pt + i));
	}
}
