//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
// �ṹ��Ķ��� �ṹ����һЩֵ�ļ��ϣ���Щֵ����Ϊ��Ա�����������ǲ�ͬ���ͣ�
// ������һ����ͬ���͵ļ���
// ----------------------1.�ṹ�����͵�����     
//struct tag
//{
//	menber_list;
//}variable_list(can be neglected);
//struct People
//{
//	char name[20];
//	char tele[20];
//	char sex[10];//һ������ռ2���ַ�;
//	int height;
//};//p1 , p2;//p1 p2��ʹ�ýṹ�����ʹ���ı���
//
//int main()
//{
//	struct People p1 = { 0 };// �ṹ�����͵Ĵ���
//	return 0;
//}
//--------------------2.�ṹ������Ĵ����ͳ�ʼ��(����ȫ��ʼ��)
// �ṹ��ĳ�Ա�����Ǳ�����ָ�룬ָ�룬�����ṹ�� 
//struct People
//{
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int height;
//}p1,p2;
//struct People p3,p4;//p1 p2 p3 p4 Ϊȫ�ֱ���
//struct st 
//{
//	struct People p;
//	int num;
//	float f;
//};
//void printP(struct People* p)
//{
//	printf("%s %s %s %d", p->name, p->tele, p->sex, p->height);
//}
//int main()
//{
//	struct People p5 = {"saber", "114514","quan",618};//p5 -> local variable
//	struct People p6 = { 0 };
//	struct People p7 = { NULL };
//	struct st s = { { "saber", "114514", "privacy",618 }, 31415926,0.5772 };
//	printf("%s %s %s %d\n", p5.name, p5.tele, p5.sex, p5.height);//�ṹ�����.��Ա  �ṹ��ָ��->��Ա
//	printf("%s %s %s %d\n", s.p.name, s.p.tele, s.p.sex, s.num);
//	printP(&p5);
//	return 0;
//}
//struct People
//{
//	char name[20];
//	char tele[20];
//	char sex[20];
//	int height;
//};
//int main()
//{
//	struct People p = { "saber",NULL,"superposition",0x314aaa};
//	printf("%s %s %s %d", p.name, p.tele, p.sex, p.height);
//	return 0;
//}
// ----------------------3.�ṹ��Ĵ��� ������ߵ�ַ һ�㴫��ַ
//��������ʱ ������ѹջ








