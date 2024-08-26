#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
//操作符

//  —————————1.算术操作符------------------------
// + - * / %    
// highlights:int division /(整除)  double division /(小数除法) 5/2 -- >2 | 5.0/2 --> 2.5| 5/2.0 --> 2.5|
// % --> int % int  两边必须是整数

// ----------------2.移位操作符(binary)----------------------
// 移动的是二进制位 << 左移操作符 | >>右移操作符

//int main()
//{

	//整数的二进制表示有3种 
	//原码
	//反码
	//补码

	//正整数的原码 反码 补码 相同
	//负整数的原码 反码 补码 要计算
	//int a = 7;
				// 正整数
				// 原/反/补 码 00000000000000000000000000000111  最高位是0表示其正，最高位是1表示其负；int 4bytes 32bits 
	//int a = -7
				//负整数 
				// 原码 10000000000000000000000000000111
				// 反码 11111111111111111111111111111000 原码的符号位不变，其它位按位取反就是反码
				// 补码 11111111111111111111111111111001 反码加1就是补码不考虑正负 最后一位0则为1 最后一位1则进一
				//or 其绝对值取反加一
				// 0 原/反/补 码00000000000000000000000000000000
	// 整数在内存中存储的是补码
	//int a = 7;
	//int b = a<<1;//b = 14 00000000000000000000000000001110 left discard | right supplement 0
	// a unchange | b change
	//int a = 0;
	//scanf("%d", &a);//-7
	//int b = a << 1; //补码11111111111111111111111111110010 反码 11111111111111111111111111110001
	////原码 00000000000000000000000000001110 -14 整数左移有乘2的特点//左移和右移只用于整数
	//printf("%d\n", b);
	//    右移操作符
	//  算术移位
//	int a = -7;
//	int b = a >> 1;
//	printf("%d\n", a);//a unchange
//	printf("%d\n", b);
//	//right discard | 左边补充原符号位
//	// 逻辑移位 right discard | left supplement 0
//	//一般采用的算术右移
//	return 0;
//}
//-----------3.位操作符-------
// &  按位与（二进制位）
// |  按位或（二进制位）
// ^  按位异或（二进制位）
// ~  按位非 1 ---> 0 ; 0 ---> 1
//int main()
//{
//	//int a = 3;
//	//int b = -5;
//	//int c = a & b;
//	//// a 00000000000000000000000000000011
//	//// b 11111111111111111111111111111011
//	////补码如果有0则为0  如果两个都为1则为1  c算出来是补码但%d表示一个有符号的整数
//	//printf("%d\n", c);//3
//	//int a = 3;
//	//int b = -5;
//	//int c = a | b;
//	//// a 00000000000000000000000000000011
//	//// b 11111111111111111111111111111011
//	//// c 11111111111111111111111111111011
// // // 原码10000000000000000000000000000101 
//	////有任意一个1就为1 两个都为0就为0
//	//printf("%d\n", c);//-5
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	// a 00000000000000000000000000000011
//	// b 11111111111111111111111111111011
//	// c 11111111111111111111111111111000
//  // 原码10000000000000000000000000001000 
//	//相同为0    相异为1
//	printf("%d\n", c);//-8
//	return 0;
//}
// practical applications --->不创建临时变量实现两个数的交换
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//1. a = a + b;b = a - b;a = a - b;
//	// a  b   a  b   a  b	a  b
//	// 1  0 | 1  1 | 0  1 | 0  0 |
//	a = a ^ b;
//	// 1  0 | 0  1 | 1  1 | 0  0 |
//	b = a ^ b;
//	// 1  1 | 0  1 | 0  1 | 0  0 |
//	a = a ^ b;
//	// 0  1 | 1  1 | 0  1 | 0  0 |
//	printf("%d %d", a, b);
//	return 0;
//}
// a ^ a == 0; 0 ^ a == 1;
// b == ((a ^ b)^b) == (a ^ (b ^ b))；  
// a == ((a ^ b)^a)
// ^ 按位异或 
// 1.   a ^ b = (a & ~b) | ( ~a & b) 
//		二进制加法但不进位 (1 + 1 = 0)
// 结合律 --->
// 交换律
// 封闭性 
// 单位元 0 a ^ 0 = a
// 逆元 a ^ a = 0

// 2 .find the number of binary integral in the form of complement
//int IntPow(int a, int b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//	if (b == 1)
//	{
//		return a;
//	}
//	else
//	{
//		return a * IntPow(a, b - 1);
//	}
//}
//int CountOne(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int b = IntPow(2 , i) & a;
//		if (b == IntPow(2,i))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", CountOne(114514));
//	return 0;
//}
//----------------------4.赋值操作符(assignment operater) 
//1. =
//int main()
//{
//	int a = 3;//initialize
//	int b = 0;
//	b = 20;// assignment
//	int c = 5;
//	a = b = c + 1;// b = c + 1  a = b  a == b == c+1 == 6 
//	return 0;
//}
//2. 复合赋值符(compound assignment operater)
// +=  -=  *=   /=  %=  >>=  <<=  &=  |=   ^=	 ; a (x)= b ----> a = a (x) b 
//--------------------5.单目操作符-----------(+ 双目操作符 有两个操作数，单目操作符只有一个操作数)
//! + - & sizeof  ~ --  ++  *
	//! !True == False  !False == Ture (0 False; !0 Ture)
//int main()
//{
//	int a = (5 == 6);
//	if (a)
//	{
//		printf("hehe");
//	}
//	if (!a)
//	{
//		printf("xixi");
//	}
//}
	// + - &
//int main()
//{
//	int a = +10;
//	int b = -a;
//	printf("%p\n",&a );//%p(position) the position of the first bit (first)
//	int* p = &a;// pointer variable
//	return 0;
//}
	// sizeof(calculate the size of types or variables in bytes)
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[5] = { 0 };
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(p));  //(8 if ×64) 4if ×86
//	printf("%d\n", sizeof(arr));//20
//	printf("%d\n", sizeof a);// it can work,proving that sizeof is operator instead of function like strlen
//	//printf("%d\n",sizeof in) //directly follow variables rather than types
//	return 0;
//}
// ~  (~3) = -4 所有位置包括符号位也会取反
//int main()
//{
//	int a = 13;
//	int b = 13;
//	int c = 13;
//
//	//complement 00000000000000000000000000001101 alter to 00000000000000000000000000011111
//	a += (pow(2, 1)+pow(2,4));
//	b ^= (1 << 4) + (1 << 1);
//	c |= (1 << 4) + (1 << 1);
//	printf("%d\n", a);
//	printf("%d\n", b); 
//	printf("%d\n", c);
//	// restore 
//	a -= (pow(2, 1) + pow(2, 4));
//	b ^= (1 << 4) + (1 << 1);
//	c &= ~((1<<4)|(1<<1));
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

// -- ++ preposition ++a first++ last use   postpositon a++ first use  last use 
//int main()
//{
//	int a = 3;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
// 解引用操作符 *
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;  //(*p) == a ;
//	printf("%d\n", a);
//	return 0;
//}
//  (type alter)
//int main()
//{
//	int a = (int) 3.14;// 3.14 default double ;3.14f change into float
//	double b = (double)a;
//	printf("%d\n", a);
//	printf("%lf\n", b);
//	srand((unsigned int) time(NULL));
//	return 0;
//}
//-----------------------6.关系操作符----------------
// > >= < <= != == 
// float and double do exist some limitaions

// "abx" == "abc"  compare the location of the first character
// to compare two strings utilize strcmp
//----------------------7.逻辑操作符-----------------
// && and        || or  only pay attention to the True or False
//int main()
//{
	//int a = 1;
	//int b = 2;
	//int c = (a && b);// 1 True 2 True T&&T == T(namely 1)
	//int d = 1 && 0;
	//printf("%d\n", c);//1
	//printf("%d\n", d);//0
	//printf("%d\n", 114514||0);//1
	//printf("%d\n", 0||0);//0
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && b++ && ++c ;// a++ a== 1 ; i == 0 i在第一个&&处停下来了 
	//printf("%d %d %d %d", a, b, c, d); // 1 2 3 4
	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && b++ && ++c;// 
	//printf("%d %d %d %d", a, b, c, d); //2 3 4 4 
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ || b++ || ++c;//在第二个||中停下来    
	//printf("%d %d %d %d", a, b, c, d); //1 3 3 4 
	//summary :when deciding the outcome ,we stop before the next operator;&& stop when false ||stop when true
	//return 0;
//}
//--------------------8.条件操作符 三目操作符   exp1 ? exp2 : exp3  exp1True --------> exp2| exp1False -------->exp3
//int main()
//{
	//int a = 0, b = 0;//2 kind of versions
	//(a > 5) ? (b = 3) : (b = -3);
	//b = (a > 5 ? 3 : -3);
	//int max = (a > b ? a : b);
	//return 0;
//}
//---------------------------GOD 9.逗号表达式 comma shit 
// expressions comprised of some commas which operate from left to right:the outcome is the last outcome
//int main()
//{
//	int a = get_val();
//	count_val(a);
//	if (a > 0)
//	{
//		count_val(a);
//		int a = get_val();
//	}
//	if ( a = ger_val(), count_val(a), a > 0)
//	{
//
//	}
//	return 0;
//}
// ---------------------10. 下标引用 函数调用 和结构成员
//		one. []下标引用
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;//can operate
//	// arr[7] --->*(arr+7) arr the location of the first element ;arr+7 the location of eighth elemnet.
//	// arr[7] ---> *(arr+7)  7[arr] ---> *(7+arr)
//	7[arr] = 9;//can operate initialising can not work, but visiting can;
//	return 0;
//}
//		two. ()函数调用操作符 function_invoking operator 操作数 function_name and varibles
//		three.结构成员访问操作符 .结构体对象.成员名 | -> 结构体指针->成员名  p -> name == (*p).name
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct Stu* ps)
//{
//	strcpy((*ps).name, "ldh");// simplified strcpy( ps -> name,"lsh")
//	(*ps).age = 17;//ps-> age = 17;
//	(*ps).score = 114514;//ps -> score 114514
//}
//void print_stu(struct Stu* ps)
//{
//	printf("%s %d %f \n",ps ->name, ps ->age,ps ->score );//more efficient than ss.name 
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(&s);
//	return 0;
//}
// point 2.---------------表达式求值---------------操作符优先级和结合性决定 (proprsed to search online)
// priority(* > +) and combination(N/A no | L-R from left to right | R - L | )
//------------1.隐式类型转换（有些表达式的操作符在求值时可能要转换成其他类型）
	//整型提升 short and char --> int ---> short and char to get the standard accuracy
//int main()
//{
//	//整型提升是按照变量数据类型的符号位来提升的
//	char a = -1;
//	// 补码11111111111111111111111111111111
//	// a  -- 11111111(only 8 bits)
//	//       第一位是符号位 如果符号位是1，前面补1 ;如果是0 前面补0 
//	char b = 5;
//	// 00000000000000000000000000000101
//	// b 00000101
//	char c = 126;
//	// 00000000000000000000000001111110
//	// c 01111110
//	char d = b + c;
//	// 00000000000000000000000010000011
//	// char 存储的是补码
//	// ASCII 0~~127   char -> -128~~127 补码为10000000为-120
//	// 11111111
//	// d 11111101 -125 
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	unsigned char a = 0xb6;//(unsignd 高位补0)// 0x表示16进制
//	short b = 0xb600;
//	int c = 0xb6000;
//	if (a == 0xb6)// b -> 11
//		printf("a");
//	if (b == 0xb0)
//		printf("b");
//	if (c == 0xb6000)
//		printf("c");//outcome ac
//	return 0;
//}
//int main()
//{
//	char c = 0;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}
	//    2.算术转换
	//  寻常算数转换int | unsigned int | long int | unsigned long int | float | double | long double|
// from left to right switch(size enchaces) eg: int + double ,switch int to double to calculate
//--------------------------------------------- 操作符的属性 优先级&&结合性&&控制顺序
// priority ()括号 max 算术操作符 关系操作符 位操作符 赋值操作符
//           comma exp -> min
// combination  相邻操作符的优先级相同 取决于结合性N/R L-R R-L
// dominate order && 左边为假右边不算; || 左边为真右边不算; ?: exp1 T or F; , from left to right
//              一些问题表达式 
//  1.a*b + c*d + e*f 路径不同    m + n + e*f  (left +)  >  (right +)   *  >  (right +)
//  1  3  2  5  4   
//  1  4  2  5  3 需要有惟一计算路径
// 2.c + --c
// the first c is c itself or (c-1)  ? ? ?
//int main()
//{
//	int c = 1;
//	printf("%d\n", c + --c);//0
//	return 0;
//}
// simplify the code   说人话
// 3.int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("%d\n", i);// numpy ???????????????????????
//	return 0;
//}
//4.
//int fun()
//{
//	static int count = 1;
//	count++;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();//we cna only determine that first * second + but ont which fun is first deployed
//	printf("%d\n", answer);
//	return 0;
//}
// 5 .
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b); // MSVs12 linux 10
//	return 0;
//}








