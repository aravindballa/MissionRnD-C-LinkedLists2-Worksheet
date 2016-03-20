/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if(!head) return -1;

	int len = 0;

	struct node *q = head;
	struct node *p = head;

	if (head != NULL)
	{
		while (p != NULL && p->next != NULL)
		{
			if (p->next->next == NULL){
				len = 1;
				break;
			}
			p = p->next->next;
			q = q->next;
		}
		
		if (len == 1)
			return (q->num + q->next->num) / 2;
		return q->num;
	}
}
