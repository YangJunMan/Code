#include <iostream>
#include <iomanip>
using namespace std;

//����� ������ 20���� 2���� �迭 �� 1�࿡ 10���� ������ �Է¹ް�, 2�࿡ ������ �ο��ϴ� ���α׷�

//Ŭ����
class order {
public:
	int arr[2][10];

	void insert();
	void crank();
};

//�Է¹ޱ�
void order::insert(void) {
	cout << "�Է� : ";
	for (int i = 0; i < 10; i++) {
		cin>>arr[0][i];
	}
	cout << "���� : ";
	for (int i = 0; i < 10; i++) {
		cout.width(2);
		cout<<arr[0][i]<<" ";
	}
	cout << "\n";

}

//����ϱ�
void order::crank(void) {
	int rank[10] = { 1,1,1,1,1,1,1,1,1,1 };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[0][i] < arr[0][j]) {
				//�ڽź��� ū ���� �ִٸ�, ����� �и���.
				rank[i] = rank[i] + 1; 
			}
		}
	}
	cout << "���� : ";
	for (int i = 0; i < 10; i++) {
		cout.width(2);
		cout << rank[i]<<" ";
	}
}

