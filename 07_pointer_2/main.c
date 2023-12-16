#include <stdio.h>
#include <stdlib.h>

// void allocate_dynamic(int **p, int n)
// {
//     *p = calloc(n, sizeof(int));
// }

void writeArray(int **arr, int n)
{
    if (arr == NULL || n <= 0)
    {
        printf("Invalid array or size");
        return;
    }
    for (int i = 0; i <n ; i++)
    {
        arr[i] = calloc(n, sizeof(int));
        if (arr[i] == NULL)
        {
            printf("Memory allocate invalid");
            exit(1);
        }
        printf("Enter element %d: ", i);
        scanf("%d", arr[i]);
    }
}

int main()
{
    int value = 5;
    int *pt = &value;
    int **p2p = &pt;
    
    printf("&value = %p\n", (void *)&value);

    // Print the value of the pointer `pt` (address it holds)
    printf("pt = %p\n", (void *)pt);

    // Print the address of the pointer `pt`
    printf("&pt = %p\n", (void *)&pt);

    // Print the value of the pointer `p2p` (address it holds, which is the address of `pt`)
    printf("p2p = %p\n", (void *)p2p);

    // Print the value of the pointer `pt` (address it points to, the address of `value`)
    printf("*p2p = %p\n", (void *)*p2p);

    // Print the value stored at the address pointed to by `pt` (value of `value`)
    printf("**p2p = %d\n", **p2p);

    int *pointer = NULL;

    // int n = 10;
    printf("====================================\n");
    int n;
    printf("Enter the number of array: ");
    scanf("%d", &n);
    int **array = (int **)malloc(n*sizeof(int *));

    writeArray(array, n);

    return 0;
}