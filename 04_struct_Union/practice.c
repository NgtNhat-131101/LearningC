#include <stdio.h>

typedef struct
{
	char name[30];
	int class;
	char id_student[10];

} student_t;

void write_info(student_t *sv, int *n)
{
    printf("Nhap so hoc sinh: ");
    scanf("%d", n);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    for (int i = 0; i < *n; i++)
    {
        printf("Thong tin hoc sinh thu %d: \n", i + 1);
        printf("Ten hoc sinh: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        

        printf("Lop: ");
        scanf("%d", &sv[i].class);
        
        while ((c = getchar()) != '\n' && c != EOF);

        printf("MSSV: ");
        fgets(sv[i].id_student, sizeof(sv[i].id_student), stdin);
        printf("===================================================\n");
    }
}


void read_info(student_t *sv, int n)
{
    printf("%-10s%-5s%-10s\n", "Ten", "Lop", "MSSV");
    for (int i = 0; i < n; i++)
    {
        printf("%-10s%-5d%-10s", sv[i].name, sv[i].class, sv[i].id_student);
        printf("\n");
    }
}

int main()
{
    student_t student[100];
    int num;
    write_info(student, &num);
    read_info(student, num);
}

// 1:23:06