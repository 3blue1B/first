//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
// ----------------------------1. what is pointer variable
// ָ�����ڴ���С��λ�ı�ţ�Ҳ���ǵ�ַ ���ڴ浥Ԫ 1byte��
// ��ͷ���ָ����ָָ�����,namely�洢�ڴ��ַ�ı���
// ������ָ����ǵ�ַ
//int main()
//{
//	int a = 10;// a is an integer occupying 4 byte    
//	int* pa = &a;// retrieve the location of the first bit
//	pa = 0x00CC66;
//	printf("%d\n", a);
//	return 0;
//}
// 32λ���� pow(2,32)byte == 4GB  b B KB MB GB TB PB EB 32λ��������4���ֽڿռ�洢
// 64λ���� pow(2,64)byte == 16EB 64λ��������8���ֽڿռ�洢
//int main()
//{
//	int* pi = NULL;// (void*)0
//	//sizeof return unsigned integer
//	printf("%zu", pi);// zu is desined for sizeof
//	//more precise than printf("%u\n",pi);
//
//	return 0;
//}
//--------------------------------2.ָ���ָ������
//1.ָ�����;����˽�����ʱ�����˼�������
//int main()
//{
//	int a = 0x11223344;
//	char* pa = (char*)&a;
//	*pa = 0;
//	// a == 0x00223344
//	// ָ������;����������Ƿ��ʼ����ֽ�  *(char*) 1 | *(int*) 4 | *(double*) 8
//	return 0;
//}
//2.ָ������;�����ָ��+1||-1�������ֽ� ������ָ��Ĳ�������  int 4B  char 1B
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
// 3.�����õĲ�����ʽ
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
// 32λ�����ĵ�ַ��4���ֽ�  //ָ������Ĵ�С�ǵ�ַ�Ĵ�С ��ָ�����������һ������򣬵�ԭ������һ������
// ��ָ������Ĵ�С != ָ��ɷ��ʵķ�Χ
// double* pd = 0x0012ff44 ��С��4���ֽ� ��Ȩ�޿ɷ���8*k���ֽ�  
//----------------------------------3.Ұָ�� Ұָ��ָ���λ���ǲ���֪��
//int main()
//{
//	//int* p;//p isn't initialised and has no specific point
//	//*p = 20;// �Ƿ������ڴ�  �����p����Ұָ��
////	int a;
////	printf("%d", "a");
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0] == arr
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;// Խ����ʺ�(i == 10)����Ұָ��
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
//	int* p = test();// a�Ѿ��������ˣ������ڵ�ǰ���� <--> int main�� p�ҵ��ռ��Ŀռ䲻��a��
//	return 0;
//}
// evade wild pointer 
// 1. specific initialisation  
// 2. С��ָ��Խ��
// 3.���ط���NULL int* p = NULL; 
// 4. ���ⷵ�ؾֲ�����ָ��
// 5.�����Ч��
//int main()
//{
//	int a = 0;
//	int* p = NULL;
//	//*p   = 100;// ����� NULL_location can't be deployed
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

//------------------------------4.ָ������
//        1.ָ�� �� ����
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
//            2.ָ���ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n",(int) (&arr[9] - &arr[0]));
//	// �������е�ָ�붼�������  ָ��ͬһ��ռ������ָ��������
//	// outcome -> 9  ָ����ָ������õ�����ָ��֮��Ĳ�����Ԫ�ظ�����
//	return 0;
//}    // �÷� my_strlen 
//1.//int my_strlen(char* str)// ������a�ĵ�ַ
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
//  ָ��Ĺ�ϵ����> < >= <= == !=
// std ->  for any arr[rhght]    p < arr[right] ��  p <= arr[right - 1] ��
//                               p > arr[-1]    ��  p >= arr[0]         ��
//++ advisable   -- not advisable
//-------------------------5.ָ������� ���鴫�δ�������Ԫ�صĵ�ַ �� sizeof(arr) || &arr
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
// ----------------------6.����ָ�����������һ��ָ������ĵ�ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
// // pa1��һ��һ��ָ����� int * pa *������ָ����� int����ָ����
//	int** ppa = &pa1;
// //pa2��һ������ָ�� int* * ppa the |2ed * indicate ppa is pointer| 1st * ����ppaָ��int* 
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//------------------------------------7.ָ������ ���ָ�������
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
	//int* parr[3] = { arr1,arr2,arr3 };// ��ά����
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








