#include "list_class.h"

//���� ����Ʈ ����
void List::create(int max_num) {
	if (A_position != -2) {
		cout << "���� ����Ʈ�� destroy�� ���ֽʽÿ�" << endl;
		return;
	}
	A_position = 0;
	Max = max_num;
	list = list_node;
}

//���� ����Ʈ ����
void List::create_Dynamic(void) {
	if (A_position != -2) {
		cout << "���� ����Ʈ�� destroy�� ���ֽʽÿ� : " << endl;
		return;
	}
	cout << "Max���� �Է��Ͻʽÿ�";
	cin >> Max;
	list_node_dynamic = (LIST_NODE*)malloc(sizeof(LIST_NODE) * Max);
	A_position = 0;
	list = list_node_dynamic;
	for (int i = 0; i < Max; i++)
		list[i].Data = 0;
}

//���� ����Ʈ ����
void List::destroy(void) {
	for (int i = 0; i < 100; i++)
		list_node[i].Data = 0;//-
	A_position = -2;
	cout << "����Ʈ�� �����߽��ϴ�." << endl;
	list = 0;
}

//���� ����Ʈ ����
void List::destroy_Dynamic(void){
	list = 0;
	free(list_node_dynamic);
	A_position = -2;
	cout << "����Ʈ�� �����߽��ϴ�." << endl;
}

//����Ʈ�� ����
void List::insert(int position, int data) {
	if (A_position == -2) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
			return;
	}
	

	if (A_position == Max)
		cout << "����Ʈ�� ��� á���ϴ�." << endl;
	else if (position<1 || position>A_position + 1)
		cout << "���� �ִ� ����Ʈ�� ������ ����ֽ��ϴ�" << endl;
	else {
		if (position < A_position + 1) {
			for (int i = A_position - 1; i >= position - 1; i--)
				list[i + 1].Data = list[i].Data;
		}
		list[position - 1].Data = data;
		A_position++;
	}


}

//����Ʈ�� �� ����
void List::Delete(int position) {
	if (A_position == -2) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
		return;
	}
	else if (position<1 || position>A_position)
		cout << "���� �ִ� ����Ʈ�� ������ ����ֽ��ϴ�" << endl;
	else {
		for (int i = position - 1; i <= A_position; i++)
			list[i].Data = list[i + 1].Data;
		list[A_position - 1].Data = 0;
		A_position--;
	}
}

//���� ��ȯ
int List::Length(void) {
	int length=0;
	if (A_position == -2) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
		return 0;
	}
	
	return A_position;
}

//����Ʈ ���� Ȯ��
void List::isempty(void) {
	if (A_position == -2) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
		return;

	}
	if (A_position == 0)
		cout << "����Ʈ�� ����ֽ��ϴ�." << endl;
}

//����Ʈ ��ȭ�� Ȯ��
void List::isfull(void) {
	if (A_position == -2) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
		return;

	}
	if (A_position == Max)
		cout << "����Ʈ�� ���� ���ֽ��ϴ�." << endl;
}

//������ ��ȯ
int List::get_item(int position){
	return list[position-1].Data;
}
