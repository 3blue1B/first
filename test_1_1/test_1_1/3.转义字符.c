// char �ַ�����
//'a' �ַ����� ������������  �ַ�����dqfwv"˫���������� -->��
//char m = 'w';
//C ��û���ַ������� 
//#include <stdio.h>//strlen() function length of string
//strlen ��ͷ�ļ� string.h
//#include <string.h>
//int main()
//{
//	char arr1[5] = "acvv";//���Դ����� arr[]���Ը��ݺ���Ĵ�Сȷ�����С  �ַ���ĩβ�Դ�\0 acvv\0 5��Ԫ��
//	char arr2[4] = { 'a','b','c','d' };// \0���ַ��������ı�־ �ַ������� ��Ҫ��\0
//	char arr3[5] = { 'a','b','c','d','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int len3 = strlen(arr3);
//	printf("%d\n", len1);// \0ռ�ռ� �������볤�� 4
//	printf("%d\n", len2);//36
//	printf("%d\n", len3);//4
//	return 0;
//} // %d ���� %c �ַ� %s �ַ��� %f float %lf double
// -----------------ת���ַ�---------------
// \0 �ַ����Ľ�����־ 
// \n ���� 
// \t tab
// \?  ��ֹ����Ϊ������ĸ��Զ��ʱ�� ����ĸ�� eg: ??)-->]   \?\?)-->??) �ִ���֧������ĸ��
// \' \"   ��ֹ����Ϊ�����⹦��
// \zu  return size of sth 
// \\ the former impedies the latter from functioning  \\ -------->\
// \a warning string  will alarm
// \b �˸�� 
// \f ��ֽ�� 
// \r �س� 
// \v ��ֱ�Ʊ�� 
// \ddd ddd��ʾ1-3���˽��Ƶ����� vital  8����תΪʮ���ƺ��ASCIIֵ ֧��dd ddd
// \xdd dd��ʾ2��16�������� crucial 16����תΪʮ���ƺ��ASCIIֵ ��Χ 0-127 ֧�� xdd xddd
// 16���� A == 10 B ==11 C ==12 D ==13 E ==14 F ==15 
//int main()
//{
	//printf("abc\\0114");//outcome abc\0114
	//printf("d:\test\test.1\154.c\n"); // outcome  peculiar
	//printf("d:\\test\\test.1\\154.c"); // outcome normal
	//printf("\a");
	//printf("%c\n",'\130'); // 64 + 3*8 = 88 outcome X In ASCII X <--> 88 
	//printf("%c\n", '\x063'); // 6*16+3 =99 2 3 λ��֧�� \x063ֻ��һ���ַ���ת���ַ� 
	// ASCII code ��ÿһ���ַ�����һ���� 
	//printf("%d\n",strlen("abc\\0de"));//7
	//printf("%d\n",strlen("abc de"));//6
	//printf("%d\n",strlen("abc\tde"));//6
	//printf("%d\n",strlen("abc\nde"));//6
	//printf("%d\n",strlen("c:\test\628\test\c"));//13
	//printf("%d\n",strlen("c:\test\111\test\c"));//12
	//printf("%d\n",strlen("c:\test\999\test\c"));//wrong ASCII only decima in range(0-127)	
	//Cpp---> // one line recommend
	//C---> /**/ mutiple lines but exists some defects ��֧��Ƕ��ע��
	/*
	both ok but the former is highlighted
	*/
	//д����ʱдע��can enhance readability and coherence
	//return 0;
//}






