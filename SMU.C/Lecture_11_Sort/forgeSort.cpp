#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 11
int time;

//first���� mid����. mid���� last���� ��ȯȣ�� ����
void merge(int arr[], int first, int mid, int last) {
	int i = first;
	int j = mid + 1;
	int temp[max];
	int k = first;
	//�����̳� ������ �κ� �� �ϳ��� ���� ������ 
	while ((i <= mid) && (j <= last)) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else if (arr[j] < arr[i]) {
			temp[k++] = arr[j++];
		}
	}
	//���� �κ��� ��ҵ��� �ӽù迭 temp�� �״�� ����
	if (i > mid) {
		for (int l = j; l <= last; l++) {
			temp[k++] = arr[l];
		}
	}
	else {
		for (int l = i; l <= mid; l++) {
			temp[k++] = arr[l];
		}
	}
	//���� arr�迭�� �ٽ� temp�� �迭 ����
	for (int a = first; a <= last; a++) {
		arr[a] = temp[a];
	}

	printf("<<%2d�ܰ�>>  ", time++);
	for (int h = 0; h < max; h++) {
		if (h == first) {
			printf("[%d ", arr[h]);
		}
		else if (h == last) {
			printf("%d] ", arr[h]);
		}
		else
			printf("%d ", arr[h]);

	}

	printf("\n");

}

//��͸� �̿��� ��������
void mergeSort(int arr[], int first, int last) {
	if (first < last) {
		int mid = (first + last) / 2;
		mergeSort(arr, first, mid);
		mergeSort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}
int big;

//---------------------------
// 
//�������� �迭���� �����Ѵ�
void forge(int arr[], int temp[], int first, int mid, int last)
{
	int k = first, i = first, j = mid + 1;

	while (i <= mid && j <= last)
	{
		if (arr[i] < arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
		}
	}

	if (i > mid) {
		for (int l = j; l <= last; l++) {
			temp[k++] = arr[l];
		}
	}
	else {
		for (int l = i; l <= mid; l++) {
			temp[k++] = arr[l];
		}
	}

	for (int i = first; i <= last; i++) {
		arr[i] = temp[i];
		big = i;
	}

	printf("<<%2d�ܰ�>>  ", time++);
	for (int h = 0; h < max; h++) {
		if (h == first) {
			printf("[%d ", arr[h]);
		}
		else if (h == last) {
			printf("%d] ", arr[h]);
		}
		else
			printf("%d ", arr[h]);

	}
	printf("\n");
}


//�ݺ����� �̿��ؼ� �������� ����
void forgesort(int arr[], int first, int last)
{
	int temp[max];
	for (int i = 0; i < max; i++) {
		temp[i] = arr[i];
	}

	for (int m = 1; m <= last - first; m = 2 * m)
	{
		for (int i = first; i < last; i += 2 * m)
		{
			int from = i;
			int mid = i + m - 1;
			int to;
			if (i + 2 * m - 1 < last) {
				to = i + 2 * m - 1;
			}
			else {
				to = last;
			}
			forge(arr, temp, from, mid, to);
		}
	}
}

int main() {
	while (1) {
		int arr[] = { 33,65,16,46,68,62,6,4,7,22,14 };
		int length = sizeof(arr) / sizeof(int);
		int num;
		time = 1;
		printf("\n- ���� ���� >> ");
		for (int i = 0; i < max; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		printf("1�� : ��ȯȣ��� �����ϱ�\n2�� : �ݺ������� �����ϱ�\n");
		scanf("%d", &num);
		if (num == 1) {
			mergeSort(arr, 0, max - 1);
			printf("������ �Ϸ�Ǿ����ϴ�. \n");
		}
		else if (num == 2) {
			forgesort(arr, 0, max - 1);
			printf("������ �Ϸ�Ǿ����ϴ�. \n");
		}
		else if (num == 3) {
			printf("�����մϴ�.");
			return 0;
		}

	}


}