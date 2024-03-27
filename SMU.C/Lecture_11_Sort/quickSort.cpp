#include <iostream>
#include <windows.h>
#define max 10
int time = 1;

//�ǹ��� ������ ���� ���� �ǹ� ��������. �ǹ��� ������ ū ���� �ǹ� ����������.
int partition1(int arr[], int low, int high) {

	//���� ���� �ǹ����� ����
	int pivot = high;
	//�ǹ����� ���� ���� ������ ��ġ
	int i = low - 1;

	//�˻����� ���� ��ġ
	int j = low;
	int temp;

	while ((j < high)) {
		if (arr[j] < arr[pivot]) {
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		j++;


	}

	temp = arr[i + 1];
	arr[i + 1] = arr[pivot];
	arr[pivot] = temp;


	printf("<<%d�ܰ�>> ", time++);
	for (int k = 0; k < max; k++) {
		if ((k == low)) {
			printf("[%2d ", arr[k]);
		}
		else if (k == high) {
			printf(" %2d]", arr[k]);
		}
		else {
			printf(" %2d ", arr[k]);
		}


	}
	printf("     �ǹ� : %d", arr[i + 1]);
	printf("\n");

	//���� �ǹ�+1 ������ġ ��ȯ
	return i+1;
}
//��Ƽ��1 �Լ��� �̿��մϴ�
void quicksort1(int arr[],int low,int high) {
	if (low < high) {
		int pivot = partition1(arr,low,high);
		quicksort1(arr, low, pivot - 1);
		quicksort1(arr, pivot + 1, high);
	}
}

/*............................................. */

//�ǹ��� ������ ū ���� �ǹ� ��������. �ǹ��� ������ ���� ���� �ǹ� ����������.
int partition2(int arr[], int low, int high) {
	//���� ��ġ�� �ǹ����� ����
	int pivot = low;
	//�ǹ����� ū ���� ������ ��ġ
	int i = high+1;
	//�˻����� ���� ��ġ
	int j = high;
	int temp;
	
	while ((j >low)) {
		if (arr[j] > arr[pivot]) {
			i--;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		j--;
	}

	temp = arr[i - 1];
	arr[i - 1] = arr[pivot];
	arr[pivot] = temp;

	printf("<<%d�ܰ�>> ", time++);
	for (int k = 0; k < max; k++) {
		if ((k == low)) {
			printf("[%2d ", arr[k]);
		}
		else if (k == high) {
			printf(" %2d]", arr[k]);
		}
		else {
			printf(" %2d ", arr[k]);
		}
	}
	printf("     �ǹ� : %d", arr[i - 1]);
	printf("\n");
	//���� �ǹ�-1 ��ġ ��ȯ
	return i - 1;
}

//��Ƽ��2 �Լ��� �̿��մϴ�
void quicksort2(int arr[], int low, int high) {
	if (low < high) {
		int pivot = partition2(arr, low, high);
		quicksort2(arr, low, pivot - 1);
		quicksort2(arr, pivot + 1, high);
	}
}

/*............................................. */
// (������ ��������..) �ǹ��� ������ ���� ���� ��������, �ǹ��� ������ ū ���� ����������.
int partition3(int arr[], int low, int high) {
	int pivot_value = arr[low];
	int left = low+1;
	int right = high;
	int temp;

	while (left <= right) {
		
		while (arr[left] < pivot_value) { left++;}
		while (arr[right] > pivot_value) { right--;}
		if (left < right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}

		temp = arr[low];
		arr[low] = arr[right];
		arr[right] = temp;
	

		printf("<<%d�ܰ�>> ", time++);
		for (int k = 0; k < max; k++) {
			if ((k == low)) {
				printf("[%2d ", arr[k]);
			}
			else if (k == high) {
				printf(" %2d]", arr[k]);
			}
			else {
				printf(" %2d ", arr[k]);
			}
		}
		printf("     �ǹ� : %d", arr[right]);
		printf("\n");

		return right;

}

//��Ƽ��3 �Լ��� �̿��մϴ�
void quicksort3(int arr[], int low, int high) {
	if (low < high) {
		int pivot = partition3(arr, low, high);
		quicksort3(arr, low, pivot - 1);
		quicksort3(arr, pivot + 1, high);
	}
}


int main() {
	int num;
	while (1) {
		printf("--------------------------------------------------------------------------------\n");
		printf("1�� : ������ �� ������ ��ġ�� ���� �Ǻ����� �ϰ�, �þ\n2�� : ������ �� ù��° ��ġ�� ���� �Ǻ����� �ϰ�, �پ��\n3�� : ������ �� ù��° ��ġ�� ���� �Ǻ������ϰ�, ���ʿ��� �������� \n");
		scanf_s("%d", &num);
		system("cls"); //�ܼ�ȭ�� �ʱ�ȭ
		printf("\n");
		printf("�����迭 : ");
		int arr[] = { 31,8,48,73,11,3,20,29,65,15 };
		for (int i = 0; i < max; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		if (num == 1) {
			quicksort1(arr, 0, max - 1);
		}
		if (num == 2) {
			quicksort2(arr, 0, max - 1);
		}
		if (num == 3) {
			quicksort3(arr, 0, max - 1);
		}

		printf("--------------------------------------------------------------------------------\n�Ϸ�Ǿ����ϴ�.");
		printf("\n");
		time = 1;
	}
}