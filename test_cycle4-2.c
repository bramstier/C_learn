#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//C������һ�Žṹ���ĳ����������
//˳��ṹ
//ѡ��ṹ
//ѭ���ṹ
// ��� --��һ���ֺ� ; �����ľͽ������
//��֧��� if switch --����
//ѭ����� while,for,do while --����
//int main()
//{
//	//;// ֻ��һ���ֺ�Ҳ��һ����䣬��һ�������
	///*int age = 45;
	//if (age < 18)
	//	printf("δ����");
	//else if (age <= 18 && age < 28)
	//	���������ж�����ʱ��������ʹ�ô�����ʽ(18<=age<28)����ʹ��&&�������������ʽ�ֿ��ж� 
	//	printf("����");
	//else if (age <= 28 && age < 45)
	//	printf("׳��");
	//else
	//	printf("����");*/
//	return 0;
//}
//int main()
//{
//	int age = 45;
//	//Ҳ����ʹ������д�����߼����Ϸ���û������
//	if (age < 18)
// {
//		printf("��������")	
//		printf("δ����");
// }//���һ��ifҪִ�ж�����䣬Ӧ��ʹ�ô�������ʽ
//	else {
//		if (age <= 18 && age < 28)
//			printf("����");
//		else if (age <= 28 && age < 45)
//			printf("׳��");
//		else
//			printf("����");
//	}
//	return 0;
//}

//int main()
//{
//	//����else����
//	int a = 1;
//	int b = 2;
//	if (a == 1)//���ifû��elseƥ�䣬������������������޷�������һ��if��䣬����û��elseִ�����
//		if (b == 2)//�����Ҫelse�������if��ƥ�䣬����Ҫ�����ifʹ�ô����ſ�һ�������Ĵ������
//			printf("hehe\n");
//		else
//			//else������Լ������δƥ���if��ƥ��
//			printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (a%2 == 0)
//		printf("ż��");
//	else
//		printf("����");
//	return 0;
//}
//int main()
//{
//	 int i = 0;
//	while (i <= 100) {
//		if (i%2 == 1) {
//			printf("%d������\n", i);
//		}
//		else
//			printf("ż��\n");
//		i++;
//	}
//	return 0;
//}
//switch ���֧���
//int main()
//{
//	int day;
//	scanf("%d",&day);
//	switch (day)//switch�����ͱ��ʽ �����ڲ�������һ���������֣������Ǹ�������ַ���
//	{
//	case 1://case�����������ͳ������ʽ�������Ǳ������������Ǹ�����ַ���
//		printf("��1");
//		break;
//	case 2://case ���治�ܳ���continue
//		printf("��2");
//		break;
//	case 3:
//		printf("��3");
//		break;
//	case 4:
//		printf("��4");
//		break;
//	case 5:
//		printf("��5");
//		break;
//	case 6:
//		printf("��6");
//		break;
//	case 7:
//		printf("��ĩ");
//		break;
//	default://����������ֵû�з��������ģ������� defaul�µ����
//		printf("û�ж�Ӧֵ");
//		break;
//	}
//	return 0;
//}
