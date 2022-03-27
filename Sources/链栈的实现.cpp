#define  _CRT_SECURE_NO_WARNINGS

#include "LinkStack.h" 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf(" * ********************系统功能菜单 * ********************\n");
	printf(" ------------------------------------------------------\n");
	printf("* **********************************************\n");
	printf("*1.初始化栈 * *2.判断栈是否为空 *\n");
	printf("***********************************************\n");
	printf("3.得到栈顶元素 * *4.清空栈 *\n");
	printf(" ***********************************************\n");
	printf("*5.销毁栈 * *6.检测栈长度 *\n");
	printf(" ***********************************************\n");
	printf("*7.入栈 * *8.出栈 *\n");
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
		printf("已出栈");
		break;
	case 7:
		Status pushLStack(LinkStack * s, ElemType data);
		printf("输入0结束\n");
			do
				scanf("%d", s->data);
			while (s->data != 0);
			break;
	case 8:
			Status popLStack(LinkStack * s, ElemType * data);
			break;
	
	}
}