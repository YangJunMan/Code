#include "stack_class.h"
#include <iostream>
//MAX�� 5�Դϴ�.
int main() {
	Stack S;
	S.Create();
	S.Pop();
	S.Push(3);
	S.Push(4);
	printf("������ �������? : %d (1�̸� True,0�̸� False)\n", S.IsEmpty());
	S.Push(5);
	S.Push(6);
	S.GetTop();
	S.Pop();
	S.GetTop();
	S.Push(7);
	S.Push(8);
	printf("������ �� á����? : %d (1�̸� True,0�̸� False)\n", S.IsFull());
	S.Push(10);
	S.GetTop();
	S.GetSize();
	
	S.Destroy();

}
