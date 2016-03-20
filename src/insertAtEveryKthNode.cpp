/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if(!head) return NULL;
	if (K < 1) return NULL;

	int i = 0;

	struct node *p = head;

	while (p != NULL)
	{
		if (i == K-1)
		{
			struct node *temp = (struct node*)malloc(sizeof(struct node));
			temp->num = K;
			temp->next = p->next;
			p->next = temp;
			p = p->next;
			i = -1;
		}
		p = p->next;
		i++;
	}

	return head;
}
