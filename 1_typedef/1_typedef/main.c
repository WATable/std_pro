
#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
	char name[100];

	int  * age;
}STUDENT;

int main() 
{
	int a = 10000;

	//printf("============%d",a);
	STUDENT std = { "snake",&a};

	printf("value %s   %d" ,std.name,*std.age);
	system("pause");
	return EXIT_SUCCESS;
}