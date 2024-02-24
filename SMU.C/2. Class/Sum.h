#include <iostream>
#include <iomanip>  //자리수 정하기 기능 추가!
using namespace std;

class Sum_Matrix {
public:
	int arr[4][5] = {
		{5,7,4,3,0} ,
		{6,1,8,3,0} ,
		{3,2,7,6,0},
		{0,0,0,0,0}
	};

	void Sum_Row();
	void Sum_Col();
	void Print_Matrix();

};

void Sum_Matrix::Sum_Row(void) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			sum = sum + arr[i][j];
		}
		arr[i][4] = sum;
		sum = 0;
	}
}

void Sum_Matrix::Sum_Col(void) {
	int sum[5] = { 0,0,0,0,0 };
	int sum_arr=0;
	for (int i=0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			sum_arr = sum_arr + arr[j][i];
		}
		sum[i] = sum_arr;
		sum_arr = 0;
	}
	for (int i = 0; i < 5; i++) {
		arr[3][i] = sum[i];
	}
}

void Sum_Matrix::Print_Matrix(void) {
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout.width(2);  //다음 출력을 n칸에 맞춰서 출력한다.
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}