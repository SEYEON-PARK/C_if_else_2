#include <stdio.h>

int main(void)
{
	int a;
	printf("������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("�Է��Ͻ� ������ ¦���Դϴ�.\n");
	else
		printf("�Է��Ͻ� ������ Ȧ���Դϴ�.\n");

	return 0;
}