//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// variables can not name after key words
// 2.they are built-in and can not be created by we users
	// 1.auto ���оֲ������Զ�(auto)���� �Զ�(auto)���� 
//int main()
//{
//	auto int a = 10;//auto can be ignored
//	return 0;
//}
	// 2.char int short long |long long| float double 
	// 3.for while |do while| do break continue
	// 4.register (�Ĵ���) static (��̬��)
	// 5.extern
	// 6.switch case default if else
	// 7.enum(ö��) struct(�ṹ��) union(������)
	// 8.go to
	// 9.const
	// 10.return 
	// 11.size of(�����С) signed(�з��ŵ�) unsigned(�޷��ŵ�) typedef(����������) void(�� �����ķ������� �����Ĳ���)
	// 12.---------volatile-----------
// the naming of variables 1.have meaning 2.characters numbers and '_' comprise the name but numbers can not be at head
// 3. can not be key words
//--------------------typedef------------------- 
//typedef unsigned int uint; unsigned int == uint 
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node; struct Node == Node
//int main()
//{
//	uint a = 0;
//	unsigned int b = 1;
//	struct Node n;
//	Node m;
//	return 0;
//}
//---------------static-----------1.���ξֲ����� --��̬�ֲ����� 2.����ȫ�ֱ��� 3.���κ��� 
	//static ���ξֲ�������ʱ�򣬾ֲ��������������ڲ����� ������ static���ξֲ�������ʱ�� �ı��˱����Ĵ洢λ��
	// static Ӱ���˱������������� ʹ��ͳ������������һ��
	// �ڴ� ջ�����ֲ������ȣ� ����(��̬�ڴ����)  ��̬������static���κ�ľ�̬����:�������ʱ�����٣�
//
//void test()//void: general return but void means no return
//{
//	static int a = 1;//static int a û��ִ�д���  a������һ�εĵ�a the location of a does not change
//	// if int a = 1; outcome  2 2 ....2   if static int a = 1 outcome 2 3 4 5 6 7 8 9
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
// {
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//} 
//	static ����ȫ�ֱ���
//	extern �ⲿ���� ���������ʹ�� but �ⲿ����Ϊ static ... = ... ��extern�󲻿�ʹ�� ���ֲ�����ǰ����static��Ҳ���ܽ���
//	ȫ�ֱ��������������Ե� ����+���� -->��ִ�г��� ������static��ȫ�ֱ������ⲿ�������Ա�Ϊ//�ڲ����ӽ����� ����Դ�ļ���.c���Ͳ���
//��ʹ�õ�ȫ�ֱ���	,�������С�ˣ�Ҳ�����ھ�̬�� ȫ�ֱ���Ҳ�ھ�̬��
										//static ���κ���		
															
//extern int Add(int x, int y); static Ҳ�ɽ��ⲿ�������Եĺ��� ��Ϊ�ڲ��������Եĺ���
//register �����ϵĴ洢�豸 Ӳ�� �ڴ� ����(cache) �Ĵ��������ɵ�CPU�ϣ�
//                       -------------------------------->  more speedy less spacious more costly 
//int main()
//{
//	register int a = 3;//�����顯3���ڼĴ����� but is determined ������ 
//	return 0;
//
//}
// .hͷ�ļ� ---> ���������� ���͵����� ͷ�ļ��İ���
// ,cԴ�ļ�----��������ʵ��
// 1.define ���ǹؼ��� ��Ԥ����ָ��






