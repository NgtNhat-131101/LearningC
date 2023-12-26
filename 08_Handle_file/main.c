#include <stdio.h>
#include <math.h>
#include <string.h>
#include "inc/headers.h"


void processingUART(char *data, int lenght)
{
    printf("Data UART: %s\n", data);

    if (strstr(data, "ON"))
    {
        printf("Turn on LED\n");
    }
    else if (strstr(data, "OFF"))
    {
        printf("Turn off LED");
    }
}

void processingUART_2(char *data, int len)
{
    printf("Data UART: %s\n", data);

    if (strstr(data, "BLINK"))
    {
        printf("Blink LED\n");
    }
    else if (strstr(data, "TOGGLE"))
    {
        printf("Toggle LED");
    }
}

int main()
{
    print_hello();
    return 0;
}
