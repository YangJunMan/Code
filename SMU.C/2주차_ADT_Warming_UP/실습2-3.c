#include <stdio.h>

// �� ������ ������ ���� ���Ͻÿ�
int main() {
	
	printf("�� ���� �Է��ϼ��� : ");
	int num[2];
	int result=0;
	for (int i = 0; i < 2; i++) {
		scanf("%d", &num[i]);
		if (num[i] < 0) {
			num[i] = num[i] * (-1);
		}
		result = result + num[i];
	}
	printf("��� : %d", result);
	
	return 0;

}