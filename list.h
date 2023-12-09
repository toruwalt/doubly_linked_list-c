#ifndef LIST_H
#define LIST_H

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

struct node* addToEmptyList(struct node *head, int data);

#endif
