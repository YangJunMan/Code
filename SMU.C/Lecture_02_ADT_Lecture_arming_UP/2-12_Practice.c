#include <stdio.h>

//�ܼ� �ݺ� ��� ���α׷�
int main() {
	char a;
	while (1) {
		printf("�� ���ڸ� �Է��ϼ��� : ");
		scanf_s(" %c", &a);

		//q �Է½� ����
		if (a == 'q' || a == 'Q') {
			break;
		}
		printf("�Է��� ���� : %c\n", a);

	}

	return 0;
}