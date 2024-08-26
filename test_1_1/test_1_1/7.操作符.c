//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//基本操作符 + - * / %  | / 若除数和被除数都为整除 则为整除 9/2 = 4. 如二者有一个浮点数 则后为浮点数 9/2.0 = 4.5 | % mode 9%2 = 1 
//移位操作符>> <<
//位操作符 & ^ |
//赋值操作符 = += -= *= /= %= &= ^= |= >>= <<=
//单目操作符只有一个操作数的操作符 ----- 双目操作符| 5 + 6 | 6 -7 | 
//             |！逻辑反操作 | - 负值 | + 正值(seems to have no meaning) | & 取地址 | sizeof 操作数的类型长度 以字节为单位 
//             | ~ 对二进制取反 | ++ 1.后置++ 先赋值 后加1 2.前置++ 先加1 后赋值 |-- 同理 | *间接回访操作符  
//             | (int) (float) (double) 类型强制性转换 int a = (int) 3.99;outcome 3
//关系操作符 < > >= <= == !=  
//逻辑操作符 &&逻辑与 ||逻辑或
//条件操作符(三目操作符) exp1 ? exp2 : exp3 有三个操作数 if exp1 TRUE --->2 if exp1 FALSE --->3 .打小括号     enhance readability 
//逗号表达式 exp1 , exp2 , .... expn commas separate a series of formulas,from left to right operate orderly. so dose it
//           整个表达式的结果是最后一个表达式的结果
//下标引用 函数调用 结构成员 respctively [] () . ->|[]内部可以是变量 | ()函数调用时括号不能被删除 . ->

//float Max(float a , float b)
//{
//	float r = (a > b ?  a : b);
//	return r;
//}

//int main()
//{
	//float a = 7 / 2.0;//for % if any float --->wrong
	//printf("%f\n", a);//除号两端是整数时，整除| 若有一个浮点数，就执行一个浮点数
	//int a = 0; //初始化
	//a = 5; //赋值
	// number 0 is False else is True
	//int a = 0;
	//scanf("%d", &a);
	//if (!a)
	//{
	//	printf("T");
	//}
	//else
	//{
	//	printf("F");
	//}
	//int a = 0;
	//printf("%d\n", sizeof(int));//right
	//printf("%d\n", sizeof a);//right
	//printf("%d\n", sizeof int);//wrong
	//int arr1[10];
	//printf("%d\n", sizeof(arr1));
	//char arr2[] = "hello";
	//printf("%d\n", sizeof(arr2));//outcome 6
	//char arr3[] = {'a','b','c'};
	//char arr4[5] = {'a','b','c'};
	//printf("%d\n", sizeof(arr3));//outcome 3
	//printf("%d\n", strlen(arr3));//outcome unsure
	//printf("%d\n", sizeof(arr4));//outcome 5
	//printf("%d\n", strlen(arr4));//outcome 3
	//int a = 10;
	//int b = ++a;
	//printf("%d\n", a);
	//printf("%d\n", b);
	//int a = (int)3.99;
	//printf("%d\n", a);
	//int a = 1;
	//int b = 2;
	//if (a == 1 || b == 1)
	//{
	//	printf("hh");
	//}
	//printf("%f\n", Max(1.5, 1.9));
	/*int a = 10;
	int b = NULL;
	int c = 0;
	int d = (c = a + b, a = c - b, a + b + c);
	printf("%d\n", d);*/
	//定义数组时arr[x] x 不可为变量 只可为常量