#include <stdio.h>

//�����ȣ�� ���ڸ� �Է¹޾� ����ϴ� ���α׷�
int main(){

	char giho;
	
	int a, b;

	printf("�Է�(�����ȣ, ����1, ����2) : ");
	scanf("%c %d %d", &giho, &a, &b);

	if (giho == '+') {
		printf("������ : %d\n", a + b);
	}
	else if (giho == '-') {
		printf("������ : %d\n", a - b);
	}
	else if (giho == '*') {
		printf("������ : %d\n", a * b);
	}
	else if (giho == '/') {
		printf("������ : %d\n", a / b);
	}
	else {
		printf("�ùٸ� ��ȣ�� �Է����ּ���.");
	}
	
	return 0;

}

