#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� ������ ������ �Է¹޾� �� �ڸ����� ���
int main(void) {
	int number;
	int hun;
	int ten;
	int one;
	printf("�Է� : ");
	scanf("%d", &number);

	hun = number / 100;					//�����ڸ�
	ten = (number % 100) / 10;			//10���ڸ�
	one = (number % 100) % 10;			//1���ڸ�
	 if (99 < number < 1000) {
		printf("�����ڸ� : %d \n�����ڸ� : %d \n�����ڸ� : %d",hun,ten,one);
	}
	else {
		printf("�� ������ ������ �Է����ּ���.\n");
	} 
	return 0;
}