#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int key;
	struct _node* next;
}node_t;

node_t *head = NULL;
node_t *tail = NULL;

void print_list2(node_t* from)
{
	if (from = NULL)
		return;

	printf("%d", from->key);
	print_list2(from->next);
}