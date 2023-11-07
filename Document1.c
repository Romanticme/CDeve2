#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char pwd[20] = { 0 };
	printf("input your password:");
	scanf("%s",pwd);
	getchar();
	printf("Are you Sure?:");
	int judge = getchar();
	getchar();//只写这个的话只会吸收一个空格
	/*
 	int ch = 0;
	while ((ch = getchar()) != '\n') {
	};
 	*/
	//如果在代码中将getchar（）换成上述代码，则可以使输入密码时有空格不会导致空格误输入进判断中，直到回车才会判断
	if (judge == 'y') {
		printf("right");
	}
	else if(judge=='n') {
		printf("no");
	}
	else
	{
		printf("buhefa");
	}
	return 0;
}
