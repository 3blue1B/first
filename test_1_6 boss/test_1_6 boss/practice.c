#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%02d", a);//outcome  01  当函数内局部变量和全局变量同名，使用的时局部变量
//	//函数内的局部变量进入创建，退出销毁
//	return 0;
//}

// c程序中必须包含一个main函数，C语言的基本单位是函数

// 输入输出函数 -> 在库函数中  但不是C语言本身就携带

//int main()
//{
//	double a,b,c;
//	a = 3;
//	b = a + 3 / 2;
//	c = 3 + a / 2;
//	printf("%lf\n", b);//4.000000
//	printf("%lf\n", c);//4.500000  
//	return 0;//   /整数除法还是小数除法
//}
// *p++  ->   *p,  p += 1 
// *++p  ->  p += 1,  *p
// AB的最小公倍数
// one version
//int main()
//{
//	unsigned int a=0, b=0;
//	while (scanf("%d,%d",&a,&b)==2)
//	{
//		int mul = a * b;
//		int tem = 1;
//		while (1)
//		{
//			a = a % b;
//			if (a == 0)
//			{
//				tem = b;
//				break;
//			}
//			b = b % a;
//			if (b == 0)
//			{
//				tem = a;
//				break;
//			}
//		}
//		int Max = mul / tem;
//		printf("%d\n", Max);
//	}
//	return 0;
//}
// another version
//int main()
//{
//	unsigned int a=0, b=0;
//	while (scanf("%d,%d",&a,&b)==2)
//	{
//		int Max = a > b ? a : b;	
//		while ((Max % a != 0) || (Max % b != 0))
//		{
//			Max++;
//		}
//		printf("%d\n", Max);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d,%d", &a, &b) == 2)
//	{
//		int i = 0;
//		for (i = 1; (a * i) % b != 0; i++)
//		{
//			;
//		}
//		printf("%d\n", i * a);
//	}
//	return 0;
//}
// 逆置字符串 讲一句话的单词倒置 但标点不倒置 每次输入一个长度不超过100
// I like the moon.  -> moon. the like I 

//int main()
//{
//	char arr1[101] = { 0 };
//	gets(arr1);
//	char arr2[101] = { 0 };
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 101; i++)
//	{
//		if (arr1[i] != '\0')
//		{
//			count++;
//		}
//		else
//			break;
//	}
//	for (i = 0; i < count; i++)
//	{
//		if ( (i == 0 && arr1[i + 1] == ' ')|| (i !=0 && arr1[i-1]==' ' && arr1[i+1] == ' '))
//		{
//			arr2[count - i - 1] = arr1[i];
//		}
//		else
//		{
//			int j = i;
//			while (arr1[i] != ' ' && i != count-1)
//			{
//				i++;
//			}
//			int k = 0;
//			for (k = j; k < i; k++)
//			{
//				arr2[count-i+k-j] = arr1[k];
//			}
//			if (i != count - 1)
//			{
//				arr2[count - 1 - i] = arr1[i];
//			}
//			else
//			{
//				arr2[0] = arr1[i];
//			}
//		}
//	}
//	printf("%s\n", arr2);
//	return 0;
//}// my coding
// master coding reverse the wholly string reverse every codes

//#include <string.h>
//
//void reverse(char* p, int left,int right)
//{
//	while (right > left)
//	{
//		char tmp = *(p + right);
//		*(p + right) = *(p + left);
//		*(p + left) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = {0};
//	gets(arr);
//	int len = strlen(arr) - 1;
//	reverse(arr,0,len);
//
//	int i = 0;
//	int left = 0;
//	int right = 0;
//	for (i = 0; i <= len; i++)
//	{
//
//		if (arr[i] == ' ')
//		{
//			right = i - 1;
//			reverse(arr, left, right);
//			left = i + 1;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}

