#include "stack_class.h"
#include <iostream>

//���� ����
void Stack::Create() {
	Top = -1;
}

//���� ���� Ȯ��
bool Stack::IsEmpty() {
	return Top == -1;
}

//���� ��ȭ�� Ȯ��
bool Stack::IsFull() {
	return Top == MAX - 1;
}

//���� �ױ�
void Stack::Push(int item) {
	if (IsFull()) {
		printf("���� �ױ⿡ �����߽��ϴ�.\n");
	}
	else {
		stack[++Top] = item;
		printf("������ �׽��ϴ�.\n");
	}

}

//���� ������ top�� ��ġ�ϴ� ����?
void Stack::GetTop() {
	printf("���� Top : %d \n", stack[Top]);
}

//���� 1�� ����
void Stack::Pop() {
	if (IsEmpty()) {
		printf("��Ʈ�� ������ �����ϴ�.\n");
	}
	else {
		stack[Top] = NULL;
		Top--;
		printf("������ Pop�մϴ�\n");
	}
}

//���� ũ�� ���ϱ�
void Stack::GetSize() {
	printf("���� ������ %d�� ��ŭ �׿��ֽ��ϴ�.\n", Top + 1);
}

//���� �����ϱ�
void Stack::Destroy() {
	printf("������ �ı��մϴ�.\n");
	for (int i = 0; i <= Top; i++) {
		stack[i] = NULL;
	}
	Top = NULL;
}
