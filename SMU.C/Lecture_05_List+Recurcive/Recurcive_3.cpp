#include <stdio.h>

//����Լ��� �̿��� ���丮�� ����
int Factorial(int i) {
	if (i == 1) {
		return 1;
	}
	else {
		return (i*Factorial(i-1));
	}
}

int main() {
	printf("�ϳ��� ������ �Է��ϼ��� : ");
	int num;

	scanf("%d", &num);
	printf("%d������ �� : %d",num, Factorial(num));
}