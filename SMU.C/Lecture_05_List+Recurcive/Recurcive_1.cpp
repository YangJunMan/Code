#include <stdio.h>

//����Լ� �̿��ϱ�
int Sum(int i) {
	if (i==1) {
		return 1;
	}
	else {
		return (i+Sum(i-1));
	}
}

int main() {
	printf("�ϳ��� ������ �Է��ϼ��� : ");
	int num;
	scanf("%d", &num);
	printf("5������ �� : %d",Sum(num));
}