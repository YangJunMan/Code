#include <stdio.h>

//500��, 100��, 50��, 10���� �ܵ� ��ȯ ��� ���α׷�.
int main(){
	
	int a, b, result;

	printf("�Աݾ� : ");
	scanf("%d", &a);

	printf("���ǰ� : ");
	scanf("%d", &b);

	result = a - b;

	printf("��  �� : %d��\n", result);

	if (result < a)
		printf("500��¥�� %d��\n", result / 500);
		printf("100��¥�� %d��\n", (result % 500) / 100);
		printf("50��¥�� %d��\n", ((result % 100) / 50);
		printf("10��¥�� %d��\n", (((result % 50) / 10);

	return 0;
}
