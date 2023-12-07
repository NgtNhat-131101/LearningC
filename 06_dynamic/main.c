#include <stdio.h>
#include <stdlib.h>

// cap phat tinh
typedef struct
{
    char *name;
    int age;
    float score;
} info_t;


int main()
{   
    // tao 1 mang 10 phan tu kieu int
    // int *pt = calloc(10, sizeof(int));
    
    info_t *student;
    student = malloc(1*sizeof(int));
    student->name = malloc(50);
    printf("Nhap ten: ");
    fgets((student->name), sizeof(student->name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &student->age);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Nhap diem: ");
    scanf("%f", &student->score);
    free(student->name);
    free(student);
    return 0;
}