#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����, ����, ���������� �޾� ����� ���ϴ� ���α׷�
int main(void) {
	float korean,english,math;
	printf("���� : ");
	scanf("%f", &korean);
	printf("���� : ");
	scanf("%f", &english);
	printf("���� : ");
	scanf("%f", &math);

	float result = (korean + english + math) / 3;
	printf("��� : %.1f", result);

	return 0;
}