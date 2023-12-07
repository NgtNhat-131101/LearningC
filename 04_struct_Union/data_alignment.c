#include <stdio.h>

typedef struct
{
    char full_name[30];
    char sex[5];
    double math;
    double physics;
    double chemistry;
    double average;
} student_t;

void write_info(student_t *student, int *number)
{
    printf("Nhap so sinh vien: ");
    scanf("%d", number);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    for (int i = 0; i < *number; i++)
    {
        printf("Thong tin sinh vien thu %d: \n", i+1);
        printf("Ten hoc sinh: ");
        fgets((student + i)->full_name, sizeof((student + i)->full_name), stdin);

        printf("Nhap gioi tinh cua sinh vien: ");
        fgets(student[i].sex, sizeof(student[i].sex), stdin);

        printf("Nhap diem toan: ");
        scanf("%lf", &student[i].math);
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Nhap diem ly: ");
        scanf("%lf", &student[i].physics);
        while ((c = getchar()) != '\n' && c != EOF);

        printf("nhap diem hoa: ");
        scanf("%lf", &student[i].chemistry);
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Nhap diem trung binh: ");
        scanf("%lf", &student[i].average);
        while ((c = getchar()) != '\n' && c != EOF);
        printf("=============================================\n");
    }
}

void read_info(student_t *student, int n)
{
    printf("Danh sach sinh vien: \n");
    for (int i = 0; i < n; i++){
        printf("Thong tin sinh vien thu %d: ", i+1);
        printf("%s", student[i].full_name);
    }
}

void classification(student_t *student, int n)
{
    int k;
    printf("Nhap hoc sinh muon biet xep loai: ");
    scanf("%d", &k);
    if (student[k - 1].average >= 8){
        printf("Gioi");
    }
    else if (student[k - 1].average >=5 && student[k - 1].average<= 7){
        printf("Kha");
    }
    else{
        printf("Yeu");
    }

}

void cal_average(student_t *student, int n)
{
    double average = 0;
    for (int i = 0; i < n; i++)
    {
        average += student[i].average;
    }
    average /= n;
    printf("Diem trung binh cua tat ca sinh vien la: %lf\n", average);
}

int main()
{
    student_t student[100];
    int n;
    write_info(student, &n);
    int func;
    while(1){
        printf("Nhap 1, 2, 3: \n");
        printf("Nhap vao chuc nang muon chon ");
        scanf("%d", &func);
        if (func == 1){
            cal_average(student, n);
        }
        else if (func == 2){
            classification(student, n);
        }
        else if (func == 3){
            read_info(student, n);
        }
        printf("Nhap 0 de thoat!!!\n");
        // scanf("%d", &func);
        printf("===============================================\n");
        if (func == 0){
            break;
        }
    }
    return 0;
}