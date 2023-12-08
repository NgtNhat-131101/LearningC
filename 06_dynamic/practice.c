#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int age;
    float score;
} student_t;

typedef struct 
{
    student_t *list;
    int size;
} list_info;

void Write_student(list_info *students) {
    if (students->size >= 10) {
        printf("Limit 10 students!\n");
        return;
    }

    printf("Number of students: ");
    scanf("%d", &students->size);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    students->list = (student_t *)malloc(students->size * sizeof(student_t));

    for (int i = 0; i < students->size; i++) {
        students->list[i].name = (char *)malloc(50 * sizeof(char)); // Allocate memory for the name
        printf("Name of %d student: ", i + 1);
        fgets((students->list + i)->name, 50, stdin);

        printf("Age of Student %d: ", i + 1);
        scanf("%d", &students->list[i].age);
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Score of Student %d: ", i+1); scanf("%f", &students->list[i].score);
        while ((c = getchar()) != '\n' && c != EOF);
        printf("=========================================\n");
    }
}

void read_info(list_info students)
{
    for (int i = 0; i < students.size; i++)
    {
        printf("||\tInformation of student %d:   ||\n", i+1);
        printf("||\tName: %s", students.list[i].name);
        printf("||\tAge: %d\t\n", (students.list+i)->age);
        printf("||\tScore: %.2f\n", (students.list + i)->score);
        printf("||==================================||\n");
    }
}

void Add_student(list_info students);
void Modify(list_info students);
void Delete_student(list_info students);

int main()
{
    list_info students;
    students.size = 0;
    students.list = NULL;
    students.list = (student_t *)calloc(students.size, sizeof(student_t));
    Write_student(&students);
    printf("READ INFO OF STUDENTS\n");
    printf("||==================================||\n\n");
    read_info(students);
    free(students.list);
    return 0;
}