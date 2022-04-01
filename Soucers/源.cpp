#define  _CRT_SECURE_NO_WARNINGS
#include "LinkStack.h" 
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
//链栈
LinkStack s;
//初始化栈
Status initLStack(LinkStack* s)		
{
	s->count = 0;					//清空栈
	s->top = new StackNode;			//top指向一个新的结点
	s->top->data = 0;
	s->top->next = NULL;
	printf("初始化完成\n");
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
	if (s->count == 0)
	{
		printf("链表为空,无栈顶元素\n");
		return SUCCESS;
	}
	else
	{
		*e = s->top->data;
		return SUCCESS;
	}
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
Status LStackLength(LinkStack* s, int *length)
{
	if (s->count == 0)
	{
		printf("栈为空\n");
		return SUCCESS;
	}
	else
	{
		*length = s->count;
		return SUCCESS;
	}
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

	StackNode* p = new StackNode;
	if (s->count == 0)
	{
		printf("这是一个空栈\n");
		return SUCCESS;
	}
	else
	{
		while (p->next)
		{
			*data = s->top->data;
			if (p->next == s->top)
			{
				p->next = NULL;
				s->count--;
				free(p);
				break;
			}
			p = p->next;
			printf("已出栈\n");
		}
		return SUCCESS;
	}
}

