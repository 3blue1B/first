//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#include <math.h>
//#include <stdbool.h>
// catalogue defination built-in 自定义函数 函数参数 函数调用 函数的嵌套调用和链式访问 函数的声明和定义 函数递归
// function(函数) <---->subroutine(子程序) 完成特定的任务 有独立
//一般具有参数并有返回值，提供对过程的封装和细节的隐藏 被称为这些代码被集成为软件库 
//函数分类 库函数 自定义函数
//1.库函数 www.cplusplus.coms self_study
// IO 字符串操作 字符操作 内存操作 时间日期操作 数学操作 其他库操作 一定包含头文件
//2.自定义函数 return_type fun_name (parameter1 ......)0 1 or positive infinite
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
	//不行 x y 为实际参数(实参)；m n 为形式参数(形参)，当时参传给形参时，形参是对实参的一份临时拷贝 地址变了 
// 对形参的修改不影响实参
//int a = 10;
//int* p = &a;
//a = 20;//directly
//*p = 30;//indirectly
	//int z = *px;
	//*px = *py;
	//*py = z;
	//genuis 地址不表 完成交换 ingenious

//}一个工程中只能有一个main函数

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
	//printf("%d\n", Max(1,2));//调用函数
	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y);
	//printf("before x:%d,y:%d",x, y);
	//Exchange(&x, &y);
	//printf("after x:%d,y:%d", x, y);
	// 传地址 对ab本身进行操作
	// 传参数 不用改变ab 得到一个新值
	// ------------------function' parameters--------------;
	// 真实传给函数的参数 常量 变量 表达式 函数(premise contains return) 都必须额有特定的值以便把这些值传给参数
	//printf("%d\n",Max(Max(1 + 5, 5),7));
	//形式参数是指函数括号中的参数 因为形参只有在函数被调用的过程中才实例化（分配内存单元），so it is called 形式参数
	// it will be eliminated after utilising ,so it is only aceessible in certain function
	//4.函数的调用 传值调用(形参 实参 各有地址 对实参的调用不会影响它本身)	
	// 传址调用(对实参的调用可能影响它本身,函数内部可操作函数外部的变量)
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
// rule : yes return 1 .no return 0 function must be 高内聚低耦合 high cohesion and low coupling
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

//            ------------------4 .写一个函数实现整型有序的数列的二分查找
//int find_k_in_arr_sz(int k ,int arr,int sz)//传数组不传方块
//{		//sz is a must to transmit when transmitting array,to save memory space ,only tranmit the location
//of first element of the original array;int arr is a pointer variable
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;//mid 放在循环内部
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
//}//形参和实参可同可不同
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
// -------------4.写一个函数每调用一次num ++
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
//}//尽量少用全r局变量
// -----------函数的嵌套调用----------函数可以嵌套调用但是不可以嵌套定义
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
//---------链式访问------------rely on the return of function ,a must and neccisity
//int main()
//{
//	//printf("%d", printf("%d", printf("%d", 43)));//outcome 4321
//	//printf("\n%d %d %d ",add(1,2),sub(114514,618),level(31415926,27178));
//	return 0;
//}	不推荐的写法	1.//if function has no return values| default is int 
// eg Add(int x,int y) default Add int 
//					2.//!= void and no return |default return the last one 
//					3.void test()  test(100) transmit but no vain|void test(void) no parameters needed 
// main have three parameters main(int argc,char*argv[],char*enve[])
//-------------------函数的声明和定义---------------------
//int Add(int x, int y);//declaration but only by defining can function exist
////先声明后使用 声明一般在头文件
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
// built_in <>   self_defining ""| 在一个(和两个)项目中定义(和声明后)可以在其他文件中使用：
//那一个或两个文件就做一个模块 可以调用函数 建议拆成定义和声明
// 初学编程时 感觉把所有代码写在一个文件最方便 but corporation collaboration
//#include "add.h"//本质把函数声明(头文件的内容)拷贝过来 不会有警告 
//// add.h 放函数声明 add.c放函数实现 add.c可以编译成一个静态库(二进制)(加密) 头文件和静态库让别人实现 
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
//}//头文件开始有#pragma once 防止头文件被重复包含
//   ---------------------函数的递归--------------------大事化小
//	1.initiallize to make it contain the end 否则死循环(dead cycle) 栈溢出(stack overflow)
//stack 局部变量 函数的形参 每一次函数的调用都会在栈区上申请空间  
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
//—————————————— 函数的递归和|迭代(类循环)|——————————————
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









