//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//��֧ if switch
//ѭ�� while for do while
// goto 
//��� ���ʽ��� ����������� �������(��֧,ѭ��) ������� �����
//���������Ƶ�ִ������ ��ʵ�ֳ���ĸ��ֽṹ��ʽ C��9��
//	�����ж����/��֧��� if switch 
//	ѭ��ִ����� do while  while for
//	ת����� break goto continue return
//-----------------------��֧���------------------- if and switch
//int main()
//{
//	int a = 0; 
//	scanf("%d", &a);
//	if (18 < a && a < 32)  // ����дΪ18<a<32 ���������� 18<a| false outcome 0 else ->not 0|and judge outcome <32  
//		printf("adult\n");
//	else if (a < 18 || a>99)
//	{
//		printf("aa\n");
//		printf("hh\n");//�������Ҫ�ô����� namely �����
//	}
//	else
//		printf("mediocrity");
//	return 0;
//}
// -----------����else  else �����������ifƥ��
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
//but if{if} else ��else �� ��һ��if ƥ��
// �淶 1.������������������ �淶�� 2.�ո� ���� ����
// if ��д���ĶԱ�
//if(condition)
// {returnx;} 
// return y;  �������㷵��x���򷵻�y but bad readability
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
//------------switch �����ڷ�֧���//
// switch (int exp)//must int
//{
//	case int exp n(constant): Ҳ�������ַ� תΪ��ASCIIֵ ҲΪ����
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
//	default://������ֵĬ��λchoose wrong
//		printf("choose wrong");
//		break;//��default break
//	}
//	return 0; 
//}










