#include <stdio.h>

//����Լ��� �̿��� max��, n��°�� ū �� ���ϱ�
int findKth(int* a, int k) {
	if (k == 1) {
		int max = 0;
		for (int i = 0; i < 8; i++) {
			if (max < a[i]) {
				max = a[i];
			}
		}
		return max;
	}

	/*
	�� ����Լ��� �����ؾ� �ұ� ?
	(Ư�� ��������) �ڵ带 �����ϰ� ������ �� �ְԵȴ�.
	*/
	else {
		int max = 0;
		for (int i = 0; i < 8; i++) {
			if (max < a[i]) {
				max = a[i];
			}
		}
		for (int i = 0; i < 8; i++) {
			if (max == a[i]) {
				a[i] = 0;
			}
		}
		return findKth(a, k - 1);
	}
}

int main() {
	printf("�ϳ��� ������ �Է��ϼ��� : ");

	int A[8] = { 10,7,2,8,3,1,9,6 };
	int num;
	scanf("%d", &num);
	printf("%d��° ū ���� %d �Դϴ�.\n", num, findKth(A, num));
}