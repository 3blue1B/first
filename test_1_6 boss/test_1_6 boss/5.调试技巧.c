//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
// bug   
// Debug(调试) 它包含调试信息并且不做任何优化，便于程序员调试程序
// Release(发布) 往往是进行了各种优化 
// windows环境的调试技巧
//int f(int x)
//{
//	return x * 2;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		//scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	int x = f(arr[1]);
//	return 0;
//}
//快捷键
// f5 启动调试 跳到逻辑上的下一个断点处(也可以是它本身如循环语句)
//    也可以设置条件断点右键红点
// f9 创建和取消断点 断点可在任意位置设置
// f10 逐过程 通常处理一个过程，一个过程可能是函数调用或者一条语句
// f11 逐语句每次执行一个语句，会进入函数内部(在release中还会进入库函数)
// ctrl + f5  开始执行不调试
// fn辅助功能键 
//void test(int dream[])
//{
////	监视中 dream,4 可以连续看见4个元素 dream,10可以连续看见10个元素
//
//}
//void test2();
//void test3()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2();
//}
//void test2()
//{
//	test3();
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int c = Add(a, b);
//	int arr[10] = { 1,2,5,6,8,3,9,4,0 };
//	char str[] = "abcdef";
//	test1();
//	test(arr);
//	return 0;
//}
//调试结束后才能在窗口中看到监视和内存
// 内存里面的数据 以16进制显示 2个为1字节
// 调用堆栈 ：数据结构里面的栈
//	压栈 放元素 出栈 删元素
// 查看汇编代码
// 查看寄存器相关的信息
// 多多动手
// eg1
//求n的阶乘之和 找出错误的原因
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//  int mul = 1;
//	for (i = 1; i <= n; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			mul *= j;
//		}
//		count += mul;
//	}
//	printf("%d\n", count);
//	return 0;
//}
// eg2
// 研究程序陷入死循环的原因
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//局部数据放在内存的栈区 栈区内存使用习惯高地址向低地址延伸
// 数组随着下标的增长，地址是由低到高变化的
// arr越界访问可能会遇到i
// 如何写出好代码
//	1.运行正常
//	2.bug少
//  3.效率高
//  4.可读性高
//  5.可维护性高
//  6.注释清晰
//  7.文档齐全
// coding strategies
// 1. 使用assert
// 2.使用 const
// 3. 加注释
// eg1: strcpy

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)// 表达式的结果是*dest的ASCII
//	{
//		;//;空语句
//	}
//}
//char* my_strcpy(char* dest, const char* src)// const can avoid scr being changed
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20]="xxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	//strcpy(arr1, arr2);// char* strcpy(char* strDestination,const char* strSource) 
//  //return destination'first location char* 链式访问
//	// strcpy copies \n to another array
//	printf("%s", my_strcpy(arr1, arr2));
//	//printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	//num = 20; wrong because constant
//	//int* p = &num;
//	//*p = 20;
//	//printf("%d\n", num);//hhh break the constant
//	const int* p = &num;
//	//*p = 20; wrong
//	// const修饰指针变量,
//	//	const放在*左边
//	//		const int*  ||  int const*    修饰的*p  意思是p指向的对象不可以通过p来改变
//	//	const放在*右边
//	//      int* const p   p本身不可以改变
//	return 0;
//}
// 实行string_len
//int stringlen(const char* p)
//{
//	assert(p);//assert(p != NULL) is equal to assert(p) p == NULL -> return 0;
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "wdxwsevcw";
//	printf("%d\n", stringlen(arr));
//	return 0;
//}//assert in release is optiamlized /也就是没有了(

// 编程常见的错误
//  1.编译型错误（语法错误）  ->scanf("%d",d)
//  2.链接型错误 （出现在链接期间,找不到符号）程序 -> 编译 ->链接 ->执行        
//  3.运行时错误(调试时解决错误)  积累排错经验

//int main()
//{
//	int a = 0;
//	int b = 10;
//	//int c = Add(a, b);//无法解析外部函数  链接错误（区分大小写）
//	// ctrl + f 搜索
//	return 0;
//}

