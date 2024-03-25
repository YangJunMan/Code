#include <stdio.h>
#define Max 100;

typedef struct mylist {
	int num = 0;
	int value[100];
};

/*
* count : ���� �Է��� ��ȣ
* data : ���� �Է��� ����
* num : ����ü�� ����� ��ȣ
* value : ����ü�� ����� ����
*/

void Insert(mylist* stlist, int count, int data) {
	/*
		����ü(my list)�� data�� �־����� count���� ���̾��� ���̵ɱ�
	*/
	if ((stlist->num) > 100)
		printf("�̹� list�� 100������ �� ���ֽ��ϴ�\n");

	else if ((stlist->num - count) < -1 || count < 1) {
		//���� ����Ʈ�� 3������ �ִµ� 5�� ���ԵǾ��� ��� ?
		printf("����Ʈ�� ������� ä���ֽʽÿ�\n");
	}
	else if (stlist->num == 0) {
		//ù ��° ����Ʈ �߰�
		stlist->value[0] = data;
		printf("ù ��° ����Ʈ�Դϴ�. %d�� �Է��մϴ�. \n", data);
		stlist->num = stlist->num + 1;
	}
	else {
		//n��° ����Ʈ�� ����x �߰�
		for (int i = stlist->num; i > count-1; i--) {
			(stlist->value[i]) = (stlist->value[i - 1]);
		}
		stlist->value[count-1] = data;
		printf("%d ��° ����Ʈ�� %d�� �Է��մϴ�. \n",count, stlist->value[count-1]);
		stlist->num = stlist->num + 1;
		}
	}

//����
void Delete(mylist * stlist, int count) {
	if (stlist->value[count-1]) {
		stlist->value[count-1] = 0;
		printf("%d��° ����Ʈ�� ����Ӵϴ�.\n",count);
	}
	else {
		printf("�̹� ����ִ� ��ȣ �Դϴ�.\n");
	}
}

//�ش� ��ġ �����͸� item�� ����
void Retrieve(mylist* stlist, int count, int *item) {
	if ((stlist->num)>count-1) {
		*item = stlist->value[count-1];
		printf("%d�� ����Ʈ�� �� %d�� item�� �����մϴ�.\n",count,stlist->value[count-1]);
		
	}
	else {
		printf("���� �������� ���߽��ϴ�..\n");
	}
}

//�� ����Ʈ �����
void Create(mylist* stlist, int count) {
		if ((stlist->num - count) < -1 || count < 1) {
		printf("�ùٸ� ��ȣ�� �Է��ϼ���\n");
}
		else {
		for (int i = stlist->num; i > count-1; i--) {
			(stlist->value[i]) = (stlist->value[i - 1]);
		}
		stlist->value[count-1] =0;
		printf("%d��°�� �� ����Ʈ�� �����մϴ�.\n", count);
		stlist->num = stlist->num + 1;
	}
}

//����Ʈ �����ϱ�
void Destroy(mylist* stlist, int count) {
	if ((stlist->num - count) < -1 || count < 1) {
		printf("�ùٸ� ��ȣ�� �Է��ϼ���\n");
	}
	else {
		for (int i = count-1; i < stlist->num; i++) {
			printf("%d���� ����Ʈ�� %d�� �Ű����ϴ�..\n", i+1, stlist->value[i]);
			(stlist->value[i]) = (stlist->value[i + 1]);
		}
		printf("%d���� ����Ʈ�� �����մϴ�.",count);
		printf("%d���� ����Ʈ���� %d�� �Խ��ϴ�.\n", count, stlist->value[count-1]);

		//�� ���� ����Ʈ�� �ʱ�ȭ �Ǿ�� ��.
		stlist->value[stlist->num] = NULL; 

		stlist->num = stlist->num - 1;

	}
}

//����Ʈ ���� Ȯ��
void IsEmpty(mylist* stlist, int count) {
	if (stlist->value[count-1] == 0) {
		printf("%d���� �� ����Ʈ �Դϴ�.TRUE \n",count);
	}
	else if (stlist->value[count - 1] == NULL) {
		printf("%d���� ���� ����Ʈ �Դϴ�.", count);
	}
	else {
		printf("%d���� �̹� �ִ� ����Ʈ �Դϴ�.FALSE \n",count);
	}
}

//����Ʈ ���� Ȯ��
void Length(mylist* stlist) {
	printf("%d���� ����Ʈ�� �ֽ��ϴ�.\n", stlist->num);
}