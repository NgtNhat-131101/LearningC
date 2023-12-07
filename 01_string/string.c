#include <stdio.h>
#include <string.h>
void removespace(char str [],int index ){
	str[index] = str[index+1];
	for (int i = index; i < strlen(str); i++){
		str[i] = str[i + 1];
	}
}

void find_letter_t(char str[]){
	int index;
	char *letter = "t";
	char *pointer = strstr(str, letter);
	while(pointer){
		printf("%ld\n", pointer - str);
		pointer = strstr(pointer + 1, letter);
	}

}

void GetString(char *string[], char *letter[]){
	printf("Type your string: ");
	scanf("%[^\n]", string);
	
	printf("Type your letter: ");
	scanf("%s", letter);
}

void find_char(char str[], char letter[]){
	char *pointer = strstr(str, letter);
	while(pointer){
		printf("%ld\n", pointer - str);
		pointer = strstr(pointer+1, letter);
	}
}
int find_number_char(char str[], char letter[]){
	char *pointer = strstr(str, letter);
	int count = 0;
	while(pointer){
		count++;
		pointer = strstr(pointer+1, letter);
	}
	return count;
}

int main(void){
	printf("-----------------------------------------\n");
	char full_name[] = "Nguyen Tien Nhat Hello World ! ";
	char *space = " ";
	char *pt = strstr(full_name, space);
	while (pt != NULL){
		int index = pt - full_name;
		removespace(full_name, index);
		pt = strstr(full_name, space);
		printf("%s\n", full_name);
	}
	printf("-----------------------------------------\n");
	printf("Using strtok\n");

	char number[] = "01/04/2023/430/120/1998/102/234";
	char *pointer = strtok(number, "/");

	while (pointer){
		printf("%s\n", pointer);
		
		pointer = strtok(NULL, "/");
	}
	printf("-----------------------------------------\n");
	printf("Using sprintf\n");
	
	int date = 13;
	int month = 11;
	int year = 2001;

	char date_of_birth[20];

	sprintf(date_of_birth, "%02d/%02d/%04d", date, month, year);
	printf("your birth day is: %s\n",date_of_birth);

	printf("=========================================\n");
	char string[] = "Deviot.vn";
	find_letter_t(string);
	
	printf("=========================================\n");
	char string_1[100], letter_1[4];
	GetString(string_1, letter_1);
	printf("%s\n", string_1);
	printf("%s\n", letter_1);
	find_char(string_1, letter_1);
	printf("===================Ex3===================\n");
	char get_date[] = "26/10/2023";
	char *date_3 = strtok(get_date, "/");
	printf("%s\n", date_3);
	char *month_3 = strtok(NULL, "/");
	printf("%s\n", month_3);
	char *year_3 = strtok(NULL, "/");
	printf("%s\n", year_3);
	printf("===================Ex5===================\n");
	char string_2[100], letter_2[10];
	int count;
	GetString(string_2, letter_2);
	count = find_number_char(string_2, letter_2);
	
	printf("%d", count);
	return 0;
}
