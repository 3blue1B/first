// ==---------------------C introduction----------------
// printf������һ���⺯��
//main ������ �ǳ������� only one ����ֻ��һ�� 
//#define _CRT_SECURE_NO_WARNINGS //һ��д�ڵ�һ�� C RUN TIME SECURE NO WARNINGS
//#include <stdio.h>//standard input output
//���д���ctrl + f5
// fn + f1 ����f1��ԭ������˼
//int main()
//{
//	printf("he\nhe");
//	return 0; // ���гɹ�0 ���в��ɹ�Ϊ��0 
//}
// ----------------------------------------------------��������-----------------------------
// �ַ����� char �ַ��������� short ������ int ���� long ������ long long ���������� float �����ȸ����� double ˫���ȸ�����
//int main()
//{
//	printf("%zu\n", sizeof(char));// 1 %d��׼������      %zus size_t�����͵�λ���ֽ� 
//	printf("%zu\n", sizeof(short));//2
//	printf("%zu\n", sizeof(int));//4
//	printf("%zu\n", sizeof(long));//4
//	printf("%zu\n", sizeof(long long));//8
//	printf("%zu\n", sizeof(float));//4
//	printf("%zu\n", sizeof(double));//8
//	return 0;
// }
 //������ĵ�λ  bit ����λ 
// byte �ֽ�
// kb = 1000byte
// mb
// jb
// tb
// pb  ��������ֻ��0 1 �洢һ���ռ� ���洢һ��0��1�Ĵ�С��Ϊһ��bit
//		8*bit (8*rome) == 1 byte   1kb ==1024byte 1mb ==1024kb 1jb =1024mb 1tb ==1024jb 1pb ==1024jb
// 
//int main()
//{
//	int age = 20;//���ڴ�����һ���Ŀռ�洢��Ϣ
//	float price = 66.6;
//	return 0;
//}
// -------�����볣��--------�ֲ�����(inside function) ȫ�ֱ���(inside function) 
// ��������ͬʱ �ֲ��������� һ�������в�����������ͬ�ľֲ�����
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//int main()
//{//scanf() ---. input
//	int num1 = 0;//��ʼ������ 
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);//%d�Ǹ�ʽ����  &��ʾλ�� ��������ĳ��ʽ����ĳλ��
//	int sum = num1 + num2;// scanf��VS�Լ��ṩ�ĺ��� ����standard c provide
//	printf("%d\n", sum);
//
//	return 0;
//}
// -----------------------------������������(�������ʹ�ã�����������-------------------
// �ֲ������������� ���������������  ȫ�ֱ��� ������Ŀ
//���������ⲿ���﷨ "extern" int a
//extern int a;
//void test()
//{
//	printf("test-->%d\n", a);
//
//}
//int main()
//{
//	test();
//	{
//		
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}
// ��������  �ֲ�����enter ������ʼ out ��������� //ȫ�ֱ�����������Լ�ǳ������������
//int main()
//{
//	{//embark on a life cycle 
//		int a = 0;
//	}// end
//
//	return 0;
//}
