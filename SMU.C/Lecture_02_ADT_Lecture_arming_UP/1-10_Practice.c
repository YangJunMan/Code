#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����, ���� �����ڸ� ����Ͽ� x=5, y=0�϶� ..  
int main(void) {
	int x = 5;
	int y = 0;

	//�� ����
	y = ++x;
	printf("y = ++x : y <-- %d, y = %d \n", x, y);
	
	//�� ����
	y = x++;
	printf("y = x++ : y <-- %d, y = %d \n", x, y);
	
	//�� ����
	y = --x;
	printf("y = --x : y <-- %d, y = %d \n", x, y);
	
	//�� ����
	y = x--;
	printf("y = x-- : y <-- %d, y = %d \n", x, y);

	return 0;
}