#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�� ������ �Է¹ް� ��� ������ ���
int main(void) {
	int a, b;
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	printf("�� : %d \n", a / b);
	printf("������ : %d", a % b);

	return 0;
}