//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
// ���� ������һ����ͬԪ�صļ���

//int main()
//{
//	//    1.����Ĵ���
//	//type_t arr_name [const_n] must be constant
//	//����Ĵ���ֻ����֧��C99�ϵı�������֧��like gcc	gcc test.c -std=c99
//	//VS�ϲ�֧��
//	//int n = 20;
//	//int arr[n]; �������鲻���Գ�ʼ��
//	//��C99֮ǰ����Ĵ�Сֻ���ǳ����������ʽ
//	//��C99֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ䳤����
//	//    2.����ĳ�ʼ�� �ڴ��������ͬʱ����һЩֵ
//	int arr1[10] = { 1,2,3 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr2[3] = { 1,2,3 };//��Ӣ�ĵĶ���
//	char ch1[10] = { 'a','b','c' };//ʣ���Ԫ��Ĭ��Ϊ'\0'which ASCII value is 0
//	char ch2[10] = "abc";//ͬ��֮��7��000'\0'
//	int arr3[] = { 1,2,3 };//Ĭ�ϸ�3
//	char ch3[] = { 'a','b','c' };//��ʼ��Ϊ3
//	char ch4[] = "abc";//��ʼ��Ϊ4
//	return 0;
//}
// 3.һά�����ʹ�� []�±����ò���������ʵ����������ʵĲ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��ջ�������ռ�����һ�������Ŀռ�����10��ֵ
//	// ���       0 1 2 3 4 5 6 7 8 9 
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]); //���úͷ���Ԫ��ʱ���±�����Ǳ���������ʱ��C99֮ǰ�����ǳ���
//	}
//	printf("\n");
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}//����Ĵ�С����ͨ������õ�
//  !@#$%^&*()_4.һά�������ڴ��еĴ洢
//int main()
//{
//	double arr[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{ 
//		printf("%p\n", &arr[i]);//%p��ӡ��ַ int ��4 double ��8 char ��1
//	}//�������ڴ�����������ŵ�
//	return 0;
//}
//  !@#$~!@#$%^&*()_`~.��ά����
//         1.��ά����Ĵ����ͳ�ʼ�����Ʊ��
//int main()
//{
//	//int arr[3/*3��*/][4/*4��*/] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	//char arr2[5][10];
//	// 1 2 3 4
//	// 2 3 4 5
//	// 3 4 5 6 �Ȱ�ÿһ�д���С�������� ʣ���Ϊ0
//	int arr1[3][4] = { {1,2},{3,4},{5,6} };
//	// 1 2 0 0
//	// 3 4 0 0
//	// 5 6 0 0
//	int arr3[][4] = { {1,3,3,5},{4,8,5,0} };//�п���ʡ|���в���ʡ //1 3 3 5 ��ά����ֻ�����һ��������ʡ��
//															    //4 8 5 0 
//In C/C++, if you only specify the size of the second dimension, all rows must have exactly that many elements.
// 	return 0;
//}
//            2.��ά�����ʹ�� 
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };//�д�0��ʼ �д�0��ʼ
//	int i = 0;
//	for (i = 0; i < 3 ;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%02d ",arr[i][j]);//%02d��ʽ ��λ�����в�0
//		}
//		printf("\n");// 1 2 3 4 5 6 7 8 9 0 0 0
//	}
//	printf("%02d", arr[1][1]);
//}
//                 3.��ά�������ڴ��еĴ洢
//int main()
//{
//	int arr[3][4] = { {00 ,01 ,02 ,03},{10 ,11 ,12 ,13},{20 ,21 ,22 ,23} };//�д�0��ʼ �д�0��ʼ
//	int i = 0;
//	for (i = 0; i < 3 ;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%p\n",i,j,&arr[i][j]);//%02d��ʽ ��λ�����в�0
//			//��ά����Ҳ��������� a00 ->a01 ->a02 ->a03 -> .....a0n ->a10.....->am0....->amn
//			// or arr[0] -> arr[1] ....arr[m] arr[m][n] �� arr[m*n]�ڴ�洢��ʽ����
//		}
//	}
//	return 0;
//}
//arr[][4]={1,2,3,4,5,6}//1 2 3 4
						//5 6 0 0
//        ����Խ�� ������һ��᲻�ᱨ��
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d\n", arr[-1][0]);//Խ���˵�����ʹ�
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
//~!@#$%^&*()_+4.������Ϊ��������
//ð�ݺ��� �������ڵ�Ԫ�ؽ��бȽ� һ��ð��������һ������������Ӧ�ó��ֵ�λ��
// ���鴫���� �β�������д�� type arr[] or pointer parameter
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
//	int arr[] = {9,8,7,6,5,4,3,2,1 };//��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	//ð��������㷨 �������������
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
//                //int n = sizeof(arr);//��ַ�Ĵ�С��4/8 but here comes 40
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
//	int arr[] = {9,8,7,6,5,4,3,2,1 };//��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	//ð��������㷨 �������������
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

















