#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� ������ �Է¹޾� �־��� ���� ����ϴ� ���α׷�

int main(void) {
	printf("�� ������ �Է� : ");
	int a, b;
	scanf("%d %d", &a, &b);

	//int �����̶�� �Ϳ� ����
	int result = (a + b) / (a - b);
	printf("��� : %d", result);

	return 0;
}