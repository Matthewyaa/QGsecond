#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include"LinkStack.h" 
#include<iostream>
//#include"Դ.cpp"

int main()
{
	
	//system("cls");
	int b;
	int a = 0;
	LinkStack* link = new LinkStack;
	link->count = 0;
	link->top = NULL;
	while (1)
	{
		printf(" * ********************ϵͳ���ܲ˵� * ********************\n");
		printf(" ------------------------------------------------------\n");
		printf("* **********************************************\n");
		printf("	*1.��ʼ��ջ * *2.�ж�ջ�Ƿ�Ϊ�� *\n");
		printf("***********************************************\n");
		printf("	3.�õ�ջ��Ԫ�� * *4.���ջ *\n");
		printf(" ***********************************************\n");
		printf("	*5.����ջ * *6.���ջ���� *\n");
		printf(" ***********************************************\n");
		printf("		*7.��ջ * *8.��ջ *\n");
		printf(" ***********************************************\n");
		printf("------------------------------------------------------\n");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
		{
			initLStack(link);
			a = 1;
		}
		break;
		case 2:
		{
			if (a = 1)
				isEmptyLStack(link);
		}
		break;
		case 3:
		{
			if (a = 1)
			{
				ElemType* e = new ElemType;
				getTopLStack(link, e);
			}
		}
		break;
		case 4:
		{
			if (a = 1)
			{
				clearLStack(link);
			}
		}
		break;
		case 5:
		{
			if (a = 1)
			{
				destroyLStack(link);
			}
		}
		break;
		case 6:
		{
			int* length = new int;
			if (a = 1)
			{
				LStackLength(link, length);
			}
		}
		break;
		case 7:
		{
			if (a = 1)
			{
				printf("���������ݣ�\n");
				ElemType* e = new ElemType;
				pushLStack(link, *e);
			}
		}
		break;
		case 8:
		{
			if (a = 1)
			{
				ElemType* e = new ElemType;
				popLStack(link, e);
			}
		}
		break;
		default:
		{
			printf("������������������\n");
		}
		break;
		}
		system("pause");
	}
		return 0;
}
