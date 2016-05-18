/*
	스택 2개로 큐를 구성하는 방법
	디자인 : 단순히 스택 2개를 연결해본다
		스택1 에서 pop 한 것을 스택2의 push로 넣어주면... 이것은... 큐다..!
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node *next;
}NODE;

NODE * head, *tail;	// 스택 1
NODE * head2, *tail2; // 스택 2
int queue_count = 0;

void Init()
{
	head = (NODE *)malloc(sizeof(NODE));
	tail = (NODE *)malloc(sizeof(NODE));
	head -> next = tail;
	tail -> next = NULL;

	head2 = (NODE *)malloc(sizeof(NODE));
	tail2 = (NODE *)malloc(sizeof(NODE));
	head2 -> next = tail2;
	tail2 -> next = NULL;
}

void Push(int num)
{
	NODE *temp = (NODE *)malloc(sizeof(NODE));
	temp->data = num;
	if(head->next->next == NULL)
	{
		// 초기 스택 비어있는 상태
		head->next = temp;
		temp->next = tail;
	}
	else
	{
		temp->next = head->next;
		head->next = temp;
	}
	queue_count++;
}

int Pop()
{
	int ret=0;
	NODE *temp = (NODE *)malloc(sizeof(NODE));
	if(head->next->next == NULL)
	{
		printf("EMPTY!\n");
		return 0;
	}
	else
	{
		temp = head->next;
		ret = temp->data;
		head -> next = temp->next;
	}
	free(temp);
	queue_count--;
	return ret;
}

void queuePush(int num)
{
	Push(num);
}

int queuePop()
{
	// 스택1에 있던 것 집어 넣음.
	int i=0,ret=0,check=queue_count; // 스택2에 보내기전의 queue_count 저장해야 됨
	NODE *ptr = (NODE *)malloc(sizeof(NODE));
	for(i=0;i<check;i++)
	{
		NODE *temp = (NODE *)malloc(sizeof(NODE));
		temp->data = Pop();
		if(head2->next->next == NULL)
		{
			// 초기 스택 비어있는 상태
			head2->next = temp;
			temp->next = tail2;
		}
		else
		{
			temp->next = head2->next;
			head2->next = temp;
		}
	}

	// 스택2에서 Pop을 해줌
	if(head2->next->next == NULL)
	{
		printf("EMPTY!\n");
		return 0;
	}
	else
	{
		ptr = head2->next;
		ret = ptr->data;
		head2->next = ptr->next;

	}
	free(ptr);
	return ret;
}

int main()
{

	int num =0;
	Init();
	while(1)
	{
		printf("insert num : ");
		scanf("%d",&num);
		if(num<0)
		{
			printf("EXIT\n");
			return 0;
		}
		else if(num==0)
		{
			printf("[%d]\n",queuePop());
		}
		else
		{
			Push(num);
		}
	}
}
