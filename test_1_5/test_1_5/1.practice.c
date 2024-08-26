//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//// reverse string
////1....//void reverse(char arr[])
////{
////	int left = 0;
////	int right = strlen(arr) - 1;
////	while (left < right)
////	{
////		char a = arr[left];
////		arr[left] = arr[right];
////		arr[right] = a;
////		left++;
////		right--;
////	}
////}
////2...//recurrive
////void reverse(char* str)
////{
////	char tmp = *str;
////	int len = strlen(str) - 1;
////	*str = *(str + len);
////	*(str + len) = '\0';
////	if (*(str+1) != '\0')
////	{
////		reverse(str + 1);
////	}
////		*(str + len) = tmp;
////}
////int main()
////{
////	char arr[] = "abcdef";
////	reverse(arr);
////	printf("%s\n", arr);
////	return 0;
////}
//
////int DigitSum(int num)
////{
////	static unsigned int Sum = 0;
////	 Sum += num % 10;
////	num = num / 10;
////	if (num>9)
////		DigitSum(num);
////	return Sum;
////}
////int main()
////{
////	unsigned int a = 0;
////	scanf("%d", &a);
////	printf("%d\n", DigitSum(a));
////	return 0;
////}
////int my_pow(int a, int b)
////{
////	if (b == 1 )
////	{
////		return a;
////	}	
////	else if (b == 0 )
////	{
////		return 1;
////	}
////	else
////	{
////		return a*my_pow(a, b - 1);
////	}
////}
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d", &a);
////	scanf("%d", &b);
////	printf("%d\n", my_pow(a,b));
////	return 0;
////}
//// //int arr[10] ----->type int[10]
////sizeof ---?calculate the size of the memory occupied by the varibles
//// strlen --->only calculate the length of string or character ending '\0'(including \0);
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	for (int a = 0; a < len; a++)
//	{
//		int tmp = 0;
//		tmp = arr1[a];
//		arr1[a] = arr2[a];
//		arr2[a] = tmp;
//	}
//	for (int b = 0; b < len; b++)
//	{
//		printf("%d", arr1[b]);
//		printf("%d\n", arr2[b]);
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//int main()
//{
//	srand(54);
//	int a = rand();
//	printf("%d ", a);
//
//}




