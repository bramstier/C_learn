#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//C语言是一门结构化的程序设计语言
//顺序结构
//选择结构
//循环结构
// 语句 --由一个分号 ; 隔开的就叫做语句
//分支语句 if switch --两种
//循环语句 while,for,do while --三种
//int main()
//{
//	//;// 只有一个分号也是一条语句，是一条空语句
	///*int age = 45;
	//if (age < 18)
	//	printf("未成年");
	//else if (age <= 18 && age < 28)
	//	当有两个判断条件时，不可以使用此类表达式(18<=age<28)，需使用&&将两个条件表达式分开判断 
	//	printf("青年");
	//else if (age <= 28 && age < 45)
	//	printf("壮年");
	//else
	//	printf("老年");*/
//	return 0;
//}
//int main()
//{
//	int age = 45;
//	//也可以使用这种写法，逻辑与上方法没有区别
//	if (age < 18)
// {
//		printf("不能早恋")	
//		printf("未成年");
// }//如果一个if要执行多条语句，应当使用代码块的形式
//	else {
//		if (age <= 18 && age < 28)
//			printf("青年");
//		else if (age <= 28 && age < 45)
//			printf("壮年");
//		else
//			printf("老年");
//	}
//	return 0;
//}

//int main()
//{
//	//悬空else问题
//	int a = 1;
//	int b = 2;
//	if (a == 1)//这个if没有else匹配，如果条件不成立，则无法进入下一个if语句，并且没有else执行语句
//		if (b == 2)//如果需要else不与这个if相匹配，则需要将这个if使用大括号框到一个单独的代码块中
//			printf("hehe\n");
//		else
//			//else与离得自己最近的未匹配的if相匹配
//			printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (a%2 == 0)
//		printf("偶数");
//	else
//		printf("奇数");
//	return 0;
//}
//int main()
//{
//	 int i = 0;
//	while (i <= 100) {
//		if (i%2 == 1) {
//			printf("%d是奇数\n", i);
//		}
//		else
//			printf("偶数\n");
//		i++;
//	}
//	return 0;
//}
//switch 多分支语句
//int main()
//{
//	int day;
//	scanf("%d",&day);
//	switch (day)//switch是整型表达式 （）内部必须是一个整型数字，不能是浮点或者字符型
//	{
//	case 1://case后面必须跟整型常量表达式，不能是变量名，不能是浮点或字符型
//		printf("周1");
//		break;
//	case 2://case 后面不能出现continue
//		printf("周2");
//		break;
//	case 3:
//		printf("周3");
//		break;
//	case 4:
//		printf("周4");
//		break;
//	case 5:
//		printf("周5");
//		break;
//	case 6:
//		printf("周6");
//		break;
//	case 7:
//		printf("周末");
//		break;
//	default://如果输入的数值没有符合条件的，则运行 defaul下的语句
//		printf("没有对应值");
//		break;
//	}
//	return 0;
//}
