#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������ ������ ���� �޾� ���� ����ϴ� ���α׷�
int main(void) {

	int FirstNumber, SecondNumber, result;
	printf("���� �Է� : ");

	//scanf�� �Է� �ޱ�
	scanf_s("%d %d", &FirstNumber, &SecondNumber); 
	result = FirstNumber + SecondNumber;

	//printf���� ���
	printf("%d�� %d�� ���� %d�Դϴ�.", FirstNumber, SecondNumber, result); 

	return 0;	
}