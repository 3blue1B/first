//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#include <math.h>
//#include <stdbool.h>
// catalogue defination built-in �Զ��庯�� �������� �������� ������Ƕ�׵��ú���ʽ���� �����������Ͷ��� �����ݹ�
// function(����) <---->subroutine(�ӳ���) ����ض������� �ж���
//һ����в������з���ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ����� ����Ϊ��Щ���뱻����Ϊ����� 
//�������� �⺯�� �Զ��庯��
//1.�⺯�� www.cplusplus.coms self_study
// IO �ַ������� �ַ����� �ڴ���� ʱ�����ڲ��� ��ѧ���� ��������� һ������ͷ�ļ�
//2.�Զ��庯�� return_type fun_name (parameter1 ......)0 1 or positive infinite
//{statement; }
//int Max(int a, int b)
//{
//	//int c = 0;
//	//a > b ? c = a : c = b;
//	//return c; wrong expression != assignment exp(return sth) ass(operate sth)
//	return(a > b? a: b);
//}
//void Exchange(int* px, int* py)
//{
	/*int o = 0;
	o = m;
	m = n;
	n = o;*/
	//���� x y Ϊʵ�ʲ���(ʵ��)��m n Ϊ��ʽ����(�β�)����ʱ�δ����β�ʱ���β��Ƕ�ʵ�ε�һ����ʱ���� ��ַ���� 
// ���βε��޸Ĳ�Ӱ��ʵ��
//int a = 10;
//int* p = &a;
//a = 20;//directly
//*p = 30;//indirectly
	//int z = *px;
	//*px = *py;
	//*py = z;
	//genuis ��ַ���� ��ɽ��� ingenious

//}һ��������ֻ����һ��main����

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
	//char arr[20] = "hello world";
	//memset(arr+6,'x', 3);
	//printf("%s\n", arr);
	//return 0;
	//printf("%d\n", Max(1,2));//���ú���
	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y);
	//printf("before x:%d,y:%d",x, y);
	//Exchange(&x, &y);
	//printf("after x:%d,y:%d", x, y);
	// ����ַ ��ab������в���
	// ������ ���øı�ab �õ�һ����ֵ
	// ------------------function' parameters--------------;
	// ��ʵ���������Ĳ��� ���� ���� ���ʽ ����(premise contains return) ����������ض���ֵ�Ա����Щֵ��������
	//printf("%d\n",Max(Max(1 + 5, 5),7));
	//��ʽ������ָ���������еĲ��� ��Ϊ�β�ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ����so it is called ��ʽ����
	// it will be eliminated after utilising ,so it is only aceessible in certain function
	//4.�����ĵ��� ��ֵ����(�β� ʵ�� ���е�ַ ��ʵ�εĵ��ò���Ӱ��������)	
	// ��ַ����(��ʵ�εĵ��ÿ���Ӱ��������,�����ڲ��ɲ��������ⲿ�ı���)
	//return 0;
//}
//                      --------------------- 1.practice judge a number a prime number 	
//void prime_judging(int x)
//{
//	int i = 0;
//	printf("the divisor of %d is(excluding 1 and %d)", x, x);
//	for (i = 2; i <= x/2; i++)
//	{
//		if(0 == x % i)	
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	prime_judging(5057);
//	return 0;
//}
//                    =------------------2.find prime numbers ranging from 1 to 200
//int main()
//{
//	int i, j, count = 0;
//	for (i = 1; i <= 200; i+=2)
//	{
//		int flag = 1;
//		if (i == 1)
//			continue;
//		else if (i == 2)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else
//		{
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//                ------------------3.create a function to jugde leap year(\4 && (!\100 || \400))
// tip: if r1    else if r2  A satisfy r1 r2   A implement the first 
// rule : yes return 1 .no return 0 function must be ���ھ۵���� high cohesion and low coupling
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 100) || x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i,count  = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	return 0;
//}

//            ------------------4 .дһ������ʵ��������������еĶ��ֲ���
//int find_k_in_arr_sz(int k ,int arr,int sz)//�����鲻������
//{		//sz is a must to transmit when transmitting array,to save memory space ,only tranmit the location
//of first element of the original array;int arr is a pointer variable
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;//mid ����ѭ���ڲ�
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int k1 = 7;
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int ret = find_k_in_arr_sz(k1, arr1,sz1);//no return -1
//	if (ret == -1)
//	{
//		printf("fail to find\n");
//	}
//	else
//	{
//		printf("succeed finding %d which k is %d\n", ret, k1);
//	}// first how to use this function subsequently generate this function
//	return 0;
//}//�βκ�ʵ�ο�ͬ�ɲ�ͬ
//  C99 incorporate boolean type to express T and F bool flag = true or false
//#include <stdbool.h>
//bool  is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true; // ture 1| false 0 |the size of boolean type is 1 bit
//
//}
// -------------4.дһ������ÿ����һ��num ++
//void count(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num1 = 0;
//again:	
//	count(&num1);
//	printf("%d ", num1);
//	if (num1 >= 10000)
//	{
//		goto skip;
//	}
//	goto again;
//skip:	
//	return 0;
//}//��������ȫr�ֱ���
// -----------������Ƕ�׵���----------��������Ƕ�׵��õ��ǲ�����Ƕ�׶���
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int level(int x, int y)
//{
//	return 2 * add(x, y) + sub(x, y);
//}
//---------��ʽ����------------rely on the return of function ,a must and neccisity
//int main()
//{
//	//printf("%d", printf("%d", printf("%d", 43)));//outcome 4321
//	//printf("\n%d %d %d ",add(1,2),sub(114514,618),level(31415926,27178));
//	return 0;
//}	���Ƽ���д��	1.//if function has no return values| default is int 
// eg Add(int x,int y) default Add int 
//					2.//!= void and no return |default return the last one 
//					3.void test()  test(100) transmit but no vain|void test(void) no parameters needed 
// main have three parameters main(int argc,char*argv[],char*enve[])
//-------------------�����������Ͷ���---------------------
//int Add(int x, int y);//declaration but only by defining can function exist
////��������ʹ�� ����һ����ͷ�ļ�
//int main()
//{
//	Add(1, 2);
//	return 0;
//}
////defination 
//int Add(int x, int y)
//{
//	return x + y;
//}//putting it after int main may contribute to warnings so it need statment before int main
//statement generally exists in head_files
// built_in <>   self_defining ""| ��һ��(������)��Ŀ�ж���(��������)�����������ļ���ʹ�ã�
//��һ���������ļ�����һ��ģ�� ���Ե��ú��� �����ɶ��������
// ��ѧ���ʱ �о������д���д��һ���ļ���� but corporation collaboration
//#include "add.h"//���ʰѺ�������(ͷ�ļ�������)�������� �����о��� 
//// add.h �ź������� add.c�ź���ʵ�� add.c���Ա����һ����̬��(������)(����) ͷ�ļ��;�̬���ñ���ʵ�� 
//int main()
//{
//	printf("%d\n", add(1, 2));
//	return 0;
//}
//ways to incorporate lib(static library)
//#pragma comment(lib,"add.lib")
//int main()
//{
//	printf("%d\n", add(1, 2));
//	return 0;
//}//ͷ�ļ���ʼ��#pragma once ��ֹͷ�ļ����ظ�����
//   ---------------------�����ĵݹ�--------------------���»�С
//	1.initiallize to make it contain the end ������ѭ��(dead cycle) ջ���(stack overflow)
//stack �ֲ����� �������β� ÿһ�κ����ĵ��ö�����ջ��������ռ�  
//	2.closer to this limitations and can access it in finite times
// -------------1111111111111. receive an unsigned integer and print it orderly eg 1234 -->1 2 3 4
// %d signed integer containing 0,+ and - ,%u unsigned integer containging only + and 0
//-----------one kind of version
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	// create a stack to hold the digits
//	int stack[10]; // assuming the number has at most 10 digits
//	int top = -1;  // stack is initially empty
//	// push digits onto the stack
//	while (num)
//	{
//		stack[++top] = num % 10; // push digit onto stack
//		num = num / 10;          // remove the last digit
//	}
//	// pop and print digits in reverse order
//	while (top >= 0)
//	{
//		printf("%d ", stack[top--]);
//	}
//	return 0;
//}
//-----------another kind of version-------
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	print(a);
//	return 0;
//}
// ----------22222222222222function not allowed to create temporary parameters can calculate the length of string
// one version (albiet with wrong)
// int int_len(int x[]) parameters -->array or pointer 
//int char_len(char*x)//transmit the location of the first character and locations of elements in one array is continuous
//{	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char len = char_len(arr1);
//	printf("%d\n", len);
//	return 0;
//}
// another version ingenious   
//int char_len(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1+char_len((str+1));//++str and str+1 both ok but the latter is better on account continuity of str 
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char len = char_len(arr1);
//	printf("%d\n", len);
//	return 0;
//}
//���������������������������� �����ĵݹ��|����(��ѭ��)|����������������������������
// 1...............factorial........
//double fac(double x)
//{
//	
//	if (x == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fac(x - 1) * x;
//	}
//}
//int main()
//{
//	printf("%lf", fac(0.5));
//	return 0;
//}
//   2........................Fibonacci series.................
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//}
// regarding fib iteration is fabulous while recursion is terrible
//int fib(int x)
//{
//	int a, b, c = 1;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
// recurrion still have the risk of stack overflowing
//ways utilise static variable to replace local variable
// some intriguing qustions
//   1. tower of Hanoi
//int Hanoi(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return 2*(x-1) + 1;
//}
//   2.frog jump problem
//int frog_junp(int x)
//{
//	if (x == 1 || 2)
//		return 1;
//	else
//		return frog_jump(x - 1) + frog_jump(x - 2);
//}









