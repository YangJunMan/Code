#include <stdio.h>

//24�ð��� to 12�ð���
int main() {
	printf("�ð��Է�<24�ð�ǥ���> : ");
	int time;
	scanf("%d", &time);
	if (time < 0 || time>24) {
		printf("�ùٸ� ���� �Է����ּ���.");
	}
	else {
		if (time < 12) {
			printf("���� %d�� �Դϴ�.", time);
		}
		else {
			printf("���� %d�� �Դϴ�.", time - 12);
		}
	}

	return 0;
	
}