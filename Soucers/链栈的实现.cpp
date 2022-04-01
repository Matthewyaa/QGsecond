#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include"LinkStack.h" 
#include<iostream>
//#include"源.cpp"

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
		printf(" * ********************系统功能菜单 * ********************\n");
		printf(" ------------------------------------------------------\n");
		printf("* **********************************************\n");
		printf("	*1.初始化栈 * *2.判断栈是否为空 *\n");
		printf("***********************************************\n");
		printf("	3.得到栈顶元素 * *4.清空栈 *\n");
		printf(" ***********************************************\n");
		printf("	*5.销毁栈 * *6.检测栈长度 *\n");
		printf(" ***********************************************\n");
		printf("		*7.入栈 * *8.出栈 *\n");
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
				printf("请输入数据：\n");
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
			printf("输入有误，请重新输入\n");
		}
		break;
		}
		system("pause");
	}
		return 0;
}
