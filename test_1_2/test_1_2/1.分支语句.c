//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//分支 if switch
//循环 while for do while
// goto 
//语句 表达式语句 函数调用语句 控制语句(分支,循环) 复合语句 空语句
//控制语句控制的执行流程 以实现程序的各种结构方式 C有9中
//	条件判断语句/分支语句 if switch 
//	循环执行语句 do while  while for
//	转向语句 break goto continue return
//-----------------------分支语句------------------- if and switch
//int main()
//{
//	int a = 0; 
//	scanf("%d", &a);
//	if (18 < a && a < 32)  // 不可写为18<a<32 代码先运行 18<a| false outcome 0 else ->not 0|and judge outcome <32  
//		printf("adult\n");
//	else if (a < 18 || a>99)
//	{
//		printf("aa\n");
//		printf("hh\n");//多个代码要用大括号 namely 代码块
//	}
//	else
//		printf("mediocrity");
//	return 0;
//}
// -----------悬空else  else 与离它最近的if匹配
//int main()
//{
//	int a = 0;                                                  
//	int b = 1;													
//	if (a == 0)													
//		if (b == 0)														
//			printf("aa\n");												
//	else																				
//		printf("gg\n");//outcome gg												
//
//	return 0;
//}
//but if{if} else 则else 与 第一个if 匹配
// 规范 1.变量的命名（有意义 规范） 2.空格 空行 换行
// if 书写风格的对比
//if(condition)
// {returnx;} 
// return y;  条件满足返回x否则返回y but bad readability
//if (5 == num) better   forget = |num = 5 bug| 5 = num can be discovered 
//int main()
//{
//	int a = 1;
//	if (a = 0) // 0 false on hh |not 0 true hh
//	{
//		printf("hh\n");
//	}
//	printf("%d\n,a");//outcome pretty peculiar
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (0 == a % 2)
//	{
//		printf("even");
//	}
//	else
//	{
//		printf("odd");
//	}
//	return 0;
//}
//count = 1;
//int main()
//{
//	while (count <= 100)
//	{
//		if (count % 2 == 1)
//			printf("%d ", count);
//		count++;
//	}
//	return 0;
//}
//------------switch 常用于分支语句//
// switch (int exp)//must int
//{
//	case int exp n(constant): 也可以是字符 转为了ASCII值 也为整型
//		operation;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
////	case 1:
////		printf("day1");
////		break;
////	case 2:
////		printf("day2");
//// 		break;
////	case 3:
////		printf("day3");
//// 		break;
////	case 4:
////		printf("day4");
////	    break;
////   case 5:
////		printf("day5");
//// 		break;
////	case 6:
////		printf("day6");
////	case 7:
////		printf("day7");
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekdays");// use break number decides beginning but not ending ,break determinates the ending
//		break;
//	case 6:
//	case 7:
//		printf("weekends");
//		break;
//	default://其他数值默认位choose wrong
//		printf("choose wrong");
//		break;//加default break
//	}
//	return 0; 
//}










