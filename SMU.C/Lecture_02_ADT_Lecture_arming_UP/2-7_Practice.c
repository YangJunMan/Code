#include <stdio.h>


//���� ���� ������ �Է¹��� ��, 10%�� ������ �ݾ��� ���ϴ� ���α׷�
int main(){
	
	int price, number, result;

	printf("���ǰ� : ");
	scanf("%d", &price);

	printf("��  �� : ");
	scanf("%d", &number);

	result = price * number;

	if (result >= 5000)
		printf("��  �� : %d\n", result - (result / 10));

	else if (0<result < 5000)
		printf("��  �� : %d\n", result);
	else {
		printf("�ùٸ� �ݾ��� �Է����ּ���.");
	}

	return 0;
}
