#include <stdio.h>

//���� �빮��, �ҹ��� ��ȯ
int main() {
	char alpha;
	printf("������ ���ĺ��� �Է��ϼ��� : ");
	scanf("%c", &alpha);

	//�ƽ�Ű�ڵ�ǥ ����
	if (alpha >= 'A' && alpha <= 'Z') {
		printf("��ȯ��� : %c", alpha + 32);
	}
	else if ((alpha >= 'a' && alpha <= 'z')) {
		printf("��ȯ��� : %c", alpha - 32);
	}
	else {
		printf("���ĺ��� �Է����ּ���.");
	}

	return 0;
}