#define  _CRT_SECURE_NO_WARNINGS
#include "LinkStack.h" 
#include<stdio.h>
#include<stdlib.h>
//链栈
LinkStack s;
//初始化栈
Status initLStack(LinkStack* s)		
{
	s->count = 0;					//清空栈
	s->top = new StackNode;			//建立一个结点top
	StackNode* top;					//初始化结点
	top->data = 0;
	top->next = NULL;
	return SUCCESS;
}

//判断栈是否为空
Status isEmptyLStack(LinkStack* s)
{
	if (s->count = 0)
		return SUCCESS;
	else
		return ERROR;
}

//得到栈顶元素
Status getTopLStack(LinkStack* s, ElemType* e)
{

	*e = s->top->data;
	return SUCCESS;
}

StackNode* base = NULL;
//清空栈
Status clearLStack(LinkStack* s)
{	
	StackNode* p = NULL;
	s->count = 0;
	s->top = base;
	p = base->next;
	while (p)
	{
		p = base->next;
		base = p;
	}
	return SUCCESS;
}

//销毁栈
Status destroyLStack(LinkStack* s)
{
	clearLStack(s);
	free(s);
	return SUCCESS;
}

//检测栈长度
Status LStackLength(LinkStack* s, int length)
{
	length = s->count;
	return SUCCESS;
}

//入栈
Status pushLStack(LinkStack* s, ElemType data)
{
	
	StackNode*p = new StackNode;
	p->data = data;
	p->next = s->top;			//修改栈顶指针位置
	s->top = p;
	s->count++;
	return SUCCESS;
}

//出栈
Status popLStack(LinkStack* s, ElemType* data)
{
	StackNode* p ;
	
	while (p)
	{
		*data = s->top->data;
		p = p->next;
		free(p);
	}
	return SUCCESS;
}

