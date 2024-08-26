// 13.指针
// 13.1 内存 计算机的程序运行都在内存
// 把内存分为一个个小的内存单元 每个内存单元的大小是一字节
// 为了能够有效访问到内存的每个单元 就给内存进行了编号 这些编号被称为该内存单位的地址
//}   //地址也被视为指针
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%p\n", a); // %p 取p的地址 为16进制  地址不能随便改动
//	int * p =&a; 
//	//存放指针的变量 就是指针变量 p为指针变量  int 点名p的类型 *说明p是指针变量
//	// *p 解引用操作符 通过p中存放的地址 找到p所指的对象 *p就是p所指向的对象 & * 为单目操作符 互为逆元
//	printf("%p\n", p);
//	if (*p == 10)
//	{
//		printf("True");
//	}
//	return 0;
//}
//-------------指针变量的大小 ------------
//int main()
//{
//	printf("%zu\n", sizeof(char *));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float *));
//	printf("%zu\n", sizeof(long *));
//	printf("%zu\n", sizeof(short *));
//	// outcomes are all 8
//	//指针变量的大小取决于一个地址存放时需要多大空间
//	// ×64 64位机器上的地址 要64个比特位 namely 8 bytes(32位×86 ----> 4) 
//	return 0;
//}
// ------------结构体---------------------
// C语言给了自定义类型的权力 结构体把一些单一类型组合在一起 

//struct Stu
//{
//	char name[20];//结构体的成员
//	int age;
//	char sex[10];
//	char tele[12];
//};//;不可丢
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name , (*ps).age , (*ps).sex , (*ps).tele);//()is a must
//	printf("%s %d %s %s\n", ps->name , ps->age , ps->sex , ps->tele); // 结构体的指针变量 -> 成员名 
//}
//
//int main()
//{
//	struct Stu s = { "ldh",17,"man","114514" };
//	
//	printf("%s %d %s %s.\n",s.name ,s.age , s.sex, s.tele);//结构体对象.成员名
//	print(&s);
//	return 0;
//}
