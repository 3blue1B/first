//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// variables can not name after key words
// 2.they are built-in and can not be created by we users
	// 1.auto 所有局部变量自动(auto)创建 自动(auto)销毁 
//int main()
//{
//	auto int a = 10;//auto can be ignored
//	return 0;
//}
	// 2.char int short long |long long| float double 
	// 3.for while |do while| do break continue
	// 4.register (寄存器) static (静态的)
	// 5.extern
	// 6.switch case default if else
	// 7.enum(枚举) struct(结构体) union(联合体)
	// 8.go to
	// 9.const
	// 10.return 
	// 11.size of(计算大小) signed(有符号的) unsigned(无符号的) typedef(类型重命名) void(空 函数的返回类型 函数的参数)
	// 12.---------volatile-----------
// the naming of variables 1.have meaning 2.characters numbers and '_' comprise the name but numbers can not be at head
// 3. can not be key words
//--------------------typedef------------------- 
//typedef unsigned int uint; unsigned int == uint 
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node; struct Node == Node
//int main()
//{
//	uint a = 0;
//	unsigned int b = 1;
//	struct Node n;
//	Node m;
//	return 0;
//}
//---------------static-----------1.修饰局部变量 --静态局部变量 2.修饰全局变量 3.修饰函数 
	//static 修饰局部变量的时候，局部变量出了作用于不销毁 本质上 static修饰局部变量的时候 改变了变量的存储位置
	// static 影响了变量的生命周期 使其和程序的生命周期一样
	// 内存 栈区（局部变量等） 堆区(动态内存管理)  静态区（被static修饰后的静态变量:程序结束时才销毁）
//
//void test()//void: general return but void means no return
//{
//	static int a = 1;//static int a 没有执行代码  a都是上一次的的a the location of a does not change
//	// if int a = 1; outcome  2 2 ....2   if static int a = 1 outcome 2 3 4 5 6 7 8 9
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
// {
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//} 
//	static 修饰全局变量
//	extern 外部符号 声明后可以使用 but 外部符号为 static ... = ... 则extern后不可使用 但局部变量前加上static后也不能解析
//	全局变量是有链接属性的 编译+链接 -->可执行程序 而加上static后全局变量的外部链接属性变为//内部链接接属性 其他源文件（.c）就不能
//在使用到全局变量	,作用域变小了，也储存在静态区 全局变量也在静态区
										//static 修饰函数		
															
//extern int Add(int x, int y); static 也可将外部链接属性的函数 变为内部链接属性的函数
//register 电脑上的存储设备 硬盘 内存 缓存(cache) 寄存器（集成到CPU上）
//                       -------------------------------->  more speedy less spacious more costly 
//int main()
//{
//	register int a = 3;//‘建议’3放在寄存器中 but is determined 编译器 
//	return 0;
//
//}
// .h头文件 ---> 函数的声明 类型的声明 头文件的包含
// ,c源文件----》函数的实现
// 1.define 不是关键字 是预处理指令






