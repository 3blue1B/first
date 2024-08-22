// char 字符类型
//'a' 字符常量 单引号引起来  字符串“dqfwv"双引号引起来 -->量
//char m = 'w';
//C 中没有字符串类型 
//#include <stdio.h>//strlen() function length of string
//strlen 的头文件 string.h
//#include <string.h>
//int main()
//{
//	char arr1[5] = "acvv";//可以存起来 arr[]可以根据后面的大小确定其大小  字符串末尾自带\0 acvv\0 5个元素
//	char arr2[4] = { 'a','b','c','d' };// \0是字符串结束的标志 字符常量无 则要加\0
//	char arr3[5] = { 'a','b','c','d','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int len3 = strlen(arr3);
//	printf("%d\n", len1);// \0占空间 但不算入长度 4
//	printf("%d\n", len2);//36
//	printf("%d\n", len3);//4
//	return 0;
//} // %d 整型 %c 字符 %s 字符串 %f float %lf double
// -----------------转义字符---------------
// \0 字符串的结束标志 
// \n 换行 
// \t tab
// \?  防止被认为是三字母词远古时期 三字母词 eg: ??)-->]   \?\?)-->??) 现代不支持三字母词
// \' \"   防止被认为有特殊功能
// \zu  return size of sth 
// \\ the former impedies the latter from functioning  \\ -------->\
// \a warning string  will alarm
// \b 退格符 
// \f 进纸符 
// \r 回车 
// \v 垂直制表符 
// \ddd ddd表示1-3个八进制的数字 vital  8进制转为十进制后的ASCII值 支持dd ddd
// \xdd dd表示2个16进制数字 crucial 16进制转为十进制后的ASCII值 范围 0-127 支持 xdd xddd
// 16进制 A == 10 B ==11 C ==12 D ==13 E ==14 F ==15 
//int main()
//{
	//printf("abc\\0114");//outcome abc\0114
	//printf("d:\test\test.1\154.c\n"); // outcome  peculiar
	//printf("d:\\test\\test.1\\154.c"); // outcome normal
	//printf("\a");
	//printf("%c\n",'\130'); // 64 + 3*8 = 88 outcome X In ASCII X <--> 88 
	//printf("%c\n", '\x063'); // 6*16+3 =99 2 3 位都支持 \x063只算一个字符即转义字符 
	// ASCII code 给每一个字符都编一个号 
	//printf("%d\n",strlen("abc\\0de"));//7
	//printf("%d\n",strlen("abc de"));//6
	//printf("%d\n",strlen("abc\tde"));//6
	//printf("%d\n",strlen("abc\nde"));//6
	//printf("%d\n",strlen("c:\test\628\test\c"));//13
	//printf("%d\n",strlen("c:\test\111\test\c"));//12
	//printf("%d\n",strlen("c:\test\999\test\c"));//wrong ASCII only decima in range(0-127)	
	//Cpp---> // one line recommend
	//C---> /**/ mutiple lines but exists some defects 不支持嵌套注释
	/*
	both ok but the former is highlighted
	*/
	//写代码时写注释can enhance readability and coherence
	//return 0;
//}






