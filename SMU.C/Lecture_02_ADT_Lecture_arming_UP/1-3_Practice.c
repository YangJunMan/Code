#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������ �Ǽ��� �Է¹޾� 2�� ���� ���� ����ϴ� ���α׷�
int main(void) {
	float number;
	printf("�Ǽ����� �Է��ϼ��� : ");
	scanf("%f", &number);
	float result = number / 2;

	//.2f�� �Ҽ��� 2°�ڸ�����
	printf("��� : %.2f", result);  
	return 0;
}