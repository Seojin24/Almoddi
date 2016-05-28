/*
  p74 추가문제 1.8
  1.a번 풀이

  n 과 k를 입력받아서,
  1^k = 1^k + 2^k + 3^k + ... + n^k 를 구하는 프로그램을 재귀적/비재귀적으로 풀이

*/

#include <stdio.h>

int sol_recur(int n, int k)
{
  int i=0,count=1;
  if(n==1)
    return 1;
  else
  {
    for(i=0;i<k;i++)
      count*=n;
    return sol_recur(n-1,k)+count;
  }

}

int sol_iter(int n, int k)
{
  int result = 0;
  int count = 0;
  int i,j;

  for(i=1;i<=n;i++)
  {
    count = 1 ;
    for(j=0;j<k;j++)
    {
      count *= i;
    }
    result += count;
  }

  return result;
}

int main()
{
  int n=0,k=0;
  printf("input n : ");
  scanf("%d",&n);
  printf("input k : ");
  scanf("%d",&k);

  // 재귀적
  printf("Recursive : %d\n",sol_recur(n,k));
  // 비재귀적
  printf("Not Recursive : %d\n",sol_iter(n,k));

  return 0;
}
