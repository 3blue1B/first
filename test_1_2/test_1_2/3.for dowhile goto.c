//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
// ----------for-----------
//int main()
//{
//	int i = 1;//��ʼ��
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);
//		++i;//����
//	}
//	return 0;
//}
//for(exp1;exp2;exp3)//1 initialize 2 judge 2 adjust
	//ѭ�����
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{	
//		printf("%d ", i);
//	}
//	return 0;
//}
//������for ѭ�����޸�ѭ������ ����forѭ��
//����forѭ����ѭ����������ǰ�պ󿪵�д��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//�Ƽ�i<10 ���Ƽ�i<=9
//	}
//	return 0;
//}
// forѭ���ı���
//int main()//forѭ�����ж�ʡ����ζ���жϺ���� ���߶���ʡ�� ���鲻Ҫ����ʡ��
//{
	// 99�˷��� ������ʼ��
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
	// ��������ʼ��
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
//C99�﷨�в�֧��for(int i = 1;i<10;i++)| C++֧������д��
//forѭ�������������
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
//	//for (a = 0, b = 0; a = 0; a++, b++)//0�� a==0 0-->false 0�� 
//	//for (a = 0, b = 0; a = 1; a++, b++)//������ a!=0 !0-->True ��ѭ��
//		printf("he\n");
//	return 0;
//}
// ----------do whileѭ��-----------ѭ��������ִ��һ��
// do
//	ѭ����䣻
//while(���ʽ)��//����ѭ��һ��
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
//}//1234 ��ѭ��
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
	
	//��һ�����������в��Ҿ����ĳ������n
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
//2 �۰���� ���ֲ��� Ч�ʸߵ�ǰ������
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
	// 3. ��дһ������ ��ʾ����ַ��������ƶ������м��ۣ�
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
	//���鴫��ʱ ������������Ԫ�صĵ�ַ
	//	return 0;
//}
//guess number game
//void menu()
//{
//	printf("----------------------------------------------\n");
//	printf("------------------1.play----------------------\n");
//	printf("------------------0.eixt----------------------\n");
//	printf("----------------------------------------------\n");
//}//����дһ������һ����
//void game()
//{
//	
//	//time gets the system time 
//	//time_t*timer returns time_t namely timestamp| time_t is an integer
//	// transmit a variable---> timestamp
//	// ʱ���<-->ʱ��
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
// goto ���
//C�����ṩ�˿����������õ�goto���ͱ����ת�ı�� �÷�һ����ֹ�����ڶ��Ƕ�׵ĳ�����(��ֹ���ѭ��)
//int main()
//{
//again:
//	printf("hh\n");
//	printf("hh\n");
//	printf("hh\n");
//	goto again; // ���͵�again��ִ�� �������� ����Ӱ������������� ��������bug ��������
//	return 0;
//} goto ���ܿ纯������
//int main()
//{
//	printf("1\n");
//	goto again1;
//	printf("2\n");
//again1:
//	printf("3\n");//outcome 13
//	return 0;
//}
//�ػ�����
//1. in 1m computer will die
//2.enter I love you to impedy it
//��releaseȥ����
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






































