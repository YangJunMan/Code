#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������ ������ ���� �޾� ���� ����ϴ� ���α׷�
int main(void) {
	int no, count, result;
	printf("���� �Է� : ");
	scanf_s("%d %d", &no, &count); //scanf�� �Է� �ޱ�
	result = no + count;
	printf("%d�� %d�� ���� %d�Դϴ�.", no, count, result); //printf���� ���

	return 0;	
}