//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
// 结构体的定义 结构体是一些值的集合，这些值被称为成员变量（可以是不同类型）
// 数组是一种相同类型的集合
// ----------------------1.结构体类型的声明     
//struct tag
//{
//	menber_list;
//}variable_list(can be neglected);
//struct People
//{
//	char name[20];
//	char tele[20];
//	char sex[10];//一个汉字占2个字符;
//	int height;
//};//p1 , p2;//p1 p2是使用结构体类型创造的变量
//
//int main()
//{
//	struct People p1 = { 0 };// 结构体类型的创建
//	return 0;
//}
//--------------------2.结构体变量的创建和初始化(不完全初始化)
// 结构体的成员可以是标量，指针，指针，其他结构体 
//struct People
//{
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int height;
//}p1,p2;
//struct People p3,p4;//p1 p2 p3 p4 为全局变量
//struct st 
//{
//	struct People p;
//	int num;
//	float f;
//};
//void printP(struct People* p)
//{
//	printf("%s %s %s %d", p->name, p->tele, p->sex, p->height);
//}
//int main()
//{
//	struct People p5 = {"saber", "114514","quan",618};//p5 -> local variable
//	struct People p6 = { 0 };
//	struct People p7 = { NULL };
//	struct st s = { { "saber", "114514", "privacy",618 }, 31415926,0.5772 };
//	printf("%s %s %s %d\n", p5.name, p5.tele, p5.sex, p5.height);//结构体变量.成员  结构体指针->成员
//	printf("%s %s %s %d\n", s.p.name, s.p.tele, s.p.sex, s.num);
//	printP(&p5);
//	return 0;
//}
//struct People
//{
//	char name[20];
//	char tele[20];
//	char sex[20];
//	int height;
//};
//int main()
//{
//	struct People p = { "saber",NULL,"superposition",0x314aaa};
//	printf("%s %s %s %d", p.name, p.tele, p.sex, p.height);
//	return 0;
//}
// ----------------------3.结构体的传参 对象或者地址 一般传地址
//函数传参时 参数会压栈








