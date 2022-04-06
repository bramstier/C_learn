#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 30;
//	int j = 20;
//	int d = 100;
//	if (i>j && i>d)
//	{
//		printf("%d\n",i);
//		if (j>d)
//		{
//			printf("%d\n,%d\n",j,d);
//		}
//		else
//		{
//			printf("%d\n,%d\n",d,j);
//		}
//	}
//	else
//	{
//		if (j>d && j>i)
//		{
//			printf("%d\n",j);
//			if (d>i)
//			{
//				printf("%d\n,%d\n",d,i);
//			}
//			else
//			{
//				printf("%d\n,%d\n",i,d);
//			}
//		}
//		else
//		{
//			if (d>j && d>i)
//			{
//				printf("%d\n",d);
//				if (i>j)
//				{
//					printf("%d\n,%d\n",i,j);
//				}
//				else
//				{
//					printf("%d\n,%d\n",j,i);
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()//有问题
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	 if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	 if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	 printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main() 
//{
//	int i = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//		else
//			continue;
//	}
//	return 0;
//}
//辗转相除法
//int main()
//{
//	int i;
//	int j;
//	int r;
//	scanf("%d%d",&i,&j);
//	while (r = i%j)
//	{
//		i = j;
//		j = r;
//	}
//	printf("%d\n",j);
//	return 0;
//}
//int main()//打印素数
//{
//	int i;
//	for ( i = 100; i <=200; i++)
//	{
//		int j;
//		for ( j = 2; j<i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j) 
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i%2 ==0)
//		{
//			continue;
//		}
//		int j;
//		for (j = 2; j <sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()//计算1—100之间出现了多少个9
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <=100; i++)
//	{
//		sum +=flag*1.0 / i;
//		flag = -flag;//循环改变flag为负数来达到加减交替的结果
//	}
//	printf("%lf",sum);
//	return 0;
//}
//int main()//求一个数组当中最大值
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int max = arr[0];//应该直接给max一个数组当中的值，才能准确比较大小
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 1; i <=sz ; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d",max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <10; i++)
//	{
//		int j=1;
//		for ( j = 1; j <i; j++)
//		{
//			printf("%d*%d=%2d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
