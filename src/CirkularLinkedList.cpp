/*
 * Algorithms for finding is single linked list circular or acyclic
 */
#include <iostream>
#include <forward_list>

using namespace std;

#include "CirkularLinkedList.h"

bool isCircular(LLNode *ll)
{
	LLNode *pSlow, *pFast;

	if (!ll)
		return false;
	pSlow = ll;
	pFast = ll->next;
	while (pSlow)
	{
		if (!pFast || !pFast->next)
		{
			return false;
		}
		else if (pFast == pSlow || pFast->next == pSlow)
		{
			return true;
		}
		else
		{
			pSlow = pSlow->next;
			pFast = pFast->next->next;
		}
	}
	return false;
}

bool isCircular1(LLNode *ll)
{
	LLNode *pSlow, *pFast;

	if (!ll)
		return false;

	pSlow = ll;
	pFast = ll;
	while (pSlow)
	{
		pSlow = pSlow->next;
		pFast = pFast->next;
		if (pFast && pFast->next)
		{
			pFast = pFast->next;
		}
		else
			break;
		if (pFast == pSlow)
		{
			return true;
		}
	}
	return false;
}


bool isCircular2(LLNode *ll)
{
	LLNode *pSlow, *pFast;

	if (!ll)
		return false;

	pSlow = ll;
	pFast = ll->next;
	while (pFast && pFast->next)
	{
		if (pFast == pSlow || pFast->next == pSlow)
			return true;
		pSlow = pSlow->next;
		pFast = pFast->next->next;
	}
	return false;
}

