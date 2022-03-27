#define  _CRT_SECURE_NO_WARNINGS
#include "LinkStack.h" 
#include<stdio.h>
#include<stdlib.h>
//��ջ
LinkStack s;
//��ʼ��ջ
Status initLStack(LinkStack* s)		
{
	s->count = 0;					//���ջ
	s->top = new StackNode;			//����һ�����top
	StackNode* top;					//��ʼ�����
	top->data = 0;
	top->next = NULL;
	return SUCCESS;
}

//�ж�ջ�Ƿ�Ϊ��
Status isEmptyLStack(LinkStack* s)
{
	if (s->count = 0)
		return SUCCESS;
	else
		return ERROR;
}

//�õ�ջ��Ԫ��
Status getTopLStack(LinkStack* s, ElemType* e)
{

	*e = s->top->data;
	return SUCCESS;
}

StackNode* base = NULL;
//���ջ
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

//����ջ
Status destroyLStack(LinkStack* s)
{
	clearLStack(s);
	free(s);
	return SUCCESS;
}

//���ջ����
Status LStackLength(LinkStack* s, int length)
{
	length = s->count;
	return SUCCESS;
}

//��ջ
Status pushLStack(LinkStack* s, ElemType data)
{
	
	StackNode*p = new StackNode;
	p->data = data;
	p->next = s->top;			//�޸�ջ��ָ��λ��
	s->top = p;
	s->count++;
	return SUCCESS;
}

//��ջ
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

