#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



int main()
{

	return 0;
}




//int ADD(int x,int y) 
//{
//	int z=0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = {2,5,7,4,7,8,4,9,1,6,};
//	int i = 0;
//	i = ADD(arr[3],arr[7]);
//	printf("%d\n",i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("是否学习\n");
//	while (i<270)
//	{
//		i++;
//		printf("学习天数 %d\n",i);
//	}
//	printf("成功上岸\n");
//	return 0;
//}
//int main()
//{
//	//选择语句
//	int i = 0;
//	printf("敲代码否 (1 / 0)");
//	scanf("%d", &i);
//	if (i == 1)
//	{
//		printf("学的更多");
//	}
//	else
//	{
//		printf("摆烂");
//	}
//	return 0;
//}

//int main()
//{
//	//printf("%c\n",'\x61');//--\x61,\x开头代表两个数字的的16进制数字，也只算一个字符
//	//printf("%d\n",strlen("e:\C_test\t\32"));
//	//转义字符\t只算一个字符,\32是一个字符，32作为8进制数字代表的那个十进制数字，作为ASCII码值代表的那个字符
//	//八进制32转换十进制是26，26在ASCII码值代表向右的箭头
//	return 0;
//}


//{
//	printf("%s\n",);
//	//printf("\\t");//--\也可以转移\,让其失去意义，变成普通\
//
//	//printf("abe\n");//--\n是转义字符，改变了n为换行
//	//printf("abe\tabc");//--\t是水平制表符
//	return 0;
//};

//int main()
//{
//	char arr[] = "abe";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",strlen(arr));//strlen -- string length-字符串长度
//	printf("%d\n", strlen(arr2));//没有\0情况下，字符串长度是随机的
//	return 0;
//};

//int main()
//{	
//	//"abcdefg";
//	// "";--字符串可以是空串
//	//字符串，由双引号引起的一串字符就是字符串
//	//每一个字符都有一个固定的值，这样的编码方式被称为ASCII 编码 
//	//a - 值为97
//	//A - 值为65 
//	//字符对应的值被称为码值,并且有一张ASCII码表
//	
//	char arr[] = "abe";
//	//{'a','b','e','\0'}
//	//如果以字符串形式初始化，字符串之内自动包含\0
//	//--/0也是一个字符，值是0，/0是字符串的结束标志，不包含在字符串的内容当中
//	char arr2[] = { 'a','b','c' };
//	//{'a','b','e'}
//	//如果以字符形式初始化，不包含\0
//	//没有\0,会继续打印随机值下去
//	printf("%s\n",arr);
//	printf("%s\n", arr2);
//	return 0;
//}

//define定义的标识符常量，可在定义中使用
//#define MAX 10


//枚举常量，枚举 = 一一列举
	// 例：
	//三原色：红黄蓝
	//日期

	//枚举关键字 -enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//MALE,FEMALE,SECRET --使用关键字-enum-定义的枚举常量

 
//int main()
//{
//	//3;
//	//100;
//	//3.14;//字面常量--字面可见的常量
//	//const int n = 8; coust--常属性
//	//const修饰的常变量,n本质上是个变量，但是具有常属性，称为常变量，所以不可在数组定义中使用
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//
//	return 0;
//}