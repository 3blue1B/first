//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//---------ѭ�����------while for  |do while|
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;//break outcome 1234 continue ����1234��ѭ��
//		}// while ѭ���� break ����ѭ��  continue ��������c����ѭ�� �����´�ѭ��
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
// -------�žų˷���------------
//int main()
//{
//	int a = 1;
//	
//	while (a <= 9)
//	{
//		int b = 1;
//		if (b<=9)
//		{
//			while(a>=b)
//			{
//				int c = a * b;
//				printf("%d*%d = %d ", a, b, c);
//				b++;
//			}
//			a++;
//		}
//		else
//		{
//			break;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
	//int ch = getchar();//getchar get char'ASCII ����ֵλint |EOF(-1)|  To indicate an read error or end_of_file return EOF
	/*printf("%c\n", ch);*/
	//putchar(ch);// ��ӡch 
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);//ctrl + Z to return EOF and get out
	//}// scanf and getchar scanf�����ո�||\n��ֹͣ �������� 
	// //�����пո�--> ����+\n 
	////usage of getchar: code reassure

	//printf("please enter your password\n"); 
	//int ch = 0;
	//int first_answer = getchar();
	//printf("please enter ctrl+Z");
	//while ((ch = getchar()) != EOF )
	//{
	//	;
	//}
	//printf("please enter your password once again\n");
	//int second_answer = getchar();
	//if (second_answer == first_answer)
	//{
	//	printf("ok we have restored it");
	//}
	//else
	//{
	//	printf("please ensure them keeping the sanme");
	//}
	//return 0;
//}
//ֻ��ӡ���� ASCII 0123456789-->48 49 50 51 52 53....57 ��'0'��ʾ ASCIIֵ 
//int main()
//{ 
//	char ch = '\n';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//}
// scanf getchar ect functions<----------> ������ <------------>keyboard
//int main()
//{
//	//printf("%c\n", 97);//outcome ASCII��Ӧ��ֵ 
//	int arr[] = { 73,65,45,8,2,7,65,89,116 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	while (i < sz)
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}
// scanf("%k d",&a) ��ȡǰkλ���ּӵ�a 
// printf("%02d",&b) �ո��Զ���0 
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%4d %2d %2d", &y, &m, &d);
//	printf("y=%04d\n",y);
//	printf("m=%02d\n",m);
//	printf("d=%02d\n",d);
//	return 0;
//}
//int main()
//{
//	int ID = 0;
//	float C = 0.0f;
//	float math = 0.0f;// 0.0 --->double 0.0f ---->float
//	float English = 0.0f;
//	scanf("%d;%f,%f, %f", &ID, &C, &math, &English); // : , , ,��ʾ��ʽ
//	printf("The each subject score of NO. %d is %.2f, %.2f, %.2f", ID, C, math, English);%.2��ʾ����2λС��
//	return 0;
//}
//int main()
//{
//
//	int a =printf("hello world!");
//	printf("\n%d", a);
//	return 0;
//}
//int main()
//{
//	int* a = 1;
//	
//	printf("%d", sizeof(a));// 4 or 8 
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];//�����һ��Ԫ�������ֵ
//	i = 1;
//
//	while (i < 4)
//	{
//
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d",&n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//int main()
//{
//	double n = 0.0;
//	double V = 0.0;//0.0Ĭ����double 0.0fΪdouble
//	scanf("%f", &n);
//	V = (4 / 3.0) * 3.1415926 * n*n*n;
//	printf("%.3lf\n", V);
//
//	return 0;
//}





//int main()
//{
//	float weight = 0.0f;
//	float height = 0.0f;
//	scanf("%f %f", &weight, &height);
//	double BMI = weight/height/height;
//	printf("%.2lf\n", BMI);
//	return 0;
//}












