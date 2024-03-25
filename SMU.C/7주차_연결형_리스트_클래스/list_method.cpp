#include "list_class.h"

//����Ʈ ����
void node_list::Node_create(int max) {
	if (Max_num != -1) {
		cout << "������ �ִ� ����Ʈ�� destroy ���ֽʽÿ�" << endl;
		return;
	}
	else if (max < 1) {
		cout << "�ùٸ� �ִ밪�� �Է����ֽʽÿ�" << endl;
		return;
	}
	
	head = (Node*)malloc(sizeof(Node));
	head->Next=NULL;
	head->data = 0;
	Max_num = max;
}

//����Ʈ ����
void node_list::Node_add(int position, int data) {
	Nptr head_temp=head;
	
	if (Max_num == -1) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
		return;
	}
	else if (position > head->data + 1 || position < 1) {
		cout << "position�� �ʰ��Ͽ����ϴ�" << endl;
		return ;
	}
	for (int i = 0; i < position; i++) {
		if (i + 1 == position) {
			cout << "����Ʈ�� �����ϴ�" << endl;
			return;
		}
			Nptr temp;
			temp = (Node*)malloc(sizeof(Node));
		
			temp->data = data;
			//temp ����� Next �ʵ忡 head_temp ����� Next �ʵ� ���� �Ҵ��Ͽ� ���ο� ��带 ����Ʈ�� ����
			temp->Next = head_temp->Next;
			//head_temp ����� Next �ʵ忡 temp ��带 �Ҵ��Ͽ� ���ο� ��带 ����Ʈ�� ����
			head_temp->Next = temp;
		}
		//head �����͸� ���� ���� �̵�
		head_temp = head_temp->Next;
		head->data++;
}
	
	
//����Ʈ ����
void node_list::Node_destroy() {
	if (Max_num == -1) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
		return;
	}
	Nptr head_temp = head;

	while (head_temp != NULL) {
		Nptr temp;
		temp = head_temp;
		head_temp = head->Next;
		free(temp);
	}
	head = NULL;
	Max_num = -1;
}

//����Ʈ�� �� ����
void node_list::Node_delete(int position) {
	Nptr head_temp = head;
	
	if (Max_num == -1) {
		cout << "����Ʈ�� create ���ֽʽÿ�" << endl;
		return;
	}
	else if (position > head->data  || position < 1) {
		cout << "position�� �̻��ؿ�!" << endl;
		return;
	}

	for (int i = 0; i < position; i++) {
		if (i + 1 == position) {
			Nptr temp;
			temp = head_temp->Next;
			head_temp->Next = head_temp->Next->Next;
			free(temp);
		}
		head_temp = head_temp->Next;
	}
	
	head->data--;
}

//����Ʈ ���
void node_list::Node_display() {
	Nptr head_temp = head->Next;
	while (head_temp!=NULL) {
		cout << head_temp->data<<" ";
		head_temp = head_temp->Next;
	}
}