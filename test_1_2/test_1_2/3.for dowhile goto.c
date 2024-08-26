//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
// ----------for-----------
//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		++i;//调整
//	}
//	return 0;
//}
//for(exp1;exp2;exp3)//1 initialize 2 judge 2 adjust
	//循环语句
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{	
//		printf("%d ", i);
//	}
//	return 0;
//}
//不可在for 循环内修改循环变量 否则for循环
//建议for循环的循环变量采用前闭后开的写法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//推荐i<10 不推荐i<=9
//	}
//	return 0;
//}
// for循环的变种
//int main()//for循环的判断省略意味着判断恒成立 三者都可省略 建议不要随意省略
//{
	// 99乘法表 正常初始化
	//int i = 1;
	//int j = 1;
	//for (i = 1;i<10;i++) 
	//{
	//	for (j = 1; j <=i; j++)
	//	{
	//		int multiple = i * j;
	//		printf("%d*%d=%d ", i, j, multiple);
	//	}
	//	printf("\n");
	//}
	// 不正常初始化
//	int i = 1;
//	int j = 1;
//	for (; i < 10; i++)
//	{
//		for (; j <= i; j++)
//		{
//			int multiple = i * j;
//			printf("%d*%d=%d ", i, j, multiple);
//		}
//		printf("\n");
//	}
//C99语法中才支持for(int i = 1;i<10;i++)| C++支持这种写法
//for循环多个变量控制
//	int x = 0;
//	int y = 0;
//	for (x = 1, y = 1; x < 10&&y <= x; x++, y++)
//	{
//		printf("%d*%d\n", x, y);
//	}
	//return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	//for (a = 0, b = 0; a = 0; a++, b++)//0次 a==0 0-->false 0次 
//	//for (a = 0, b = 0; a = 1; a++, b++)//无数次 a!=0 !0-->True 死循环
//		printf("he\n");
//	return 0;
//}
// ----------do while循环-----------循环体至少执行一次
// do
//	循环语句；
//while(表达式)；//至少循环一次
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} while (i <=10);
//	return 0;
//}//1234 死循环
// practice

//int main()
//{
	//// 1 calculate 1!+2!+3!........+n!
	//int sum = 0;
	//int mul = 1;
	//int i = 1;
	//int j = 0;
	//int q = 0;
	//scanf("%d", &q);
	//for (i=1; i <=q; i++)
	//{
	//	for (mul = 1,j = i; j >= 1; j--)
	//	{
	//		mul *= j;
	//	}
	//	sum += mul;
	//}
	//printf("%d\n", sum);
	
	//在一个有序数组中查找具体的某个数字n
//1	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int k = 0;
	//scanf("%d", &k);
	//int i = 0;
	//int len = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < len; i++)
	//{
	//	int x = arr[i];
	//	if (x == k)
	//	{
	//		printf("%d\n", i);
	//	}
	//}
	//if (i == len)
	//{
	//	printf("no");
	//}
//2 折半查找 二分查找 效率高但前提有序
	//int arr[] = { 0,1,2,3,4,5,6,7,8 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//int k = 0;
	//int count = -2;
	//while (1)
	//{
	//	scanf("%d", &k);
	//	int left = 0;
	//	int right = len - 1;
	//	while (right >= left)
	//	{
	//		int mi = (right + left) / 2;

	//		if (arr[mi] < k)
	//		{
	//			left = mi + 1;
	//		}
	//		else if (arr[mi] > k)
	//		{
	//			right = mi - 1;
	//		}
	//		else if(arr[mi]==k)
	//		{
	//			printf("number %d --->order %d\n", k, mi);
	//			break;
	//		}
	//	
	//		count++;
	//	}
	//		
	//	if (left > right)
	//	{
	//		printf("no what you\'re eager to find\n ");
	//	}
	//	else if (k == 000)
	//	{
	//		break;
	//	}
	//}
	//printf("you have tried %d times\n", count);
	// 3. 编写一个代码 演示多个字符从两端移动，向中间汇聚，
	//char arr1[] = "you can talk to God!";
	//char arr2[] = "                    \0";
	//int left = 0;
	//int right = strlen(arr1) - 1;
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	Sleep(100); //stop for 1000 ms |need #include <windows.h> |capital S
	//	system("cls");//system is a built-in function that operate system's orders |requiring #include <stdlib.h>
	//	//cls namel
	//	printf("%s\n",arr2);
	//}
	//4.simulate a user logs in an account only confined to three times.
	//to compare whether 2 strings are equal ,utilize built-in strcmp instead of ==
	// outcome == 0 implies they are equal

	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)
	//{
	//	printf("please enter your answer");
	//	scanf("%s", password);//[]arr is the location no indispensibility to use &
	//	if (strcmp(password, "hhh") == 0)//remenber incorporate "" need #include <string.h>
	//	{
	//		printf("succeed\n");
	//		break;
	//	}
	//
	//}
	//if (i == 3)
	//{
	//	printf("wrong and wait 30s to try again");
	//}
	//数组传参时 传的是数组首元素的地址
	//	return 0;
//}
//guess number game
//void menu()
//{
//	printf("----------------------------------------------\n");
//	printf("------------------1.play----------------------\n");
//	printf("------------------0.eixt----------------------\n");
//	printf("----------------------------------------------\n");
//}//建议写一部分试一部分
//void game()
//{
//	
//	//time gets the system time 
//	//time_t*timer returns time_t namely timestamp| time_t is an integer
//	// transmit a variable---> timestamp
//	// 时间戳<-->时间
//	//RAND_MAX; namely 7FFF or 32767
//	int ret = (rand() % 100) + 1; //mod 100 --->ingenious genius
//	int guess = 0;
//	int count = 0;
//		//returns a pseudorandom integer in range(0 to RAND_MAX),use srand to seed the generator
//						 //before calling rand
//	printf("%d\n", ret);
//		//int (Signed Int): Can represent both positive and negative values. For example, in a 32-bit system,
//	// it typically ranges from -2,147,483,648 to 2,147,483,647.
//		//unsigned int: Can only represent non - negative values(positive numbers and zero).
//	// In a 32 - bit system, it ranges from 0 to 4294967295.
//	for(count = 1;;count++)
//	{
//		printf("please guess your number:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("a little bit small\n");
//		}
//		else if (guess > ret)
//		{
//			printf("a little bit large\n");
//		}
//		else
//		{
//			printf("succeed\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int sum = 0;
//	int count = 0;
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("please choose:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("let\'begin");
//			game();//number_guessing logic
//			sum++;
//			break;
//		case 0:
//			printf("see you again latter");
//			break;
//		default:
//			printf("please enter according to rules and try again");
//			break;
//		}
//		
//	}
//	while (input);
//	printf("you have played %d times", sum);
//	return 0;
//}
// goto 语句
//C语言提供了可以随意滥用的goto语句和标记跳转的标记 用法一次终止程序在多层嵌套的程序中(终止多次循环)
//int main()
//{
//again:
//	printf("hh\n");
//	printf("hh\n");
//	printf("hh\n");
//	goto again; // 传送到again来执行 传送启动 但是影响程旭的正常语句 但可能有bug 尽量少用
//	return 0;
//} goto 不能跨函数传送
//int main()
//{
//	printf("1\n");
//	goto again1;
//	printf("2\n");
//again1:
//	printf("3\n");//outcome 13
//	return 0;
//}
//关机程序
//1. in 1m computer will die
//2.enter I love you to impedy it
//用release去分享
//int main()
//{
//	char ch[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("enter Iloveyour to impedy dying\n");
//	
//	scanf("%s", ch);
//	if (strcmp(ch, "Iloveyou") == 0)
//	{
//		system("shutdown -a");
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}






































