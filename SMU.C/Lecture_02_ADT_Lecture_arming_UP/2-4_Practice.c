#include <stdio.h>

//�� �������� �ƽ�Ű�ڵ尪 ��
int main() {
	
	printf("3���� �����ڸ� �Է��ϼ��� : ");
	
	char alpha1, alpha2, alpha3;

	scanf("%c %c %c", &alpha1, &alpha2, &alpha3);
	

	//ù��°�� ���� �������
	if (alpha2 > alpha1 && alpha3 > alpha1) 
		printf("��� : %c\n", alpha1);

	//�ι�°�� ���� �������
	if (alpha1 > alpha2 && alpha3 > alpha2) 
		printf("��� : %c\n", alpha2);

	//����°�� ���� �������
	if (alpha1 > alpha3 && alpha2 > alpha3) 
		printf("��� : %c\n", alpha3);


	return 0;

}
