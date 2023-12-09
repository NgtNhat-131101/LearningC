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
    printf("Number of students: ");
    scanf("%d", &students->size);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    if (students->size >= 10) {
        printf("Limit 10 students!\n");
        return;
    }

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

list_info Add_student(list_info Oldstudents, student_t *new_student)
{   
    list_info result;
    result.size = Oldstudents.size + 1;
    new_student->name = (char *)malloc(50*sizeof(char));

    // Input 
    int c;
    printf("Enter information of new student \n");
    printf("Name of student: ");
    fgets(new_student->name, 50, stdin);
    printf("Age: "); scanf("%d", &new_student->age);

    printf("Score: "); scanf("%f", &new_student->score);

    for (int i = 0; i < result.size; i++)
    {
        *(result.list + i) = Oldstudents.list[i];
    }

    result.list[result.size - 1] = *new_student;

    // free(Oldstudents.list);
    return result;
}
void Modify(list_info *students)
{
    int position;
    printf("Position of student you want to modify (0, %d): ", students->size - 1); scanf("%d", &position);
    
    if (position < 0 || position >= students->size) {
        // Handle invalid position
        printf("Invalid position\n");
        return;
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("New name for student: ");
    fgets(students->list[position].name, 50, stdin);
    printf("Age: "); scanf("%d", &students->list[position].age);
    printf("Score: "); scanf("%f", &students->list[position].score);

    while ((c = getchar()) != '\n' && c != EOF);
    

    printf("Information modified successfully.\n");
}

list_info Delete_student(list_info students)
{
    list_info result;
    int position;
    printf("Index of Student you want to remove (0, %d): ", students.size - 1); scanf("%d", &position);
    result.size = students.size - 1;
    int index = 0;

    if (position < 0 || position >= students.size) {

        printf("Invalid position\n");
        result.size = students.size;
        result.list = students.list;
        return result;
    }

    result.list = (student_t *)malloc(result.size*sizeof(student_t));

    for (int i = 0; i < students.size; i++)
    {
        if (i != position)
        {
            result.list[index] = students.list[i];
            index++;
        }
    }
    return result;
}

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

    student_t *new_student;


    // If you use pointer, you need to allocate new memory
    // If you use value variable, you don't neet to allocate new memory
    /*
    You can do 2 line of code below in another way:

    ==============================
    student_t new_student;
    Add_student(students, &new_student)
    ==============================

    */
    new_student = (student_t*)malloc(sizeof(student_t));
    list_info result;
    result = Add_student(students, new_student);
    printf("READ INFO OF STUDENTS\n");
    printf("||==================================||\n\n");
    read_info(result);
    result = Delete_student(result);
    read_info(result);
    Modify(&result);
    read_info(result);

    free(result.list);
    return 0;
}