#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�� ������ ������ �Է¹޾� �� �ڸ����� ���
int main(void) {
	int a;
	int hun;
	int ten;
	int one;
	printf("�Է� : ");
	scanf("%d", &a);

	hun = a / 100;					//�����ڸ�
	ten = (a % 100) / 10;			//10���ڸ�
	one = (a % 100) % 10;			//1���ڸ�
	 if (99 < a < 1000) {
		printf("�����ڸ� : %d \n�����ڸ� : %d \n�����ڸ� : %d",hun,ten,one);
	}
	else {
		printf("�� ������ ������ �Է����ּ���.");
	} 
	return 0;
}