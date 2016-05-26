#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int key;
	struct _node* next;
}node_t;

/*node_t *head = NULL;
node_t *tail = NULL;*/

void print_list( node_t* from )
{
	node_t *node;

	node = from;
	while (node != NULL)
	{
		printf("%d", node->key);
		node = node->next;
	}
}