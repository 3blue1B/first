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
//	//	printf("saber\n");// debug x86 时为死循环
//	//}//debug dafaultly from bigger loction to the lower to create size in stack
//	//but in release i is lower than arr
//	return 0;
//}
// -------------1.数据类型的简绍
// char 1  short 2  int 4  long  32位4/64位8  long long 8  float(单精度浮点型) 4  double(双精度浮点型) 8 
// dominate the size of int && perspective of size 
//			类型分类
//		p1.整型家族  
// char unsigned char  signed char  (restore in the form of ASCII)
// short   unsigned short   [int] signed short [int]                 
// int long   long long 
// int a default -> signed int
// char a  unsigned or signed 不能决定 ,由编译器决定
// signed 10000000000000000000000000000011  第一个二进制数 0->正数  1 -> 负数 符号位和数值位
// unsigned 11111111111111111111111111111111 第一个二进制表示(int)pow(2,31) 无符号位
//		p2.浮点型家族 float double(精度高 范围大)
//		p3.自定义类型 （构造类型） 
// 数组类型[] 结构体类型 struct 枚举类型 enum 联合类型 union
//		p4指针类型 int* char* float* void*
//		p5空类型 void  函数返回类型 函数参数 指针类型 
//--------------------2.整型在内存中如何存储
//int main()
//{
//	// 数值有不同的表示形式 2   8   10   16 
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
//	// 大小端   低地址 0x 12 34 56 78   高地址
//	//  存放    低地址 0x 78 56 34 12   高地址(小端字节序存储 高位字节序放在高地址 低位放在低地址) Vs为小端形式存储
//	//			低地址 0x 12 34 56 78   高地址(大端字节序存储 高位放在低地址出     低位放在高地址处) 
//	// 内存存的2进制 但用16进制表示  只要是多个字节存储的都有大小端 大小端取决于硬件
//	return 0; 
//}
// eg1 设计一个小程序来判断当前机器的大小型
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (p)
//		printf("小端\n");
//	else
//		printf("大端\n");
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
//	printf("%u\n", a);// %u 打印无符号整数 su 打印sizeof
//	printf("%d\n", a);// -128
//	// 10000000 -> 11111111111111111111111110000000(整型提升)
//	// -> (截断)10000000 -> 11111111111111111111111110000000(unsigned int 提升) 
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
//		printf("%u\n", i); //死循环
//		Sleep(100);// 休眠100ms
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
// 算数转换 int  unsigned int  long int  unsigned long int   float  double  long double 
//int main()
//{
//	if ((int)strlen("abc") - strlen("abcdef") >= 0)
//		printf("www");
//	return 0;
//}
//------------------3. 浮点数在内存的存储
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
// 浮点数储存规则    
// any binary float v can be presented as (-1)^S * m * x^E (~ exp)
//(-1)^S 符号位 S = 0 positive  S = 1 negtive
// m 有效数字 m>=1 && m<2
// 2^E 指数位
// v = 5.0f(decimal) -> 101.0(binary) -> (-1)^0 * 1.01 * 2^2 && S = 0 && m = 1.01 && E = 2
// v = 9.5 -> 1001.1 -> 1.0011 * 2^3 (-1)^0 * 1.0011 * 2^3  S = 0  M = 1.0011  E =3
// v = 9.6 -> 1001.100010110111011100 可能无法准确表示  精度丢失 32bits
// 32bies S  E  M
//        1  8  23
// 64bits S  E  M
//        1  11 52
// for M: 1 <= M < 2 在计算机内部保存M时，默认是1因此可以舍掉，只保留后面的小数部分 M表示小数部分精度可以再高一位
// for E      E is unsigned int 
//			restore (float)  (E(真实值) + 127(中间值)         move -127 ~~ 128 retrieve -126 ~~ 128  
//		//	restore (double) (E + 1023)                            -1023 ~~1024          -1022 ~~1024
//int main()//IEE 754
//{
//	float f = 5.5;//有类型转换 加上f(5.5f)更准确
//	//101.1 -> 1.011 *2^2
//	// S->0 E -> 10000001 M -> 011000000000000000000000(0 complemented follows the {} part)
//	// 0010 0000 1011 0000 0000 0000 0000 0000
//	// 0x 40 b0 00 00
//	// 0x 00 00 b0 40(小端)
//	// E从内存中取出来取出可分为3种情况
//	// 1. E不全为0或不全为1 E-127(1023) -> 真实值 -> M+1
//	// 2. E为全0 E -> 真实值(E == 1-127 || 1-1023) ->M(不加第一位1,直接还原成小数) 表示无限接近于0的小数
//	// 3. E为全1  represent ± infinity
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
}*///release 版本不可调试
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
// 输入一个正数组，实现一个函数 odd first and even last







