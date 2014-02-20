/*
 * ReverseLinkedList.cpp
 *
 *  Created on: Feb 20, 2014
 *      Author: goran
 */
#include <iostream>
using namespace std;

#include "ReverseLinkedList.h"

LLNode* reverseLL(LLNode *p)
{
	LLNode *t0, *t1, *t2;

	if ( !p ) return 0;

	t0 = 0;
	t1 = p;
	t2 = t1->next;
	while (t2)
	{
		t1->next = t0;
		t0 = t1;
		t1 = t2;
		t2 = t1->next;
	}
	t1->next = t0;
	return t1;
}

LLNode* reverseLLwithRecursion(LLNode *p)
{
	if (p == 0 || p->next == 0)
		return p;
	LLNode *head = reverseLLwithRecursion(p->next);
	p->next->next = p;
	p->next = 0;
	return head;
}

