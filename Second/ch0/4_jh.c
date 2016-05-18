#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
   int key;
   struct _node *next;
}NODE;

int flag=0;
NODE *head, *tail;

void Init()
{
   head = (NODE *)malloc(sizeof(NODE));
   tail = (NODE *)malloc(sizeof(NODE));
   head->next=tail;
   tail->next=NULL;
}

void Push(int num)
{
   flag=0;
   NODE * temp = (NODE *)malloc(sizeof(NODE));
   temp->key=num;
   if(head->next->next==NULL)   // first
   {
      head->next=temp;
      temp->next=tail;
   }
   else
   {
      temp->next = head->next;
      head->next = temp;
   }
}

int Pop()
{
   int ret=0;
   if(head->next->next == NULL)
   {
      printf("STACK EMPTY!\n");
      flag=1;
   }
   else
   {
      NODE *index;
      NODE *temp = (NODE *)malloc(sizeof(NODE));
      temp = head->next;
      ret = temp->key;
      head->next = temp->next;
      free(temp);
   }

   return ret;
}


int main()
{
   int num=0;
   Init();
   while(1)
   {
      printf("input number : ");
      scanf("%d",&num);
      if(num<0)
      {
         printf("EXIT\n");
         return -1;
      }
      else if(num==0&&flag==0)
         printf("[%d]\n",Pop());
      else
         Push(num);
   }
   return 0;
}
