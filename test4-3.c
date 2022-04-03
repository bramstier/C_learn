#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	//循环语句
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 9)
//			//continue;
//			// //当判断条件达成，continue会跳过本次循环之后的语句，从入口重新开始，请注意变量的改变，以免造成死循环
//
//			//break;
//			// 当判断条件达成，break会直接跳出并中止循环
//			printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while ((i = getchar()) != EOF)
//		//getchar ()--在键盘上输入一个字符的方法
//		//EOF--文件的终结符
//		putchar(i);
//		//purchar()--输出括号内的字符
//
//	return 0;
//}
//int main()
//{
//	int ch;
//	int i;
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf("%s",password);
//	while ((ch = getchar()) != '\n')
//		//使用一个空循环配合getchar清除掉输入缓冲区内的多余字符，
//		//如果不清除，则会使下一个getchar直接读取缓冲区内剩余字符，导致bug
//	{
//		;
//	}
//	printf("请确认\n");
//	i = getchar();
//	if ('Y' == i)
//	{
//		printf("输入成功\n");
//	}
//	else
//	{
//		printf("输入失败\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF) {
//	
//		if ('0' > ch || ch>'9')
//			continue;
//			putchar(ch);
//		
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 11; i++)
//	{
//		if (i == 5)//for循环内的判断语句不可以写错成赋值语句，否则会导致出错
//					建议最好不要再for循环内部改变循环变量
//			continue;
//		//由于调整表达式在一开始执行，所以for循环不会像while循环一样容易造成死循环
//		printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i;
//	for (i = 0; i < 10; i++)
//		//i = 0;i<10是左闭右开区间写法，如果要进行十次循环，最好使用这种写法，而不是左闭右闭区间 i<=9
//	{
//		printf("%d\n",arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	for  (; ; )//for循环的初始化，判断以及调整都可以省略，
//				//但是如果for循环的判断部分被省略，则判断结果恒为真
//				//如果不是非常熟练，建议不要随便省略代码
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	int j=0;
//	for ( i = 0; i <10; i++)
//	{
//		for (; j < 10; j++)
//			//如果省略掉j的初始化，那么当第2个i循环进来的时候j的值不会初始化依旧为10，就会直接跳出这个循环
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for ( i = 0,j=0; i < 2 && j<5; ++i,j++)
//		//for循环也可以使用两个变量来控制循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for ( i = 0,j = 0; j = 0; i++,j++)
//		//判断表达式为赋值语句，赋值为0代表判断直接为假，无法进入此循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i=0;
//	do {
// //do while循环中，do后面如果要执行一条语句以上，就必须加上{}形成代码块
//			//在do while 循环中使用contine不当的话，也会造成死循环
//		printf("%d\n",i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//
//int main()//求N的阶乘
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		j = j * i;
//}
//		printf("%d\n", j);
//	return 0;
//}

//int main()//阶乘的和
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	int sum = 0;
//	scanf("%d",&i);
//	for ( n= 1; n <=i; n++)
//	{
//		j = j * n;
//		sum += j;
//	}
//	printf("%d",sum);
//	return 0;
//}


//int main()//遍历查找法
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int j = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < j; i++)
//	{
//		if (arr[i]==k)
//		{
//			printf("找到了,下标是%d\n",i);
//			break;
//		}
//	}
//				printf("没有你要找的元素");
//	return 0;
//}

//int main()//二元查找法
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//算出数组长度
//	int left = 0;//定义左下标位置
//	int right = sz-1;//定义右下标位置
//	
//	while (left<=right)//如果左下标大于等于右下标了，代表数组中没有这个数
//	{
//		int mid = (left + right) / 2;//求出中间下标
//		if (arr[mid]>k)
//		{
//			right=mid - 1;//如果中间下标数大于要找的数，则重新给右下标赋值
//		}
//		else if(arr[mid]<k)
//		{
//			left=mid + 1;//如果中间下标数小于要找的数，则重新给左下标赋值
//		}
//		else
//		{
//			printf("找到了，下标是%d",mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("没有要找的元素");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "wlcome to bit!!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1)-1;//使用求数组长度的函数求右下标
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//延时一秒
//		system("cls");//输出一次之后清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}

int main()
{
	char password[20] = {0};
	int i;
	for (i = 0; i < 3; i++) 
	{
		printf("请输入密码：\n");
		scanf("%s",password);
		if (strcmp(password, "123456")==0) 
		{
			printf("密码正确");
				break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i==3)
	{
		printf("密码三次输入错误");
	}
	return 0;
}