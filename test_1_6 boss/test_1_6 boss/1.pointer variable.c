//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
// ----------------------------1. what is pointer variable
// 指针是内存最小单位的编号，也就是地址 （内存单元 1byte）
// 口头里的指针是指指针变量,namely存储内存地址的变量
// 本质上指针就是地址
//int main()
//{
//	int a = 10;// a is an integer occupying 4 byte    
//	int* pa = &a;// retrieve the location of the first bit
//	pa = 0x00CC66;
//	printf("%d\n", a);
//	return 0;
//}
// 32位机器 pow(2,32)byte == 4GB  b B KB MB GB TB PB EB 32位机器上是4个字节空间存储
// 64位机器 pow(2,64)byte == 16EB 64位机器上是8个字节空间存储
//int main()
//{
//	int* pi = NULL;// (void*)0
//	//sizeof return unsigned integer
//	printf("%zu", pi);// zu is desined for sizeof
//	//more precise than printf("%u\n",pi);
//
//	return 0;
//}
//--------------------------------2.指针和指针类型
//1.指针类型决定了解引用时访问了几个数字
//int main()
//{
//	int a = 0x11223344;
//	char* pa = (char*)&a;
//	*pa = 0;
//	// a == 0x00223344
//	// 指针的类型绝顶解引用是访问几个字节  *(char*) 1 | *(int*) 4 | *(double*) 8
//	return 0;
//}
//2.指针的类型决定了指针+1||-1跳过的字节 决定了指针的补偿步长  int 4B  char 1B
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*) &a;
//	int* pd = (int*)pc;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pd);
//	printf("%p\n", pd+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	//0000001C01DAFB84
//	//0000001C01DAFB88 // gap 4
//	//0000001C01DAFB84
//	//0000001C01DAFB88 // gap 4
//	//0000001C01DAFB84
//	//0000001C01DAFB85 // gap 1
//	return 0;
//}
// 3.解引用的操作方式
//int main()
//{
//	int a = 0;
//	int* pi = &a;//  * deploy 4B  pi+1 skip4B  
//	float* pf = &a;// * deploy 4B  pi+1 skip4B
//	// int* != float*   like int != float
//	//*pi = 100;
//	*pf = 100.0;// is unequal to *pi = 100;
//	return 0;
//}
// 32位机器的地址是4的字节  //指针变量的大小是地址的大小 （指针变量的在另一块块区域，但原变量在一块区域）
// 但指针变量的大小 != 指针可访问的范围
// double* pd = 0x0012ff44 大小是4个字节 但权限可访问8*k个字节  
//----------------------------------3.野指针 野指针指向的位置是不可知的
//int main()
//{
//	//int* p;//p isn't initialised and has no specific point
//	//*p = 20;// 非法访问内存  这里的p就是野指针
////	int a;
////	printf("%d", "a");
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0] == arr
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;// 越界访问后(i == 10)就是野指针
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();// a已经被销毁了（不属于当前程序 <--> int main） p找到空间后的空间不是a的
//	return 0;
//}
// evade wild pointer 
// 1. specific initialisation  
// 2. 小心指针越界
// 3.空载放置NULL int* p = NULL; 
// 4. 避免返回局部变量指针
// 5.检查有效性
//int main()
//{
//	int a = 0;
//	int* p = NULL;
//	//*p   = 100;// 错误的 NULL_location can't be deployed
//	if (p != NULL)
//	{
//		*p = 100;//avoidable
//	}
//	p = &a;
//	*p = 100;
//	printf("%d\n", *p);
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* b = test();
//	printf("hehe\n"); // if no hehe, the outcome is 10
//	if (*b != NULL)
//		printf("%d\n", *b);//  is not 10 a random number
//	return 0;
//}

//------------------------------4.指针运算
//        1.指针 ± 整数
//int main()
//{
//	float v[5];
//	float* vp;
//	int a = 0;
//	for (vp = v; vp < &v[5]; )
//	{
//		*vp++ = ++a;//*vp = a + 1; vp++ ; a++
//		//(*vp)++     (*vp) += 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		}
//	return 0;
//}
//            2.指针减指针
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n",(int) (&arr[9] - &arr[0]));
//	// 不是所有的指针都可以相减  指向同一块空间的两个指针才能相减
//	// outcome -> 9  指针与指针相减得到的是指针之间的步数（元素个数）
//	return 0;
//}    // 用法 my_strlen 
//1.//int my_strlen(char* str)// 传的是a的地址
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//2.
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//3.
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (int) (str - start);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//  指针的关系运算> < >= <= == !=
// std ->  for any arr[rhght]    p < arr[right] √  p <= arr[right - 1] √
//                               p > arr[-1]    ×  p >= arr[0]         √
//++ advisable   -- not advisable
//-------------------------5.指针和数组 数组传参传的是首元素的地址 除 sizeof(arr) || &arr
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr; // arr == &arr[0]
//	int sz = sizeof(arr) - sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n%p\n-------------\n", &arr[i], p + i);// &arr[i] == p + i;  
//		//arr[i] == *(arr + i)
//	}
//	return 0;
//}
// ----------------------6.二级指针是用来存放一级指针变量的地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
// // pa1是一个一级指针变量 int * pa *表明是指针变量 int表明指向它
//	int** ppa = &pa1;
// //pa2是一个二级指针 int* * ppa the |2ed * indicate ppa is pointer| 1st * 表明ppa指向int* 
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//------------------------------------7.指针数组 存放指针的数组
//int main()
//{
	//int a = 0;
	//int b = 1;
	//int c = 2;
	//int arr[3] = { 0,1,2 };
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//int* parr[3] = { arr , arr + 1 , arr + 2 };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *parr[i]);
	//}
	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for(j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//int arr1[4] = { 1,2,3,4 };
	//int arr2[4] = { 4,2,3,3 };
	//int arr3[4] = { 1,2,3,5 };
	//int* parr[3] = { arr1,arr2,arr3 };// 二维数组
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", parr[i][j]); parr[i][j] == *(parr[i] + j)  parr[i]  == arri   parr[i][j] == arri[j]
	//	}
	//	printf("\n");
	//}
	//return 0;
//}








