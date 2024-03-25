#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
���� ������ ���� �޾� 8������ 16������ ����ϴ� ���α׷�
%o�� %x���� ����������.. �غ���
*/
void Octal(int a) {
	int temp = a;
	int count = 0;

	while (1) {
		temp = temp / 8;

		//�迭�� ũ�⸦ �˾Ƴ��� ���� count
		count++;

		if (temp == 0) {
			break;
		}
	}

	//�迭�� �̿��ؼ� 8���� �� ����. �ʿ��� �迭�� ���̴� �����Ҵ�.
	int* OctalNumber = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {

		//�迭�� ���� �������� ����
		OctalNumber[i] = a % 8;

		a = a / 8;
	}
	printf("8���� : ");

	//���� ���������� �������� ����ϸ� ���� ��ȯ(�迭�� ������ NULL�̶� ��),
	for (int i = count - 1; i >= 0; i--) {

		//8���� ���	
		printf("%d", OctalNumber[i]);
	}
	printf("\n");

	//�޸� ����
	free(OctalNumber);
};

void sixteen(int a) {

	//����! �̷������!-��������
	char hex[17] = "0123456789ABCDEF";
	int temp = a;
	int count = 0;

	while (1) {

		temp = temp / 16;

		if (temp == 0) {
			break;
		}

		//�迭�� ũ�⸦ �˾Ƴ��� ���� count
		count++;
	}

	//�迭�� �̿��ؼ� 16���� �� ����. �ʿ��� �迭�� ���̴� �����Ҵ�.
	int* HexaDecimal = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++) {

		//�迭�� ���� �������� 16������ ����
		HexaDecimal[i] = hex[a % 16];

		a = a / 16;
	}
	printf("16���� : ");

	//���� ���������� �������� ����ϸ� ���� ��ȯ(�迭�� ������ NULL�̶� ��),
	for (int i = count - 1; i >= 0; i--) {

		//16���� ���
		printf("%c", HexaDecimal[i]);
	}
	printf("\n");

	//�޸� ����
	free(HexaDecimal);
};

int main(void) {
	printf("���� ������ �Է��ϼ��� : ");
	int number;
	scanf("%d", &number);

	//%o�� %x�� ������� �ʾ��� ��..
	if (number > 8) {
		Octal(number);
	}
	else {
		printf("%d", number);
	}

	if (number > 16) {
		sixteen(number);
	}
	else {
		printf("%d", number);
	}


	return 0;
}