// 13.ָ��
// 13.1 �ڴ� ������ĳ������ж����ڴ�
// ���ڴ��Ϊһ����С���ڴ浥Ԫ ÿ���ڴ浥Ԫ�Ĵ�С��һ�ֽ�
// Ϊ���ܹ���Ч���ʵ��ڴ��ÿ����Ԫ �͸��ڴ�����˱�� ��Щ��ű���Ϊ���ڴ浥λ�ĵ�ַ
//}   //��ַҲ����Ϊָ��
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%p\n", a); // %p ȡp�ĵ�ַ Ϊ16����  ��ַ�������Ķ�
//	int * p =&a; 
//	//���ָ��ı��� ����ָ����� pΪָ�����  int ����p������ *˵��p��ָ�����
//	// *p �����ò����� ͨ��p�д�ŵĵ�ַ �ҵ�p��ָ�Ķ��� *p����p��ָ��Ķ��� & * Ϊ��Ŀ������ ��Ϊ��Ԫ
//	printf("%p\n", p);
//	if (*p == 10)
//	{
//		printf("True");
//	}
//	return 0;
//}
//-------------ָ������Ĵ�С ------------
//int main()
//{
//	printf("%zu\n", sizeof(char *));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float *));
//	printf("%zu\n", sizeof(long *));
//	printf("%zu\n", sizeof(short *));
//	// outcomes are all 8
//	//ָ������Ĵ�Сȡ����һ����ַ���ʱ��Ҫ���ռ�
//	// ��64 64λ�����ϵĵ�ַ Ҫ64������λ namely 8 bytes(32λ��86 ----> 4) 
//	return 0;
//}
// ------------�ṹ��---------------------
// C���Ը����Զ������͵�Ȩ�� �ṹ���һЩ��һ���������һ�� 

//struct Stu
//{
//	char name[20];//�ṹ��ĳ�Ա
//	int age;
//	char sex[10];
//	char tele[12];
//};//;���ɶ�
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name , (*ps).age , (*ps).sex , (*ps).tele);//()is a must
//	printf("%s %d %s %s\n", ps->name , ps->age , ps->sex , ps->tele); // �ṹ���ָ����� -> ��Ա�� 
//}
//
//int main()
//{
//	struct Stu s = { "ldh",17,"man","114514" };
//	
//	printf("%s %d %s %s.\n",s.name ,s.age , s.sex, s.tele);//�ṹ�����.��Ա��
//	print(&s);
//	return 0;
//}
