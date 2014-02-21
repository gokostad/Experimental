/*
 * CirkularLinkedList.h
 *
 *  Created on: Feb 19, 2014
 *      Author: goran
 */

#ifndef CIRKULARLINKEDLIST_H_
#define CIRKULARLINKEDLIST_H_

struct LLNode {
	int i;
	LLNode *next;
};

bool isCircular(LLNode *ll);
bool isCircular1(LLNode *ll);
bool isCircular2(LLNode *ll);

#endif /* CIRKULARLINKEDLIST_H_ */
