//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//���������� + - * / %  | / �������ͱ�������Ϊ���� ��Ϊ���� 9/2 = 4. �������һ�������� ���Ϊ������ 9/2.0 = 4.5 | % mode 9%2 = 1 
//��λ������>> <<
//λ������ & ^ |
//��ֵ������ = += -= *= /= %= &= ^= |= >>= <<=
//��Ŀ������ֻ��һ���������Ĳ����� ----- ˫Ŀ������| 5 + 6 | 6 -7 | 
//             |���߼������� | - ��ֵ | + ��ֵ(seems to have no meaning) | & ȡ��ַ | sizeof �����������ͳ��� ���ֽ�Ϊ��λ 
//             | ~ �Զ�����ȡ�� | ++ 1.����++ �ȸ�ֵ ���1 2.ǰ��++ �ȼ�1 ��ֵ |-- ͬ�� | *��ӻطò�����  
//             | (int) (float) (double) ����ǿ����ת�� int a = (int) 3.99;outcome 3
//��ϵ������ < > >= <= == !=  
//�߼������� &&�߼��� ||�߼���
//����������(��Ŀ������) exp1 ? exp2 : exp3 ������������ if exp1 TRUE --->2 if exp1 FALSE --->3 .��С����     enhance readability 
//���ű��ʽ exp1 , exp2 , .... expn commas separate a series of formulas,from left to right operate orderly. so dose it
//           �������ʽ�Ľ�������һ�����ʽ�Ľ��
//�±����� �������� �ṹ��Ա respctively [] () . ->|[]�ڲ������Ǳ��� | ()��������ʱ���Ų��ܱ�ɾ�� . ->

//float Max(float a , float b)
//{
//	float r = (a > b ?  a : b);
//	return r;
//}

//int main()
//{
	//float a = 7 / 2.0;//for % if any float --->wrong
	//printf("%f\n", a);//��������������ʱ������| ����һ������������ִ��һ��������
	//int a = 0; //��ʼ��
	//a = 5; //��ֵ
	// number 0 is False else is True
	//int a = 0;
	//scanf("%d", &a);
	//if (!a)
	//{
	//	printf("T");
	//}
	//else
	//{
	//	printf("F");
	//}
	//int a = 0;
	//printf("%d\n", sizeof(int));//right
	//printf("%d\n", sizeof a);//right
	//printf("%d\n", sizeof int);//wrong
	//int arr1[10];
	//printf("%d\n", sizeof(arr1));
	//char arr2[] = "hello";
	//printf("%d\n", sizeof(arr2));//outcome 6
	//char arr3[] = {'a','b','c'};
	//char arr4[5] = {'a','b','c'};
	//printf("%d\n", sizeof(arr3));//outcome 3
	//printf("%d\n", strlen(arr3));//outcome unsure
	//printf("%d\n", sizeof(arr4));//outcome 5
	//printf("%d\n", strlen(arr4));//outcome 3
	//int a = 10;
	//int b = ++a;
	//printf("%d\n", a);
	//printf("%d\n", b);
	//int a = (int)3.99;
	//printf("%d\n", a);
	//int a = 1;
	//int b = 2;
	//if (a == 1 || b == 1)
	//{
	//	printf("hh");
	//}
	//printf("%f\n", Max(1.5, 1.9));
	/*int a = 10;
	int b = NULL;
	int c = 0;
	int d = (c = a + b, a = c - b, a + b + c);
	printf("%d\n", d);*/
	//��������ʱarr[x] x ����Ϊ���� ֻ��Ϊ����