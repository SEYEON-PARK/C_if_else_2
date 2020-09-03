#include <stdio.h>

int main(void)
{
	int a;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("입력하신 정수는 짝수입니다.\n");
	else
		printf("입력하신 정수는 홀수입니다.\n");

	return 0;
}