#include <stdio.h>


//1~9���� ������ ����ǥ�� ����ϴ� ���α׷�
int main() {

	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			//���� ����� *ǥ��
			printf(" * ");

			for (int j = 1; j < 10; j++) {
				printf("%2d ", j);
			}
		}
		else {
			printf("%2d ", i);
			for (int j = 1; j < 10; j++) {
				printf("%2d ", i*j);
			}
		}
		

		printf("\n");
	}

	return 0;
}