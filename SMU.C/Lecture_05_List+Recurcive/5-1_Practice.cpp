#include <stdio.h>
#include <iostream>
#include "5-1.h"
using namespace std;

int main() {

	struct mylist A;
	int item;
	//����Ʈ�� 1���� ���� ���̱� ������ ���
	Insert(&A, 0, 10); 
	
	//����Ʈ 1���� 11�� ����
	Insert(&A, 1, 11); 
	
	//����Ʈ 2���� 12�� ����
	Insert(&A, 2, 12); 
	
	//����Ʈ 1���� 13�� �����Ͽ� ����Ʈ�� �� 3��,������ ����Ʈ�� �з���
	Insert(&A, 1, 10); 
	
	//�߰� ����
	Retrieve(&A, 2, &item);
	
	//����Ʈ 1���� �����.
	Delete(&A,1); 
	
	// ����Ʈ 1���� ��������� Ȯ��.
	IsEmpty(&A, 1); 
	
	// ����Ʈ 1���� ������
	Destroy(&A, 1); 
	
	// ����Ʈ 1�� �ڸ��� �� �̵��ߴ���?
	IsEmpty(&A, 1); 

	// 10�� ������ ����Ʈ�� 2���� �Ǻ�
	Length(&A); 

	//����Ʈ 1������ 11, ����Ʈ 2������ 12�� ����Ǿ�����.
	Retrieve(&A, 2, &item); 

	//item���� �� ����Ǿ����� Ȯ��

	printf("item�� : %d\n", item); 
	
	return 0;
}