#define  _CRT_SECURE_NO_WARNINGS

#include "LinkStack.h" 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf(" * ********************ϵͳ���ܲ˵� * ********************\n");
	printf(" ------------------------------------------------------\n");
	printf("* **********************************************\n");
	printf("*1.��ʼ��ջ * *2.�ж�ջ�Ƿ�Ϊ�� *\n");
	printf("***********************************************\n");
	printf("3.�õ�ջ��Ԫ�� * *4.���ջ *\n");
	printf(" ***********************************************\n");
	printf("*5.����ջ * *6.���ջ���� *\n");
	printf(" ***********************************************\n");
	printf("*7.��ջ * *8.��ջ *\n");
	printf(" ***********************************************\n");
	printf("------------------------------------------------------\n");
	int a = 0;
	scanf("%d", &a);
	int b = 0;
	StackNode* s = new StackNode;
	switch (a)
	{
	case 1:
		Status initLStack(LinkStack * s);
		break;
	case 2:
		Status isEmptyLStack(LinkStack * s);
		break;
	case 3:
		Status getTopLStack(LinkStack * s, ElemType * e);
		
		break;
	case 4:
		Status clearLStack(LinkStack * s);
		break;
	case 5:
		Status destroyLStack(LinkStack * s);
		break;
	case 6:
		Status LStackLength(LinkStack * s, int* length);
		printf("�ѳ�ջ");
		break;
	case 7:
		Status pushLStack(LinkStack * s, ElemType data);
		printf("����0����\n");
			do
				scanf("%d", s->data);
			while (s->data != 0);
			break;
	case 8:
			Status popLStack(LinkStack * s, ElemType * data);
			break;
	
	}
}