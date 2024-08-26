// ==---------------------C introduction----------------
// printf函数是一个库函数
//main 主函数 是程序的入口 only one 有且只有一个 
//#define _CRT_SECURE_NO_WARNINGS //一定写在第一行 C RUN TIME SECURE NO WARNINGS
//#include <stdio.h>//standard input output
//运行代码ctrl + f5
// fn + f1 代表f1的原来的意思
//int main()
//{
//	printf("he\nhe");
//	return 0; // 运行成功0 运行不成功为非0 
//}
// ----------------------------------------------------数据类型-----------------------------
// 字符类型 char 字符数据类型 short 短整型 int 整型 long 长整型 long long 更长的整形 float 单精度浮点数 double 双精度浮点型
//int main()
//{
//	printf("%zu\n", sizeof(char));// 1 %d标准的整型      %zus size_t的整型单位是字节 
//	printf("%zu\n", sizeof(short));//2
//	printf("%zu\n", sizeof(int));//4
//	printf("%zu\n", sizeof(long));//4
//	printf("%zu\n", sizeof(long long));//8
//	printf("%zu\n", sizeof(float));//4
//	printf("%zu\n", sizeof(double));//8
//	return 0;
// }
 //计算机的单位  bit 比特位 
// byte 字节
// kb = 1000byte
// mb
// jb
// tb
// pb  二进制中只有0 1 存储一个空间 （存储一个0或1的大小）为一个bit
//		8*bit (8*rome) == 1 byte   1kb ==1024byte 1mb ==1024kb 1jb =1024mb 1tb ==1024jb 1pb ==1024jb
// 
//int main()
//{
//	int age = 20;//向内存申请一定的空间存储信息
//	float price = 66.6;
//	return 0;
//}
// -------变量与常量--------局部变量(inside function) 全局变量(inside function) 
// 当二者相同时 局部变量优先 一个函数中不可有两个相同的局部变量
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//int main()
//{//scanf() ---. input
//	int num1 = 0;//初始化变量 
//	int num2 = 0;
//	scanf("%d%d", &num1,&num2);//%d是格式整数  &表示位置 将变量以某格式存入某位置
//	int sum = num1 + num2;// scanf是VS自己提供的函数 不是standard c provide
//	printf("%d\n", sum);
//
//	return 0;
//}
// -----------------------------变量的作用域(哪里可以使用）和生命周期-------------------
// 局部变量的作用域 所在最近的上括号  全局变量 整个项目
//声明来自外部的语法 "extern" int a
//extern int a;
//void test()
//{
//	printf("test-->%d\n", a);
//
//}
//int main()
//{
//	test();
//	{
//		
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}
// 生命周期  局部变量enter 作用域开始 out 作用域结束 //全局变量生命周期约是程序的生命周期
//int main()
//{
//	{//embark on a life cycle 
//		int a = 0;
//	}// end
//
//	return 0;
//}
