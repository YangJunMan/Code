#include <stdio.h>

//����Լ��� �̿��� ������ ����
void Gugu(int i, int j) {
	if (j == 10) {
		return;
	}
	else {
		printf("%d * %d = %d\n",i,j,j*5);
		return Gugu(i, j + 1);
	}
}

int main() {
	printf("�ϳ��� ������ �Է��ϼ��� : ");
	int num;
	scanf("%d",&num);
	Gugu(num,1);

}