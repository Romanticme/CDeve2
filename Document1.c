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
	getchar();
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
