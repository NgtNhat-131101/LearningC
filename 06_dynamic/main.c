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
        printf("Arr[%d] = %d\n", i, *(arr.array + i));
    }
}

intArray add_element(intArray oldArray)
{
    intArray result;

    int new_element;
    result.size = oldArray.size + 1;

    printf("Nhap vao phan tu can them: "); scanf("%d", &new_element);
    result.array = (int *)calloc((result.size), sizeof(int));

    for (int i = 0; i < result.size; i++)
    {
        *(result.array + i) = oldArray.array[i];
    }
    *(result.array + result.size - 1) = new_element;

    free(oldArray.array);

    return result;
}

int main()
{   
    intArray dynamicArray = write_array();
    read_array(dynamicArray);

    // int new_element;
    intArray new_array = add_element(dynamicArray);
    read_array(new_array);

    free(new_array.array);
    return 0;
}