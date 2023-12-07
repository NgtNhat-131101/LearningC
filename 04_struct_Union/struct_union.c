#include <stdio.h>

typedef struct
{
	char name[30];
	int class;
	char id_student[10];

} student_t;

int main(){
	// student_t student[2];
	// for (int i = 0; i < 2; i++)
	// {
	// 	printf("Nhap thong tin sinh vien thu %d: \n", i+1);
	// 	printf("Ten: ");
	// 	//char *fgets(char *str, int n, FILE *stream)
	// 	fgets(student[i].name, sizeof(student[i].name), stdin);
	// 	printf("Nhap lop: ");
	// 	scanf("%d", &student[i].class);

	// 	int c;
	// 	while ((c = getchar()) != '\n' && c != EOF);

	// 	printf("Ma so sinh vien: ");
	// 	fgets(student[i].id_student, sizeof(student[i].id_student), stdin);
	// 	printf("============================================================\n");
	// }

	// printf("Thong tin sinh vien : \n");
	
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("%20s %5d %10s\n", student[i].name, student[i].class, student[i].id_student);
	// }

	
	return 0;
}
