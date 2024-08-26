//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// 数组 数组是一组相同元素的集合

//int main()
//{
//	//    1.数组的创建
//	//type_t arr_name [const_n] must be constant
//	//下面的代码只能在支持C99上的编译器上支持like gcc	gcc test.c -std=c99
//	//VS上不支持
//	//int n = 20;
//	//int arr[n]; 这种数组不可以初始化
//	//在C99之前数组的大小只能是常量或常量表达式
//	//在C99之后，数组的大小可以是变量，为了支持变长数组
//	//    2.数组的初始化 在创建数组的同时给它一些值
//	int arr1[10] = { 1,2,3 };//不完全初始化，剩余的元素默认初始化为0
//	int arr2[3] = { 1,2,3 };//用英文的逗号
//	char ch1[10] = { 'a','b','c' };//剩余的元素默认为'\0'which ASCII value is 0
//	char ch2[10] = "abc";//同理之后7个000'\0'
//	int arr3[] = { 1,2,3 };//默认给3
//	char ch3[] = { 'a','b','c' };//初始化为3
//	char ch4[] = "abc";//初始化为4
//	return 0;
//}
// 3.一维数组的使用 []下标引用操作符，其实就是数组访问的操作符
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//在栈区连续空间找了一块连续的空间存放这10个值
//	// 编号       0 1 2 3 4 5 6 7 8 9 
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]); //引用和访问元素时是下标可以是变量，创建时在C99之前必需是常量
//	}
//	printf("\n");
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//数组的大小可以通过计算得到
//  !@#$%^&*()_4.一维数组在内存中的存储
//int main()
//{
//	double arr[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{ 
//		printf("%p\n", &arr[i]);//%p打印地址 int 差4 double 差8 char 差1
//	}//数组在内存中是连续存放的
//	return 0;
//}
//  !@#$~!@#$%^&*()_`~.二维数组
//         1.二维数组的创建和初始化类似表格
//int main()
//{
//	//int arr[3/*3行*/][4/*4列*/] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	//char arr2[5][10];
//	// 1 2 3 4
//	// 2 3 4 5
//	// 3 4 5 6 先把每一行从列小到大排满 剩余的为0
//	int arr1[3][4] = { {1,2},{3,4},{5,6} };
//	// 1 2 0 0
//	// 3 4 0 0
//	// 5 6 0 0
//	int arr3[][4] = { {1,3,3,5},{4,8,5,0} };//行可以省|但列不能省 //1 3 3 5 三维数组只有最后一个不可以省略
//															    //4 8 5 0 
//In C/C++, if you only specify the size of the second dimension, all rows must have exactly that many elements.
// 	return 0;
//}
//            2.二维数组的使用 
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };//行从0开始 列从0开始
//	int i = 0;
//	for (i = 0; i < 3 ;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%02d ",arr[i][j]);//%02d格式 二位数不行补0
//		}
//		printf("\n");// 1 2 3 4 5 6 7 8 9 0 0 0
//	}
//	printf("%02d", arr[1][1]);
//}
//                 3.二维数组在内存中的存储
//int main()
//{
//	int arr[3][4] = { {00 ,01 ,02 ,03},{10 ,11 ,12 ,13},{20 ,21 ,22 ,23} };//行从0开始 列从0开始
//	int i = 0;
//	for (i = 0; i < 3 ;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%p\n",i,j,&arr[i][j]);//%02d格式 二位数不行补0
//			//二维数组也是连续存放 a00 ->a01 ->a02 ->a03 -> .....a0n ->a10.....->am0....->amn
//			// or arr[0] -> arr[1] ....arr[m] arr[m][n] 与 arr[m*n]内存存储形式相差不大
//		}
//	}
//	return 0;
//}
//arr[][4]={1,2,3,4,5,6}//1 2 3 4
						//5 6 0 0
//        数组越界 编译器一般会不会报错
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d\n", arr[-1][0]);//越界了但将错就错
//	int len_c = sizeof(arr[0])/4;
//	int len_l = sizeof(arr) / sizeof(arr[0]);
//	int len = sizeof(arr)/4;
//	printf("%d %d %d", len_l, len_c,len);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {0},{0},{1} };
//	printf("%d\n", arr[1][4]);//==arr[2][0]
//	return 0;
//}
//~!@#$%^&*()_+4.数组作为函数参数
//冒泡函数 两个相邻的元素进行比较 一次冒泡排序让一个数据来到它应该出现的位置
// 数组传参是 形参有两种写法 type arr[] or pointer parameter
//void bubble_sort(int arr[/*no meaning*/],int sz)//the const can be incorporated but do not work  
//{
//	int i = 0;
//	int j = 0;
//	int tem = 0;
//	for (j = sz - 1; j  >= 0; j--)
//	{
//		for (i = 0; i < j ; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				tem = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tem;
//			}
//
//		}
//	}
// }
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1 };//升序排列
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	//冒泡排序的算法 对数组进行排序
//	bubble_sort(arr,sz);
//	for (k = 0; k < sz; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}
// array_name -->  
//int main()
//{
//	int arr[10];
//                //int n = sizeof(arr);//地址的大小是4/8 but here comes 40
//	            //arr_name does imply the location of the first element,but there exists 2 exceptions
//				//1.sizeof(arr_name) Arr_name indicates the whole array ,which size is calculated.
//				//2.&arr_name Arr_name incicates the whole array,which location is fetched
//	printf("%p\n", arr); // 4 bytes shy compared to arr+1
//	printf("%p\n", &arr[0]);// 4 bytes shy compared to &arr[0]+1
//	printf("%p\n", &arr);//40 bytes shy comepared to &arr+1
//	
//	// the outcomes of three are equal
//	printf("-----------------------------\n");
//	printf("%p\n", arr+1); 
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr+2);//40 bytes bigger than &arr + 2
//	return 0;
//}
// 
//void bubble_sort(int*px,int sz)//the const can be incorporated but do not work  
//{
//	int i = 0;
//	int j = 0;
//	int tem = 0;
//	for (j = sz - 1; j  >= 0; j--)
//	{
//		for (i = 0; i < j ; i++)
//		{
//			if (*(px+i) > *(px+i+1))
//			{
//				tem = *(px + i);
//				*(px + i) = *(px + i + 1);
//				*(px + i + 1) = tem;
//			}
//
//		}
//	}
// }
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1 };//升序排列
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	//冒泡排序的算法 对数组进行排序
//	bubble_sort(arr,sz);
//	for (k = 0; k < sz; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}
// 2 dimensional array_name'understanding
//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);//48 bytes
//	// arr; 2_D_array_names represent not 00'location but 0'location,namely the location of row 0(arr[0])
//	// arr+1 -->arr[1]
//	int row_len = sizeof(arr) / sizeof(arr[0]);
//	int column_len = sizeof(arr[0]) / sizeof(arr[0][0]);
//	int arr_len = sizeof(arr) / sizeof(arr[0][0]);
//	printf("len:>row:%d,column:%d,arr:%d", row_len, column_len,arr_len);
//	return 0;
//}

















