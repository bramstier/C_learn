#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体
	//人 - 姓名 身高 年龄 体重
	//书 - 作者 出版社 定价 书号
	// 此类被称为复杂对象
	//描述复杂对象 - 结构体 - 自己创造出来的类型
	//
#include <string.h>
struct BOOK //--struct  结构体关键字
{
	char name[20];
	short price;
};
int main()
{
	//使用结构体类型--创建一个该类型结构体变量出来
	struct BOOK b1 = {"C语言程序设计",55};

	//取结构体变量的地址，定义指针变量名的类型为结构体变量的名字+*
	struct BOOK* pb = &b1;

	//由此也可以推出，可以通过指针变量解引用来查看以及修改原结构体变量的内容
	/*printf("%s\n",(*pb).name);//使用 .操作符  （结构体变量）.（成员）
	(*pb).price = 60;
	printf("%d\n",(*pb).price);*/

	// 也可以用此操作符  ->  简化此步骤
	//printf("%s\n",pb->name);//使用->操作符  结构体指针->成员
	
	//如果要修改结构体类型中的字符串，需要使用strcpy函数
	strcpy(b1.name, "C++");// strcpy - string copy 字符串拷贝 ，需要引头文件string.h使用
	printf("修改后书名：%s\n",b1.name);
	return 0;
}
	