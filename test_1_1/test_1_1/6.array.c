//an array is a collection of elements of the same data type, stored in contiguous memory locations
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>

//int main()
//{
//	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};//���������� or �±� 0 1 2 3 -->
//	int i = 0;
//	while (i <= 9)
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	}
//	return 0;
//}
//===============practice==========
//OJ --->online judge ���� 
//1 IO�� ���д����Լ���ɺ�ʵ�� ����������
//2 �ӿ��� ֻ��Ҫһ�������ĺ��� ����������Ҫ�����ݶ���׼���õ�
// 0����0| '0'�ַ�0 ASCIIֵ��48 |'\0' string ASCII value ==0|EOF enf of file value == -1
// int arr[] wrong
// int arr[5] right
// int arr[] = {1,2,3} right autimaticall supplement 3(no \0 only string)  
// int arr[] = {} wrong;
//����ȫ��ʼ�� ʣ��Ĳ���Ĭ��Ϊ0 NAMELY_NULL
//eg:
//int main()
//{
//	char arr1[4] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1)); outcome 3
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int arr1[n] = { 0 };//n is variable but it needs constant
//	return 0;
//}
// C99 ��ǰ ����Ĵ�С�����ó������߳������ʽ��ָ��
// C99֮�� ֧���˱䳤���� ֮����������Ĵ�С�Ǳ��� ����ʱ����ָ����ʽ�������ǲ��ɳ�ʼ����
//float Max(float x, float y)
//{
//	if (x >y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int f(float x)
//{
//	if (x < 0)
//	{
//		return -1;
//	}
//	if (x > 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//
//	}
//}
//
//
//int main()
//{
//	//int n = 100;
//	//int arr1(n);//right
//	//char ch1[11] = "helloworld";//right
//	//char ch2[10] = { 'a','b','c','d' }; //right
//	//printf("%d\n", strlen(ch1));
//	//printf("%d\n", strlen(ch2));
//	//int arr2(n) ={1,2,3,4}//wrong;
//	//float a = 0;
//	//float b = 0;
//	//scanf("%f %f", &a, &b);
//	//float max_a_b = Max(a, b);
//	//printf("%f\n", max_a_b);
//	printf("%d\n", f(-520));
//	return 0;
//}