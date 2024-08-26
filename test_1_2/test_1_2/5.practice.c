//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//     switch'order   
//1. order among cases cna alter 
//2. default mustn't follow the cases
//     others
//case 后面只能是整型常量表达式 char也是整形的 因为字符存储的是ASCII值
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	default:
//		printf("hh\n");
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//	}
//		return 0;
//}
//rank three integers
// one version			
//int rank1(int x, int y, int z)
//{
//	return(x > y ? (x > z ? x : z) : (y > z ? y : z));
//}
//int rank3(int x, int y, int z)
//{
//	return(x < y ? (x < z ? x : z) : (y < z ? y : z));
//}
//int rank2(int x, int y, int z)
//{
//	return x + y + z - rank1(x, y, z) - rank3(x, y, z);
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d %d %d", rank1(a, b, c), rank2(a, b, c), rank3(a, b, c));
//	return 0;
//}
//  another version
//int main()
//{
//	int a, b, c, d = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		d = b;
//		b = a;
//		a = d;
//	}
//	if (a < c)
//	{
//		d = c;
//		c = a;
//		a = d;
//	}
//	if (b < c)
//	{
//		d = c;
//		c = b;
//		b = d;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
// fabulous version
//void swap(int* pa, int* pb)
//{
//	int d = 0;
//	if (*pa < *pb)
//	{
//		d = *pa;
//		*pb = *pa;
//		*pa = d;
//	}
//}
//int main()
//{
//	int a = 0;
//	int c = 0;
//	int b = 0;
//	scanf("%d %d %d", a, b, c);
//	swap(&a, &b);
//	swap(&a, &c);
//	swap(&b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
// find the greatest common dividor
// one version
//int gcd(int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		if (x % i == 0 && y % i == 0)
//		{
//			j = i;
//
//		}
//	}
//	return j;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("%d", gcd(x, y));
//	return 0;
//}
// another version 辗转相除法(method of successive division)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c=a % b)
//	{		
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}
// 最小公倍数 lowest common multiple a*b = (a,b) + [a , b]
//count how many does 9 appear ranging from 1 to 100
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int a = i % 10;
//		int b = i / 10;
//		if (a == 9)
//		{
//			count++;
//		}
//		if (b == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//求和
//int main()
//{
//	double sum = 0;
//	int count = 0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		count++;
//		if (count % 2 == 1)
//		{
//			sum += 1.0 / i;//都是整数是整除 有任意一个是小数则不是
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}
//                                 <>{:	==!@##$%%^&*()/*\';[]/.求10个数的最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,2,5,6,7,8,9,3,0 };
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
// points
//逗号表达式 vi,v2 v3,v4...vn |v1->v2->v3->v4...vn| regard vn'outcome as return| eg: (a=2,b=a-1,c=a+b,a+b+c) == 6
// ues global variables not so frequently to impedy the low security
// 设计函数时 尽量做到谁申请的资源由谁释放
//在不同的函数中可以使用相同名字的变量
//内存 栈区(局部变量,形式参数,返回值) 堆区(动态内存分配 free malloc calloc realloc) 静态区(static ,global varibles)
//复合语句 defined by {}
//想要返回2个数
//   !@#$%^&*()_1.array
//void test(int arr[])
//{
//	arr[0] = 1;--->*(arr+0) = 1
//	arr[1] = 2;--->*(arr+1) = 1
//}
//int main()
//
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d", arr[0],arr[1]);
//	return 0;
//}
//   2.形参用2个指针
//void test(int* px, int* py)
//{
//	*px = 1;
//	*py = 2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//}
// 3. 用两个全局能量
//int a = 0;
//int b = 0;
//void test()
//{
//	a = 1;
//	b = 2;
//}
//int main()
//{
//	test();
//	printf("%d %d", a, b);
//}