#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 11

//�ִ���
void heapify(int arr[], int k, int N) {
	//���� �� ����� �θ��带 ����(k)���� ��� �� �ڽĳ�� Ȯ���ϱ�
	int left = 2 * k;
	int right = 2 * k + 1;
	int bigger;
	int temp;
	if (right <= N) {
		if (arr[left] > arr[right]) {
			bigger = left;

		}
		else {
			bigger = right;
		}
	}
	else if (left <= N) {
		bigger = left;
	}
	//���ǰ��
	else return;

	//�ڽĳ�尡 �θ��庸�� ũ�ٸ�, SWAP �ǽ�
	if (arr[bigger] > arr[k]) {
		temp = arr[k];
		arr[k] = arr[bigger];
		arr[bigger] = temp;
		heapify(arr, bigger, N);
	}

}

void buildHeap(int arr[], int N) {
	//�迭 ���� �ڽĳ��,�� �θ��� ã��
	for (int i = N / 2; i >= 1; i--) {
		heapify(arr, i, N);
	}
}

void heapSort(int arr[], int N) {
	int temp;
	/*
	1. buildHeap���� �迭 ���� �ڽĳ��,�� �θ��� ã��
	2. buildHeap ������ heapify���� ��(�θ��尡 �ڽĳ�庸�� ū ����Ʈ��) ����� �Ϸ�
	*/
	buildHeap(arr, N);
	/*
	3. �迭�� �� ���� ���� ū ���� �ڸ��� �ٲ۴�. (�迭�� ������ �ε����� ���� ū ���� ����ȴ�)
	4. ���� ū ���� ����� �迭�� ������ �ε����� �����ϰ�, �ٽ� headify �Ѵ�
	*/
	for (int i = N; i >= 2; i--) {
		temp = arr[1];
		arr[1] = arr[i];
		arr[i] = temp;
		heapify(arr, 1, i - 1);

		printf(" <<%d�ܰ�>> ", N - i + 1);
		for (int j = 1; j < max; j++) {
			if (arr[j] == arr[i]) {
				printf("[%2d", arr[j]);
			}
			else
				printf(" %2d", arr[j]);

		}
		printf("\n");
	}
}

int queue[max];
int front, rear;

void init_queue(void) {
	front = rear = 1;
}

int put(int k) {
	queue[rear] = k;
	rear = ++rear % max;
	return k;
}

int get(void) {
	int i;
	if (front == rear) {
		printf("\n Queue  underflow");
		return -1;
	}
	i = queue[front];
	front = ++front % max;
	return i;
}


void priority() {
	int i;
	int j = 1;
	init_queue();
	int num;
	printf("���� �Է��Ͽ��ּ���. 0�� ����Դϴ�. \n");
	while (1) {
		scanf("%d", &num);
		if (num == 0) {
			buildHeap(queue, max - 1);
			printf("%d�� ���մϴ�.", queue[1]);
			queue[1] = NULL;
			j--;
	}
		else {
			put(num);
			j++;
		}
		buildHeap(queue, max - 1);
			for (int k = 1; k < j; k++) {
				printf("%d ", queue[k]);
			}
			printf("\n");
		
		}
}

void radixSort(int *arr, int n) {
	int result[max], maxValue = 0;
	int exp = 1;
	int many= 1;
	for (int i = 0; i < n; i++) { //���� ū�� ���ϱ�
		if (arr[i] > maxValue) {
			maxValue = arr[i];}
	}
	// ���� ū ���� �ڸ��� ���!
	while (maxValue / exp > 0) { 
		int bucket[10] = { 0 };
		// ������ �ڸ��� �迭 ó��
		for (int i = 0; i < n; i++) { 
			bucket[arr[i] / exp % 10]++; 
		}
		// ���� ��� : ��� �迭�� ����� ���ؼ�!	
		for (int i = 1; i < 10; i++) { 
			bucket[i] += bucket[i - 1]; 
		} 
		//���� �ڸ��� ������ ������ ����
		for (int i = n - 1; i >= 0; i--) { 
			result[--bucket[arr[i] / exp % 10]] = arr[i];
		}
		// �⺻ �迭 �ٽ� �����
		for (int i = 0; i < n; i++) { 
			arr[i] = result[i];
		} 		
		
		//���� �ڸ����� �Ѿ��
		exp *= 10; 
		
		printf("<<%d�ܰ�>>", many++);
		
		for (int i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
}

int main() {
	while (1) {
		int num;
		int arr[] = { 0,48,8,65,40,1,5,12,7,42,11 };
		printf("1�� : ������ �����ϱ� \n2�� : �켱���� ť �����\n3�� : ������� �ϱ�");
		scanf("%d", &num);

		if (num == 1) {
			printf(" �����迭 : ");
			for (int j = 1; j < max; j++) {
				printf("%2d ", arr[j]);
			}
			printf("\n");

			printf("  �ʱ� �� : ");
			buildHeap(arr, max - 1);
			for (int j = 1; j < max; j++) {
				printf("%2d ", arr[j]);
			}


			heapSort(arr, max - 1);
		}

		if (num == 2) {
			priority();
		}

		if (num == 3) {
			int arr3[] = { 42641,25741,53454,31546,21047,53116,46721,13674,75621,15376 };
			radixSort(arr3, max - 1);
		}

	}
}