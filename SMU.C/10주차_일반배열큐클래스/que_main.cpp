#include "que_class.h"

int main() {
	queClass S;
	S.Create();
	printf("����ֳ���? : %d (True=1,False=0)\n", S.IsEmpty());
	S.Add(8);
	printf("����ֳ���? : %d (True=1,False=0)\n", S.IsEmpty());
	printf("�����ֳ���? : %d (True=1,False=0)\n", S.IsFull());
	S.Add(10);
	S.Add(12);
	S.Add(14);
	S.Add(16);
	S.GetSize();
	printf("�����ֳ���? : %d (True=1,False=0)\n", S.IsFull());
	S.Remove();
	S.GetFront();
	S.Destroy();
};
