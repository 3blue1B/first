#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
//������

//  ������������������1.����������------------------------
// + - * / %    
// highlights:int division /(����)  double division /(С������) 5/2 -- >2 | 5.0/2 --> 2.5| 5/2.0 --> 2.5|
// % --> int % int  ���߱���������

// ----------------2.��λ������(binary)----------------------
// �ƶ����Ƕ�����λ << ���Ʋ����� | >>���Ʋ�����

//int main()
//{

	//�����Ķ����Ʊ�ʾ��3�� 
	//ԭ��
	//����
	//����

	//��������ԭ�� ���� ���� ��ͬ
	//��������ԭ�� ���� ���� Ҫ����
	//int a = 7;
				// ������
				// ԭ/��/�� �� 00000000000000000000000000000111  ���λ��0��ʾ���������λ��1��ʾ�为��int 4bytes 32bits 
	//int a = -7
				//������ 
				// ԭ�� 10000000000000000000000000000111
				// ���� 11111111111111111111111111111000 ԭ��ķ���λ���䣬����λ��λȡ�����Ƿ���
				// ���� 11111111111111111111111111111001 �����1���ǲ��벻�������� ���һλ0��Ϊ1 ���һλ1���һ
				//or �����ֵȡ����һ
				// 0 ԭ/��/�� ��00000000000000000000000000000000
	// �������ڴ��д洢���ǲ���
	//int a = 7;
	//int b = a<<1;//b = 14 00000000000000000000000000001110 left discard | right supplement 0
	// a unchange | b change
	//int a = 0;
	//scanf("%d", &a);//-7
	//int b = a << 1; //����11111111111111111111111111110010 ���� 11111111111111111111111111110001
	////ԭ�� 00000000000000000000000000001110 -14 ���������г�2���ص�//���ƺ�����ֻ��������
	//printf("%d\n", b);
	//    ���Ʋ�����
	//  ������λ
//	int a = -7;
//	int b = a >> 1;
//	printf("%d\n", a);//a unchange
//	printf("%d\n", b);
//	//right discard | ��߲���ԭ����λ
//	// �߼���λ right discard | left supplement 0
//	//һ����õ���������
//	return 0;
//}
//-----------3.λ������-------
// &  ��λ�루������λ��
// |  ��λ�򣨶�����λ��
// ^  ��λ��򣨶�����λ��
// ~  ��λ�� 1 ---> 0 ; 0 ---> 1
//int main()
//{
//	//int a = 3;
//	//int b = -5;
//	//int c = a & b;
//	//// a 00000000000000000000000000000011
//	//// b 11111111111111111111111111111011
//	////���������0��Ϊ0  ���������Ϊ1��Ϊ1  c������ǲ��뵫%d��ʾһ���з��ŵ�����
//	//printf("%d\n", c);//3
//	//int a = 3;
//	//int b = -5;
//	//int c = a | b;
//	//// a 00000000000000000000000000000011
//	//// b 11111111111111111111111111111011
//	//// c 11111111111111111111111111111011
// // // ԭ��10000000000000000000000000000101 
//	////������һ��1��Ϊ1 ������Ϊ0��Ϊ0
//	//printf("%d\n", c);//-5
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	// a 00000000000000000000000000000011
//	// b 11111111111111111111111111111011
//	// c 11111111111111111111111111111000
//  // ԭ��10000000000000000000000000001000 
//	//��ͬΪ0    ����Ϊ1
//	printf("%d\n", c);//-8
//	return 0;
//}
// practical applications --->��������ʱ����ʵ���������Ľ���
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
// b == ((a ^ b)^b) == (a ^ (b ^ b))��  
// a == ((a ^ b)^a)
// ^ ��λ��� 
// 1.   a ^ b = (a & ~b) | ( ~a & b) 
//		�����Ƽӷ�������λ (1 + 1 = 0)
// ����� --->
// ������
// ����� 
// ��λԪ 0 a ^ 0 = a
// ��Ԫ a ^ a = 0

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
//----------------------4.��ֵ������(assignment operater) 
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
//2. ���ϸ�ֵ��(compound assignment operater)
// +=  -=  *=   /=  %=  >>=  <<=  &=  |=   ^=	 ; a (x)= b ----> a = a (x) b 
//--------------------5.��Ŀ������-----------(+ ˫Ŀ������ ����������������Ŀ������ֻ��һ��������)
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
//	printf("%d\n", sizeof(p));  //(8 if ��64) 4if ��86
//	printf("%d\n", sizeof(arr));//20
//	printf("%d\n", sizeof a);// it can work,proving that sizeof is operator instead of function like strlen
//	//printf("%d\n",sizeof in) //directly follow variables rather than types
//	return 0;
//}
// ~  (~3) = -4 ����λ�ð�������λҲ��ȡ��
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
// �����ò����� *
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
//-----------------------6.��ϵ������----------------
// > >= < <= != == 
// float and double do exist some limitaions

// "abx" == "abc"  compare the location of the first character
// to compare two strings utilize strcmp
//----------------------7.�߼�������-----------------
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
	//i = a++ && b++ && ++c ;// a++ a== 1 ; i == 0 i�ڵ�һ��&&��ͣ������ 
	//printf("%d %d %d %d", a, b, c, d); // 1 2 3 4
	//int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && b++ && ++c;// 
	//printf("%d %d %d %d", a, b, c, d); //2 3 4 4 
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ || b++ || ++c;//�ڵڶ���||��ͣ����    
	//printf("%d %d %d %d", a, b, c, d); //1 3 3 4 
	//summary :when deciding the outcome ,we stop before the next operator;&& stop when false ||stop when true
	//return 0;
//}
//--------------------8.���������� ��Ŀ������   exp1 ? exp2 : exp3  exp1True --------> exp2| exp1False -------->exp3
//int main()
//{
	//int a = 0, b = 0;//2 kind of versions
	//(a > 5) ? (b = 3) : (b = -3);
	//b = (a > 5 ? 3 : -3);
	//int max = (a > b ? a : b);
	//return 0;
//}
//---------------------------GOD 9.���ű��ʽ comma shit 
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
// ---------------------10. �±����� �������� �ͽṹ��Ա
//		one. []�±�����
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;//can operate
//	// arr[7] --->*(arr+7) arr the location of the first element ;arr+7 the location of eighth elemnet.
//	// arr[7] ---> *(arr+7)  7[arr] ---> *(7+arr)
//	7[arr] = 9;//can operate initialising can not work, but visiting can;
//	return 0;
//}
//		two. ()�������ò����� function_invoking operator ������ function_name and varibles
//		three.�ṹ��Ա���ʲ����� .�ṹ�����.��Ա�� | -> �ṹ��ָ��->��Ա��  p -> name == (*p).name
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
// point 2.---------------���ʽ��ֵ---------------���������ȼ��ͽ���Ծ��� (proprsed to search online)
// priority(* > +) and combination(N/A no | L-R from left to right | R - L | )
//------------1.��ʽ����ת������Щ���ʽ�Ĳ���������ֵʱ����Ҫת�����������ͣ�
	//�������� short and char --> int ---> short and char to get the standard accuracy
//int main()
//{
//	//���������ǰ��ձ����������͵ķ���λ��������
//	char a = -1;
//	// ����11111111111111111111111111111111
//	// a  -- 11111111(only 8 bits)
//	//       ��һλ�Ƿ���λ �������λ��1��ǰ�油1 ;�����0 ǰ�油0 
//	char b = 5;
//	// 00000000000000000000000000000101
//	// b 00000101
//	char c = 126;
//	// 00000000000000000000000001111110
//	// c 01111110
//	char d = b + c;
//	// 00000000000000000000000010000011
//	// char �洢���ǲ���
//	// ASCII 0~~127   char -> -128~~127 ����Ϊ10000000Ϊ-120
//	// 11111111
//	// d 11111101 -125 
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	unsigned char a = 0xb6;//(unsignd ��λ��0)// 0x��ʾ16����
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
	//    2.����ת��
	//  Ѱ������ת��int | unsigned int | long int | unsigned long int | float | double | long double|
// from left to right switch(size enchaces) eg: int + double ,switch int to double to calculate
//--------------------------------------------- ������������ ���ȼ�&&�����&&����˳��
// priority ()���� max ���������� ��ϵ������ λ������ ��ֵ������
//           comma exp -> min
// combination  ���ڲ����������ȼ���ͬ ȡ���ڽ����N/R L-R R-L
// dominate order && ���Ϊ���ұ߲���; || ���Ϊ���ұ߲���; ?: exp1 T or F; , from left to right
//              һЩ������ʽ 
//  1.a*b + c*d + e*f ·����ͬ    m + n + e*f  (left +)  >  (right +)   *  >  (right +)
//  1  3  2  5  4   
//  1  4  2  5  3 ��Ҫ��Ωһ����·��
// 2.c + --c
// the first c is c itself or (c-1)  ? ? ?
//int main()
//{
//	int c = 1;
//	printf("%d\n", c + --c);//0
//	return 0;
//}
// simplify the code   ˵�˻�
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








