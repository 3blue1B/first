#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// --------------1.release optimalize
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//for(i = 0; i<=12;i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("saber\n");// debug x86 ʱΪ��ѭ��
//	//}//debug dafaultly from bigger loction to the lower to create size in stack
//	//but in release i is lower than arr
//	return 0;
//}
// -------------1.�������͵ļ���
// char 1  short 2  int 4  long  32λ4/64λ8  long long 8  float(�����ȸ�����) 4  double(˫���ȸ�����) 8 
// dominate the size of int && perspective of size 
//			���ͷ���
//		p1.���ͼ���  
// char unsigned char  signed char  (restore in the form of ASCII)
// short   unsigned short   [int] signed short [int]                 
// int long   long long 
// int a default -> signed int
// char a  unsigned or signed ���ܾ��� ,�ɱ���������
// signed 10000000000000000000000000000011  ��һ���������� 0->����  1 -> ���� ����λ����ֵλ
// unsigned 11111111111111111111111111111111 ��һ�������Ʊ�ʾ(int)pow(2,31) �޷���λ
//		p2.�����ͼ��� float double(���ȸ� ��Χ��)
//		p3.�Զ������� ���������ͣ� 
// ��������[] �ṹ������ struct ö������ enum �������� union
//		p4ָ������ int* char* float* void*
//		p5������ void  ������������ �������� ָ������ 
//--------------------2.�������ڴ�����δ洢
//int main()
//{
//	// ��ֵ�в�ͬ�ı�ʾ��ʽ 2   8   10   16 
//	//                 0b10101  025  21  0x15
//	//		binary integer
//	// positive three is equal
//	// negtive // original 
//	// base_minus reverse original except the first one
//	// complement base_minus + 1 (restore the size of int_tree)
//	int a = 20;
//	//00000000000000000000000000010100
//	//0x00000014 //restore 14 00 00 00
//	int b = -10;
//	// 11111111111111111111111111110110
//	// 0xfffffff6      restore f6 ff ff ff
//	// complement benefits (CPU can only tackle plus)  -> 1+(-1)  NP!!!
//	// 1 00000000000000000000000000000001(original) 00000000000000000000000000000001
//	//-1 10000000000000000000000000000001			11111111111111111111111111111111
//	//   10000000000000000000000000000010(-2)		00000000000000000000000000000000 0
//	//   ~(original)+1 = complement ~(complement) +1 = original 
//	// ��С��   �͵�ַ 0x 12 34 56 78   �ߵ�ַ
//	//  ���    �͵�ַ 0x 78 56 34 12   �ߵ�ַ(С���ֽ���洢 ��λ�ֽ�����ڸߵ�ַ ��λ���ڵ͵�ַ) VsΪС����ʽ�洢
//	//			�͵�ַ 0x 12 34 56 78   �ߵ�ַ(����ֽ���洢 ��λ���ڵ͵�ַ��     ��λ���ڸߵ�ַ��) 
//	// �ڴ���2���� ����16���Ʊ�ʾ  ֻҪ�Ƕ���ֽڴ洢�Ķ��д�С�� ��С��ȡ����Ӳ��
//	return 0; 
//}
// eg1 ���һ��С�������жϵ�ǰ�����Ĵ�С��
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (p)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}
// practice
// eg1:
//int main()
//{//           original    complement            switch                 restoration  utilize                      
//	// signed  10000001 -> 11111111 -> 11111111111111111111111111111111 -> 11111111 -> -1
//	//unsigned 10000001 -> 11111111 -> 00000000000000000000000011111111 -> 11111111 -> 255
//	// signed neg complement 1 pos complement 0|| unsigned complement 1
//	char a = -1;//
//	signed char b = -1;//
//	unsigned char c = -1;//  -2 244 -3 243  -n  255-n   
//	printf("%d %d %d", a, b, c);//outcome -1 -1 255
//	return 0;
//}//char -128 ~~ 127(10000000 ->-128)  unsigned char 0 ~~ 255
//// char default  -> signed char
// eg2:
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);// %u ��ӡ�޷������� su ��ӡsizeof
//	printf("%d\n", a);// -128
//	// 10000000 -> 11111111111111111111111110000000(��������)
//	// -> (�ض�)10000000 -> 11111111111111111111111110000000(unsigned int ����) 
//	return 0;
//}
//int main()
//{
//	char a = 128;// the same as the former
//	//00000000000000000000000010000000
//	printf("%u\n", a);//
//	printf("%d\n", a);//-128
//	return 0;
//}
//int main()
//{
//	char a = 129;
//	//10000001 -> 11111111 -> 11111111111111111111111111111111 -> 11111111
//	printf("%d\n", a);//-127
//	int i = -20;//10000000000000000000000000010100 ->11111111111111111111111111101100 
//	unsigned int j = 10;//                           00000000000000000000000000001010
//	printf("%d\n", i + j);//                         11111111111111111111111111110110
////10000000000000000000000000001010 -10
//	return 0;
//}
#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i); //��ѭ��
//		Sleep(100);// ����100ms
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i; 
//	}
//	printf("%d", strlen(a));
//	// strlen relies on the fact that C strings are null-terminated. 
//	// It counts characters until it reaches the null terminator except NULL|| 
//	// NULL in char == 0  char(-256) = 0
//	//outcome 255     
//	return 0;
//} In Vs and most char -> signed char
//      0 1 2 3 4 ... 127 -128 -127 -126 .......-2 -1 0 
#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") >= 0) //strlen return size_t (unsigned int)
//		printf(">\n");
//	else
//		printf("<\n");// > unsigned int subtract each other the outcome is unsigned int
//	printf("%d\n", strlen("abc") - strlen("abcdef"));// compulsory change
//	printf("%u\n", strlen("abc") - strlen("abcdef"));
//	return 0;
//}
// ����ת�� int  unsigned int  long int  unsigned long int   float  double  long double 
//int main()
//{
//	if ((int)strlen("abc") - strlen("abcdef") >= 0)
//		printf("www");
//	return 0;
//}
//------------------3. ���������ڴ�Ĵ洢
// float  double  long double  float.h
// char short long int long long  limits.h
#include <limits.h>
#include <float.h>
//int main()
//{
//	//int n = 9;//00000000000000000000000000001001
//	//float* pFloat = (float*)&n;
//	//printf("%d\n", n);
//	//printf("%f\n", *pFloat);
//	//*pFloat = 9.0;
//	//printf("%d\n", n);
//	//printf("%f\n", *pFloat);
//	int a = 0;
//	float* p = (float*)&a;
//	*p = 2;
//	printf("%d\n", a);
//	float b = 1.0;
//	b = 2.0;
//	b = 2.2;
//	b = 4.0;
//	b = 4.22;
//	return 0;
//}
// �������������    
// any binary float v can be presented as (-1)^S * m * x^E (~ exp)
//(-1)^S ����λ S = 0 positive  S = 1 negtive
// m ��Ч���� m>=1 && m<2
// 2^E ָ��λ
// v = 5.0f(decimal) -> 101.0(binary) -> (-1)^0 * 1.01 * 2^2 && S = 0 && m = 1.01 && E = 2
// v = 9.5 -> 1001.1 -> 1.0011 * 2^3 (-1)^0 * 1.0011 * 2^3  S = 0  M = 1.0011  E =3
// v = 9.6 -> 1001.100010110111011100 �����޷�׼ȷ��ʾ  ���ȶ�ʧ 32bits
// 32bies S  E  M
//        1  8  23
// 64bits S  E  M
//        1  11 52
// for M: 1 <= M < 2 �ڼ�����ڲ�����Mʱ��Ĭ����1��˿��������ֻ���������С������ M��ʾС�����־��ȿ����ٸ�һλ
// for E      E is unsigned int 
//			restore (float)  (E(��ʵֵ) + 127(�м�ֵ)         move -127 ~~ 128 retrieve -126 ~~ 128  
//		//	restore (double) (E + 1023)                            -1023 ~~1024          -1022 ~~1024
//int main()//IEE 754
//{
//	float f = 5.5;//������ת�� ����f(5.5f)��׼ȷ
//	//101.1 -> 1.011 *2^2
//	// S->0 E -> 10000001 M -> 011000000000000000000000(0 complemented follows the {} part)
//	// 0010 0000 1011 0000 0000 0000 0000 0000
//	// 0x 40 b0 00 00
//	// 0x 00 00 b0 40(С��)
//	// E���ڴ���ȡ����ȡ���ɷ�Ϊ3�����
//	// 1. E��ȫΪ0��ȫΪ1 E-127(1023) -> ��ʵֵ -> M+1
//	// 2. EΪȫ0 E -> ��ʵֵ(E == 1-127 || 1-1023) ->M(���ӵ�һλ1,ֱ�ӻ�ԭ��С��) ��ʾ���޽ӽ���0��С��
//	// 3. EΪȫ1  represent �� infinity
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000000101
//	printf("%f\n", n);// (0.00000000000000000000101)*2^(-126)
//	float* p = (float*)&n;
//	*p = 9.f; // 1.001 * 2^3 
//	// 0 10000010 00100000000000000000
//	// 0x 41 10 00 00 
//	// 0x 00 00 10 41
//	printf("%d\n", n);
//	return 0;
//}
//     practice
#include <math.h>
//int main()
//{
//	float f1 = 1.11111111111111111111111f * (float)pow(2, 128);
//	printf("%f\n", f1);//outcome -> inf
//	// 0    11111111    11111111111111111111111
//	float f2 = -1.11111111111111111111111f * (float)pow(2, 128);
//	printf("%f\n", f2);//outcome -> -inf
//	// 1    11111111    11111111111111111111111
//	float f3 = 1.11111111111111111111111f * (float)pow(2, 129);
//	// 1 (1)00000000    11111111111111111111111 stack overflow
//	printf("%f\n", f3);//outcome -> inf
//	return 0;
//}
/*int main()
{
	return 0;
}*///release �汾���ɵ���
//void my_strcoy(char* sou , char* des)
//{
//	while (*sou != '\0')
//	{
//		*des = *sou;
//		des++;
//		sou++;
//	}
//}
//int main()
//{
//
//	char a[10] = "abcdefg";
//	char b[10] = { 0 };
//	my_strcoy(a, b);
//	printf("%s", b);
//	return 0;
//}
// ����һ�������飬ʵ��һ������ odd first and even last







