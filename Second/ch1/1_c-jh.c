/*
  p74 추가문제 1.8
  1.c번 풀이

  n과 m을 입력받아서 (n >= m) m개의 자연수를 더해서 n을 만드는 모든 방법 출력

(풀이)
  n을 입력하면, 쓸수 있는 자연수 들은
  1, 2, ... , n-(m-1); (왜냐면 최고 큰수가 나올 경우는 그 수말고 나머지는 m-1개는 모두 1)

  금액 맞추기 문제를 응용하면 될 것 같음...

*/

#include <stdio.h>

int add(int n,int m)
{

  int i=0,j=0,k=0;
  int count = 0;
  int arr[100]={0,};

  for(i=0;i<m;i++)
    arr[i]=i+1;

  for(i=0;i<m;i++)
  {
    for(j=0;j<m;j++)
    {
      for(k=0;k<m;k++)
      {
        if((arr[i]+arr[j]+arr[k])==n)
        {
          printf("%d %d %d\n",arr[i],arr[j],arr[k]);
          count++;
        }
      }
    }
  }

  return count;
}


int main()
{
  int n=0,m=0;
  printf("input n : ");
  scanf("%d",&n);
  printf("input m : ");
  scanf("%d",&m);
  printf("\nTotal Count : %d\n",add(n,m));
}
