#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� 5���� �Է¹޾� �Ϸķ� ����ϰ� �� ����� ����ϴ� ���α׷�
int main(void) {
	int num1, num2, num3, num4, num5;					

	printf("�ټ����� ������ �Է��ϼ��� : ");
	
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	int sum = (num1 + num2 + num3 + num4 + num5);
	float result = sum / 5.0f;

	//10�ڸ����� �������� �迭
	printf("%10d \n%10d \n%10d \n%10d \n%10d \n", num1, num2, num3, num4, num5);     
	printf("------------\n");
	printf("%10.2f", result);

}