//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//ͳ�ƶ�������1�ĸ���
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//int count1 = 0;
//	//while ((unsigned int) a != 0)
//	//{
//	//	if (((unsigned int)a) % 2 == 1)
//	//	{
//	//		count1++;
//	//	}
//	//	(unsigned int) a /= 2;
//	//}
//	//printf("%d\n", count1);
//	//int i = 0;
//	//int count2 = 0;
//	//int count3 = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if ((1<<i) & a)
//	//	{
//	//		count2++;
//	//	}
//	//}
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if ((a >> i) & 1)
//	//	{
//	//		count3++;
//	//	}
//	//}
//	//printf("%d\n", count2);
//	//printf("%d\n", count3);
//	return 0;
//}
//int count_1(int a)
//{
//	if (a == 0)
//		return 0;
//	else
//		return 1 + count_1(a & a - 1);
//}//   fabulous
//int Count1(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//C���Զ���ȫ�ֱ����ɼ���static��ֹ�ظ�����
//	int count = count_1(a);
//	int count1 = Count1(a);
//	printf("%d\n", count);
//	printf("%d\n", count1);
//	return 0;
//}
// n = n&(n-1) �ж�һ�����ǲ���pow(2,n)  n & (n-1) == 0
// ���������Ķ����ƵĲ�ͬλ�ĸ���
//int count(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int countab = count(a ^ b);
//	printf("%d\n", countab);
//	return 0;
//}
// ��ӡ����������������ż��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("even:");
//	for (i = 0; i < 32; i += 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\nodd:");
//	for (i = 1; i < 32; i += 2)
//	{
//		if (((1 << i) & a) == (1 << i))
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	return 0;
//}
//C + STL����׼ģ��⣩  CAM ���ű�
//JAVA
// ȫ�ֱ��� ��̬���� ->��̬�� ����ʼ��ʱĬ��Ϊ0
//  �ֲ����� ->ջ�� ����ʼ��Ĭ��ֵ�����ֵ (��Vs����0xcccccc)
//sizeof������������ص���size_t������unsigned int
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))//ountcome > since -1 switched into unsigned int is more than 4
//		printf(">");
//	else
//		printf("<");
//	return 0;
//}
///  printX
//int main()
//{
//	int row = 0;
//	scanf("%d", &row);
//	char arr[20][20] ={ 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			if (i == j || i + j == row - 1 )
//			{
//				arr[i][j] = 'x';// ''character | "" string |  '' + character + %d -> ASCII
//			}
//			else
//			{
//				arr[i][j] = ' ';
//			}
//		}
//	}
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// ���ĳ��ĳ���ж�����
//int FindDay(int y, int m)
//{
//	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//	{//m == 1 || 3 || 5 || 7 || 8 || 10 || 12  wrong || && is boolen expresion and not1 is T so the exp must be True
//  ||,&& and !  (True is 1 False) is 0 boolen expresion
//		return 31;
//	}
//	else
//	{
//		if (m != 2)
//		{
//			return 30;
//		}
//		else
//		{
//			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//			{
//				return 28;
//			}
//			else
//			{
//				return 29;
//			}
//		}
//	}
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int day = FindDay(y, m);
//		printf("%d\n", day);
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	while (scanf("%d%d", &y, &m) == 2)
//	{
//		int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		int day = days[m];
//		if (m == 2 && ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0))
//		{
//			day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}
// �������ж�
//int main()
//{
//	unsigned int a = 0, b = 0, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b < c || a + c < b || b + c < a)
//		{
//			printf("Not a triangle\n");
//		}
//		else
//		{
//			if (a == b || a == c || b ==c)// a== b == c ���� a == b output 0 or 1 -> 1==c or 0==c
//			{
//				if (a == b && a == c)
//				{
//					printf("ET\n");
//				}
//				else
//					printf("IT\n");
//			}
//			else
//			{
//				printf("OT\n");
//			}
//
//		}
//
//
//	}
//	return 0;
//}
// �����ַ
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };// 0x 00 00 00 01
//	short* p = (short*)arr;   // 0x 00 00 00 02
//	int i = 0;				  // 0x 00 00 00 03
//	for (i = 0; i < 5; i++)   // 0x 00 00 00 04 //�������ڴ�洢ʱ��һ��˳�������  ��С���ֽ���
//	{							//���Ŵ� int 4bytes�����ֽ�Ϊ��λ��01��01��ʾһ�ֽڣ� 00 00 00 02 00 00 00
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//outcome 0 0 0 4 5
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;// a 44 33 22 11
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);//%x 16���� outcomw 112233
//	return 0;
//}// any variable contain two features ֵ���� �������� int a =3;(value 3 type int) a+4.5(value 7.5  || type double ) 
//int main()
//{
//	int arr[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
// �ַ�������
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//unsigned int Sn(unsigned int a, unsigned int n)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		count += (int)pow(10, i) * a * (n - i);
//	}
//	return count;
//}
//int main()
//{
//	unsigned int a = 0;
//	unsigned int n = 0;
//	scanf("%d %d", &a, &n);
//	if (a < 10)
//	{
//		int Sn1 = Sn(a, n);
//		printf("%d\n", Sn1);
//	}
//	return 0;
//}
// ��ˮ�ɻ��� ˮ�ɻ�����ָnλ���������ֵ�n�η��͵���������
//int main()
//{
//	for(int i = 1; i <= 100000; i++)
//	{
//		int j = i;
//		int p = i;
//		int count = 0;
//		int sum = 0;
//		while (j)
//		{
//			j /= 10;
//			count++;
//		}
//		while (p)
//		{
//			sum += (int)pow((p % 10), count);
//			p = p / 10;
//		}
//		if(sum == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}
// ��ӡ����
//#define a 7
//int main()
//{
//	char arr[a][a] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			if ((i + j >=a/2) && (i + j <=a/2 +a -1  ) && (j - i <=a/2 ) && (i - j <= a/2))
//			{
//				arr[i][j] = '*';
//			}
//			else
//			{
//				arr[i][j] = ' ';
//			}
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//struct �ṹ��ؼ���  struct P ����Ľṹ������
//ָ������ int* arr[10]ÿһ��Ԫ����ָ��          ����ָ�� int (*arr)[10] ָ�������ָ��,ÿ��Ԫ�ز�������
// ����ˮ 1ƿ��ˮ1Ԫ  2����ƿ�ɻ�һƿ��ˮ 20Ԫ���ٸ���ˮ
//int main()
//{
	//int money = 0;
	//scanf("%d", &money);
	//int count = 0;
	//int left = 0;
	//while (money)
	//{
	//	count += money;		
	//	left += money % 2;
	//	money = money / 2;

	//	if (left == 2)
	//	{
	//		left = 0;
	//		money++;
	//	}
	//}
	//printf("%d", count);
//	int money = 0;
//	scanf("%d", &money);
//	if (money == 0)
//		printf("0\n");
//	else
//		printf("%d\n", 2 * money - 1);
//	return 0;
//}




