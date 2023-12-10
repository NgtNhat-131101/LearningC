#include <stdio.h>

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

    return 0;
}