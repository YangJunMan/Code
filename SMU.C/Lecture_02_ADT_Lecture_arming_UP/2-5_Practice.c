#include <stdio.h>

//������ ���� ���� ���
int main() {
	printf("������ �Է��ϼ��� : ");

	int k, e, m;
	
	scanf("%d %d %d", &k, &e, &m);

	float result = (float)(k + e + m) / 3;

	printf(" ��� : %/2f \n", result);

	if (result > 90) {
		printf("�������߾��");
	} 
	else if (result > 80) {
		printf("���߾��");
	}
	else if (result > 70) {
		printf("����ؾ߰ھ��");
	}
	else {
		printf("���� ���� ����ؾ߰ھ��.");
	}

	return 0;

}