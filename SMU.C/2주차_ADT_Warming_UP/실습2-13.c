#include <stdio.h>
#include <string.h>

//�Է¹��� ������ ������, ������ ������ ���ϴ� ���α׷�
int main() {
	char str[1000]="";
	printf("�Է��� ���ڿ� : ");

	//scanf�� ������ ������ ������ �Է¹޾�����.
	gets(str);   
	
	int i = 0;
	int count = 0;
	while (str[i]!=NULL) {
		if (str[i] == ' ') {
			count++;
		}
		i++;
	}
	 
	printf("�Է¹��� ������ ���� : %d\n", i);
	printf("���� ������ ���� : %d", count);

	return 0;
}