#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
ȭ���µ� <->�����µ� ��ȯ ���α׷�
��ȯ ������ ���ۿ���..
*/
int main(void) {

	float Fahrenheit;
	float Celsius;
	printf("ȭ���µ��� �Է��ϼ��� : ");

	scanf("%f", &Fahrenheit);

	Celsius = ((float)5 / 9) * (Fahrenheit - 32);

	printf("�����µ��� %.2f���Դϴ�.",Celsius);

	return 0;
}