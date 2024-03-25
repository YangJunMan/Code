#include "que_class.h"

//Que����
void queClass::Create() {
	printf("Que�� �����մϴ�.�ʱ� Front�� : 0, �ʱ� Rear�� : -1\n");
	Front = 0;
	Rear = -1;
}

bool queClass::IsEmpty() {
	return (Front > Rear);
}

bool queClass::IsFull() {
	return (Rear+1 == MAX);
}

void queClass::Add(int item) {
	if (IsFull()==1) {
		printf("Add�� �� �����ϴ�.\n");
	}
	else {
		Queue[++Rear] = item;
		printf("%d��° Rear�� Queue�� �����մϴ�.\n", Rear);
	}
}

void queClass::Remove() {
	printf("Remove�մϴ�. Remove�Ǵ� �� : %d \n", Queue[Front++]);
}

void queClass::GetSize() {
	printf("���� ũ�� : %d �Դϴ�. \n", Rear+1);
}

void queClass::GetFront() {
	printf("���� Front�� �ִ� �� : %d\n", Queue[Front]);
}

void queClass::Destroy() {
	for (int i = 0; i < Rear + 1; i++) {
		Queue[i] = NULL;
	}
	Front = NULL;
	Rear = NULL;
}