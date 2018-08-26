#pragma once
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

enum WindowType
{
	Login = 1,
	MENU = 2,
}WindowType;


void LoginWindow()
{
	printf("==================================================\n\n");
	printf("\t\t欢迎来到学生管理系统\n\n");
	printf("==================================================\n\n");
	char * ret = (char*)malloc(10);
	char c;
	int i = 0;
	while ((c = getchar())!='\n')
	{
		ret[i++] = c;
	}
	const int num = i;
	char * args = malloc(sizeof(char)*i);
	//strncpy(str2, str1, 2);
	//char * args = 


	printf("%s====%d\n", ret,i);
	//key = _getch();
	//scanf_s("继续吗？%s", &key, 10);
	//printf("按下的是:%s\n", key);
}

enum WindowType windowType = Login;

void SwtichWindow(enum WindowType wtype)
{
	windowType = wtype;

	switch (windowType)
	{
	case Login:
		LoginWindow();
		break;
	case MENU:

		break;
	default:
		break;
	}
}





