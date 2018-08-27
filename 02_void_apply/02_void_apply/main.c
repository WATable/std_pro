#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
	char name[64];

	int  age;
}Student, *StudentStr;

void SetStdInfo(Student * info,char name[] ,int age) {

	(*info).age = age;

	*(*info).name = *name;
}


//
void TestVoid()
{
	int *pint = NULL;

	char *pChar = NULL;
	void *p = NULL;
	p = pint;
}

int main()
{
	//TestVoid();

	Student stu = {.age = 0,.name = "snake"};
	printf("============>>>  %s", stu.name);
	system("pause");
	return EXIT_SUCCESS;
}