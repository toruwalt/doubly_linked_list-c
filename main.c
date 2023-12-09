#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->prev = NULL;
	head->data = 8;
	head->next = NULL;

	return(0);
}
