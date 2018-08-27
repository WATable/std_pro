#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>



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
	TestVoid();

	system("pause");
	return EXIT_SUCCESS;
}