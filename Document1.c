#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char pwd[20] = { 0 };
	printf("����������:");
	scanf("%s",pwd);
	getchar();
	printf("������Դ�:");
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