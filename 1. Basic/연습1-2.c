#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//���� ������ ���� �޾� 8������ 16������ ����ϴ� ���α׷�
int eight(int a) { 
	int tempA = a;
	int count = 0;
	
	while (1) {

		tempA = tempA / 8;
		count++;
		if (tempA == 0) {
			break;
		}
	}													//�迭�� ũ�⸦ �˾Ƴ��� ���� count
	int* ejinsu = malloc(sizeof(int) * count);          //�迭�� �̿��ؼ� ��� ����� ���� ����� �Է¹ޱ� ���� �����Ҵ�

	for (int i = 0; i < count; i++) {
		ejinsu[i] = a % 8;
		a = a / 8;										//�迭�� ���� �������� ����
	}
	printf("8���� : ");
	for (int i = count - 1; i >= 0; i--) {
		printf("%d", ejinsu[i]);						//���� ���������� �������� ����ϸ� ���� ��ȯ(�迭�� ������ NULL�̶� ��), ��¿Ϸ�
	}
};		//8���� ���	

int sixteen(int a) {
	char hex[17] = "0123456789ABCDEF";					//����! �̷������!-��������
	int tempA = a;
	int count = 0;

	while (1) {

		tempA = tempA / 16;
		count++;
		if (tempA == 0) {
			break;
		}
	}													//�迭�� ũ�⸦ �˾Ƴ��� ���� count
	int* ejinsu = malloc(sizeof(int) * count);          //�迭�� �̿��ؼ� ��� ����� ���� ����� �Է¹ޱ� ���� �����Ҵ�

	for (int i = 0; i < count; i++) {	

			ejinsu[i] = hex[a%16];						//�迭�� ���� �������� 16������ ����
		a = a / 16;										
	}
	printf("16���� : ");
	for (int i = count - 1; i >= 0; i--) {
		printf("%c", ejinsu[i]);						//���� ���������� �������� ����ϸ� ���� ��ȯ(�迭�� ������ NULL�̶� ��), ��¿Ϸ�
	}
};		//16���� ���

int main(void) {
	printf("���� ���� : ");
	int no;
	scanf("%d", &no);
	//%o�� %x�� ������� �ʾ��� ��.. ���ýô� �������
	eight(no);
	printf("\n");
	sixteen(no);
	

	return 0;
}  //%o�� %x���� �����ϴ��� �׷��� ���ϼ̴� �� �ϱ��..?