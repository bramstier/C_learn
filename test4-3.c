#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	//ѭ�����
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 9)
//			//continue;
//			// //���ж�������ɣ�continue����������ѭ��֮�����䣬��������¿�ʼ����ע������ĸı䣬���������ѭ��
//
//			//break;
//			// ���ж�������ɣ�break��ֱ����������ֹѭ��
//			printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while ((i = getchar()) != EOF)
//		//getchar ()--�ڼ���������һ���ַ��ķ���
//		//EOF--�ļ����ս��
//		putchar(i);
//		//purchar()--��������ڵ��ַ�
//
//	return 0;
//}
//int main()
//{
//	int ch;
//	int i;
//	char password[20] = { 0 };
//	printf("���������룺\n");
//	scanf("%s",password);
//	while ((ch = getchar()) != '\n')
//		//ʹ��һ����ѭ�����getchar��������뻺�����ڵĶ����ַ���
//		//�������������ʹ��һ��getcharֱ�Ӷ�ȡ��������ʣ���ַ�������bug
//	{
//		;
//	}
//	printf("��ȷ��\n");
//	i = getchar();
//	if ('Y' == i)
//	{
//		printf("����ɹ�\n");
//	}
//	else
//	{
//		printf("����ʧ��\n");
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
//		if (i == 5)//forѭ���ڵ��ж���䲻����д��ɸ�ֵ��䣬����ᵼ�³���
//					������ò�Ҫ��forѭ���ڲ��ı�ѭ������
//			continue;
//		//���ڵ������ʽ��һ��ʼִ�У�����forѭ��������whileѭ��һ�����������ѭ��
//		printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i;
//	for (i = 0; i < 10; i++)
//		//i = 0;i<10������ҿ�����д�������Ҫ����ʮ��ѭ�������ʹ������д��������������ұ����� i<=9
//	{
//		printf("%d\n",arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	for  (; ; )//forѭ���ĳ�ʼ�����ж��Լ�����������ʡ�ԣ�
//				//�������forѭ�����жϲ��ֱ�ʡ�ԣ����жϽ����Ϊ��
//				//������Ƿǳ����������鲻Ҫ���ʡ�Դ���
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
//			//���ʡ�Ե�j�ĳ�ʼ������ô����2��iѭ��������ʱ��j��ֵ�����ʼ������Ϊ10���ͻ�ֱ���������ѭ��
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
//		//forѭ��Ҳ����ʹ����������������ѭ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for ( i = 0,j = 0; j = 0; i++,j++)
//		//�жϱ��ʽΪ��ֵ��䣬��ֵΪ0�����ж�ֱ��Ϊ�٣��޷������ѭ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i=0;
//	do {
// //do whileѭ���У�do�������Ҫִ��һ��������ϣ��ͱ������{}�γɴ����
//			//��do while ѭ����ʹ��contine�����Ļ���Ҳ�������ѭ��
//		printf("%d\n",i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//
//int main()//��N�Ľ׳�
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

//int main()//�׳˵ĺ�
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


//int main()//�������ҷ�
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int j = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < j; i++)
//	{
//		if (arr[i]==k)
//		{
//			printf("�ҵ���,�±���%d\n",i);
//			break;
//		}
//	}
//				printf("û����Ҫ�ҵ�Ԫ��");
//	return 0;
//}

//int main()//��Ԫ���ҷ�
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//������鳤��
//	int left = 0;//�������±�λ��
//	int right = sz-1;//�������±�λ��
//	
//	while (left<=right)//������±���ڵ������±��ˣ�����������û�������
//	{
//		int mid = (left + right) / 2;//����м��±�
//		if (arr[mid]>k)
//		{
//			right=mid - 1;//����м��±�������Ҫ�ҵ����������¸����±긳ֵ
//		}
//		else if(arr[mid]<k)
//		{
//			left=mid + 1;//����м��±���С��Ҫ�ҵ����������¸����±긳ֵ
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d",mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("û��Ҫ�ҵ�Ԫ��");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "wlcome to bit!!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1)-1;//ʹ�������鳤�ȵĺ��������±�
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��ʱһ��
//		system("cls");//���һ��֮�������Ļ
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
		printf("���������룺\n");
		scanf("%s",password);
		if (strcmp(password, "123456")==0) 
		{
			printf("������ȷ");
				break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i==3)
	{
		printf("���������������");
	}
	return 0;
}