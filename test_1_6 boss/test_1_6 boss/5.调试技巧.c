//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
// bug   
// Debug(����) ������������Ϣ���Ҳ����κ��Ż������ڳ���Ա���Գ���
// Release(����) �����ǽ����˸����Ż� 
// windows�����ĵ��Լ���
//int f(int x)
//{
//	return x * 2;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		//scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	int x = f(arr[1]);
//	return 0;
//}
//��ݼ�
// f5 �������� �����߼��ϵ���һ���ϵ㴦(Ҳ��������������ѭ�����)
//    Ҳ�������������ϵ��Ҽ����
// f9 ������ȡ���ϵ� �ϵ��������λ������
// f10 ����� ͨ������һ�����̣�һ�����̿����Ǻ������û���һ�����
// f11 �����ÿ��ִ��һ����䣬����뺯���ڲ�(��release�л������⺯��)
// ctrl + f5  ��ʼִ�в�����
// fn�������ܼ� 
//void test(int dream[])
//{
////	������ dream,4 ������������4��Ԫ�� dream,10������������10��Ԫ��
//
//}
//void test2();
//void test3()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2();
//}
//void test2()
//{
//	test3();
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int c = Add(a, b);
//	int arr[10] = { 1,2,5,6,8,3,9,4,0 };
//	char str[] = "abcdef";
//	test1();
//	test(arr);
//	return 0;
//}
//���Խ���������ڴ����п������Ӻ��ڴ�
// �ڴ���������� ��16������ʾ 2��Ϊ1�ֽ�
// ���ö�ջ �����ݽṹ�����ջ
//	ѹջ ��Ԫ�� ��ջ ɾԪ��
// �鿴������
// �鿴�Ĵ�����ص���Ϣ
// ��ද��
// eg1
//��n�Ľ׳�֮�� �ҳ������ԭ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//  int mul = 1;
//	for (i = 1; i <= n; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			mul *= j;
//		}
//		count += mul;
//	}
//	printf("%d\n", count);
//	return 0;
//}
// eg2
// �о�����������ѭ����ԭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//�ֲ����ݷ����ڴ��ջ�� ջ���ڴ�ʹ��ϰ�߸ߵ�ַ��͵�ַ����
// ���������±����������ַ���ɵ͵��߱仯��
// arrԽ����ʿ��ܻ�����i
// ���д���ô���
//	1.��������
//	2.bug��
//  3.Ч�ʸ�
//  4.�ɶ��Ը�
//  5.��ά���Ը�
//  6.ע������
//  7.�ĵ���ȫ
// coding strategies
// 1. ʹ��assert
// 2.ʹ�� const
// 3. ��ע��
// eg1: strcpy

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)// ���ʽ�Ľ����*dest��ASCII
//	{
//		;//;�����
//	}
//}
//char* my_strcpy(char* dest, const char* src)// const can avoid scr being changed
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20]="xxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	//strcpy(arr1, arr2);// char* strcpy(char* strDestination,const char* strSource) 
//  //return destination'first location char* ��ʽ����
//	// strcpy copies \n to another array
//	printf("%s", my_strcpy(arr1, arr2));
//	//printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	//num = 20; wrong because constant
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);//hhh break the constant
//	const int* p = &num;
//	//*p = 20; wrong
//	// const����ָ�����,
//	//	const����*���
//	//		const int*  ||  int const*    ���ε�*p  ��˼��pָ��Ķ��󲻿���ͨ��p���ı�
//	//	const����*�ұ�
//	//      int* const p   p�������Ըı�
//	return 0;
//}
// ʵ��string_len
//int stringlen(const char* p)
//{
//	assert(p);//assert(p != NULL) is equal to assert(p) p == NULL -> return 0;
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "wdxwsevcw";
//	printf("%d\n", stringlen(arr));
//	return 0;
//}//assert in release is optiamlized /Ҳ����û����(

// ��̳����Ĵ���
//  1.�����ʹ����﷨����  ->scanf("%d",d)
//  2.�����ʹ��� �������������ڼ�,�Ҳ������ţ����� -> ���� ->���� ->ִ��        
//  3.����ʱ����(����ʱ�������)  �����Ŵ���

//int main()
//{
//	int a = 0;
//	int b = 10;
//	//int c = Add(a, b);//�޷������ⲿ����  ���Ӵ������ִ�Сд��
//	// ctrl + f ����
//	return 0;
//}

