#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������ �Ǽ��� �Է¹޾� 2�� ���� ���� ����ϴ� ���α׷�
int main(void) {
	float a;
	printf("�Ǽ����� �Է��ϼ��� : ");
	scanf("%f", &a);
	float result = a / 2;
	printf("��� : %.2f", result);  //.2f�� �Ҽ��� 2°�ڸ�����
	return 0;
}