#include <stdio.h>

//1���� 10������ ���� ���Ľ��� ����ϴ� ���α׷�
int main() {
	int sum = 0;
	for (int i = 1; i < 11; i++) {
		
		sum = sum + i;

		printf("%2d   ->   %2d\n", i, sum);
	}

	return 0;

}