#include <stdio.h>

//1���� 100���� Ȧ���� �հ�, ¦���� ���� ����ϴ� ���α׷�
int main() {
	int result = 0;

	for (int i = 1; i <= 100; i++) {
		result = result + i;
		i++;
	}
	printf("Ȧ���� �� : %d\n", result);

	result = 0;

	for (int i = 0; i <= 100; i++) {
		result = result + i;
		i++;
	}
	printf("¦���� �� : %d", result);


	return 0;
}