#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ȭ���µ�, �����µ� ��ȯ ���α׷�
int main(void) {
	float hwa;
	float sup;
	printf("ȭ���µ��� �Է��ϼ��� : ");

	scanf("%f", &hwa);

	sup = ((float)5 / 9) * (hwa - 32);

	printf("�����µ��� %.2f���Դϴ�.",sup);

	return 0;
}