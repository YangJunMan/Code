#include<stdio.h>

//1~100������ ������ ���� ������ ���� �Ҽ��� ������ ���� ����ϴ� ���α׷�.
int main() {

    // for���� ���ͼ��� i, j ���� ����� �� �ֵ��� ����
    int i = 0, j = 0;   

    int num;
    int result = 0;
    int amount = 0;

    printf("���� �Է����ּ��� : ");

    scanf("%d", &num);
    printf("�Ҽ� : ");
    for (i = 2; i <= num; i++) {
        
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }
        if (i == j) {              
            printf("%d ", i);    
            result = result + i;
            amount++;
        }
    }

    printf("\n�Ҽ��� �� : %d",result);
    printf("\n�Ҽ��� ���� : %d", amount);

    return 0;
}