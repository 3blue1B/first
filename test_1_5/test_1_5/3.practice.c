#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
// 1.可以走一步 可以走两步 n步时多少种方法
//int StepCount(unsigned int a)
//{
//	if (a == 1)
//	{
//		return 1;
//	}
//	else if (a == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return StepCount(a - 1) + StepCount(a - 2);
//	}
//}// Fibonacci
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	int step_count = StepCount(a);
//	printf("%d\n", step_count);
//	return 0;
//}
// 删除某个整数N<=50
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[50];
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int count = 0;
//	int j = 0;
//	for (j = 0; j < N; j++)
//	{
//		for (i = 0; i < N; i++)
//		{
//			if (arr[i] == del)
//			{
//				count++;
//				for (int k = 0; k <= N - i - count; k++)
//				{
//					arr[i + k] = arr[i + k + 1];
//				}
//			}
//
//		}
//	}
//	for (i = 0; i < N - count; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// one possible version
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[50];
//	for (int b = 0; b < N; b++)
//	{
//		scanf("%d", &arr[b]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (int a = 0; a < j; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}
// the gap between the max score and the min score
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int min = arr[0];
//	int max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];			
//		}
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	int gap = max - min;
//	printf("%d\n", gap);
//	return 0;
//}
//int main()
//{
//	int n = 0, arr[50] = { 0 }, max = 0, min = 100;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//	return 0;
//}
// 多组输入字母的小写的转换 switch_function toupper || tolower  header ctype.h
//int main()
//{
//	//a 97 b 98 | A 65 B66 A = a -32  //'a' 表示a'ASCII "a" represent a
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)// or != EOF
//	{
//		// scanf 返回的是成功读取的数据的个数,读取失败时返回EOF
//		if(ch >= 'a'&& ch <= 'z') // judge_function isupper
//		{
//			printf("%c\n", ch-32);
//		}
//		else if(ch>='A'&&ch <= 'Z')// islower 
//		{
//			printf("%c\n", ch + 32);// \n can be eaten by getchar
//		}
//	}
//	return 0;
//}
//判断是不是字母
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) != EOF)
//		
//		// add space befor %c -> skip the blank characters and sreings before next character 
//		// blank \n space 	ect,
//	{// bulit_in function isalphabet
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet\n",ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet\n",ch);
//		}
//	}
//	return 0;
//}
// 655 == 6*55 + 65*5 
// 1461 ==1*461 + 14*61 + 146*1 
// find five digit number satisfying this feature
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		if (i ==  ( (i/10) * (i%10) )
//				+ ( (i / 100) * (i % 100))
//				+ ( (i / 1000) * (i % 1000))
//				+ ( (i / 10000) * (i % 10000))
//			)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i =10000; i < 100000;i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			count += (i / k) * (i % k);
//		}
//		if (count == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


















