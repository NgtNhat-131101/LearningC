#include <stdio.h>
#include <stdlib.h>

/*
This file will write and read an array using dynamic array
*/

typedef struct
{
    int *array;
    int size;
} intArray;


intArray write_array()
{
    intArray result;
    printf("Size of Array: "); scanf("%d", &result.size);

    result.array = (int*)malloc(result.size*sizeof(int));

    for (int i = 0; i < result.size; i++)
    {
        printf("Array[%d]: ", i);
        scanf("%d", result.array+i);
    }
    return result;
}

void read_array(intArray arr)
{
    printf("============Cac phan tu trong mang=============\n");
    for (int i = 0; i < arr.size; i++)
    {
        printf("Arr[%d] = %d\n", i, *arr.array + i);
    }
}


int main()
{   
    intArray dynamicArray = write_array();
    read_array(dynamicArray);
    
    return 0;
}