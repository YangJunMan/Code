#include <stdio.h>
#include <iostream>
//��������
void select(int arr[], int length) {


	int j;
	//�ּڰ��� ����
	int dotPoint;
	//�ӽ� �ּڰ�
	int temp;
	int countCompare = 0;
	int countAccumulate = 0;
	printf("--------------------------------------------------------------------\n");
	printf(" ��������\n");
	printf(" �迭 : ");
	for (int k = 0; k < length; k++) {
		printf("%d ", arr[k]);
	}
	printf("\n--------------------------------------------------------------------");
	printf(" /  ��ȸ��  ��������ȸ��");
	printf("\n");

	for (int i = 0; i < length - 1; i++) {
		//�� ���� �������� �ּڰ��� �Ǻ��ϱ� ����
		int min = arr[i];
		printf("%2d�ܰ� : ", i + 1);
		for (j = i + 1; j < length; j++) {
			if (arr[j] < min) {
				//�ּҰ�
				min = arr[j];
				//�� ���� ��
				temp = arr[i];
				//����
				dotPoint = j;
			}
			countCompare++;
		}
		countAccumulate += countCompare;
		//�տ� ��ġ�ϴ� ���� �ּڰ��� ��ġ ����
		arr[i] = min;
		arr[dotPoint] = temp;

		for (int k = 0; k < length; k++) {
			if (min == arr[k]) {
				printf("%d]", min);
			}
			else if (arr[dotPoint] == arr[k]) {
				printf("%d]", arr[k]);
			}
			else
				printf("%d ", arr[k]);

		} //���
		printf("/ %6d", countCompare);
		printf("  %10d", countAccumulate);
		printf("\n");
		countCompare = 0;
	}
	printf("--------------------------------------------------------------------\n");
}
//��������
void insert(int arr[], int length) {
	int j;
	//�ּڰ��� ����
	int dotPoint;
	//�ӽ� �ּڰ�
	int temp = 0;
	int countCompare = 1;
	int countAccumulate = 0;
	printf("--------------------------------------------------------------------\n");
	printf(" ��������\n");
	printf(" �迭 : ");
	for (int k = 0; k < length; k++) {
		printf("%d ", arr[k]);
	}
	printf("\n--------------------------------------------------------------------");
	printf(" /  ��ȸ��  ������ȸ��");
	printf("\n");

	for (int i = 0; i < length - 1; i++) {
		printf("%2d�ܰ� : ", i + 1);
		if (arr[i] > arr[i + 1]) {
			int min = arr[i + 1];
			temp = min;
			for (int j = i + 1; j >= 0; j--) {
				if (arr[j] > min) {
					arr[j + 1] = arr[j];
					arr[j] = min;
					countCompare++;
				}
			}
			countAccumulate += countCompare;


		}
		for (int k = 0; k < length; k++) {
			if ((arr[i] == arr[k])) {
				printf("%d]", arr[i]);
			}
			else
				printf("%d ", arr[k]);

		}
		printf("/ %6d", countCompare);
		printf("  %10d", countAccumulate);
		printf("\n");
		countCompare = 0;

	}
}
//��������
void bubble(int arr[], int length) {
	int temp;
	int countCompare = 0;

	printf("--------------------------------------------------------------------\n");
	printf(" ��������\n");
	printf(" �迭 : ");
	for (int k = 0; k < length; k++) {
		printf("%d ", arr[k]);
	}
	printf("\n--------------------------------------------------------------------\n");


	for (int i = 0; i < length - 1; i++) {
		int min = 0;
		printf("<<%d�ܰ�>>\n", i + 1);
		for (int j = 0; j < length - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				countCompare++;
			}
			for (int k = 0; k < length; k++) {
				printf("%d ", arr[k]);
			}
			printf("\n");
		}
		if (countCompare == 0) {
			printf("\n%d�ܰ迡�� �̹� ������ �Ϸ�Ǿ����ϴ�. \n\n", i);
			break;
		}

		countCompare = 0;
	}
}

int main() {

	int num;
	while (1) {
		printf("\n--------------------------------------------------------------------\n");
		printf("1�� : ��������\n2�� : ��������\n3�� : ��������\n");
		printf("--------------------------------------------------------------------\n");
		scanf_s("%d", &num);
		if (num == 1) {
			int arr[] = { 31,62,17,63,55,47,26,48,59,20,23,43,49,27,53,35,22,33,50,64 };
			int length = sizeof(arr) / sizeof(int);
			select(arr, length);
		}
		if (num == 2) {
			int arr2[] = { 31,62,17,55,63,47,26,48,59,20,23,43,49,27,53,35,22,33,50,64 };
			int length2 = sizeof(arr2) / sizeof(int);
			insert(arr2, length2);
		}
		if (num == 3) {
			int arr3[] = { 31,62,17,82,93,47,26,50,59,48 };
			int length3 = sizeof(arr3) / sizeof(int);
			bubble(arr3, length3);
		}
	}

}
