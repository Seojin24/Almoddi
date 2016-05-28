/*
  p74 추가문제 1.8
  1.b번 풀이

  파스칼의 삼각형
  삼각형의 n번째 줄 k번째 숫자는  n-1 C k-1 이 된다.
  nCr  = n-1 C r-1 + n-1 C r 성립

  k를 입력받으면 파스칼의 삼각형을 k번째 줄까지 출력하는 프로그램 작성
*/

#include <stdio.h>

long long Combination(int n, int r)
{
  static long long memo[100][100];

  if(memo[n][r]>0)
    return memo[n][r];
  if(r==0 || n==r)
    return memo[n][r]=1;

  return memo[n][r]=Combination(n-1,r-1)+Combination(n-1,r);
}

void print_trianlge(int n)
{
  int i=0,j=0,k=0;
  int space = n-1;
  for(i=1;i<=n;i++)
  {
    for(k=0;k<space;k++)
      printf(" ");
    space--;
    for(j=1;j<=i;j++) // n번째 줄에는 최대 n개의 원소 있음
    {
      printf("%lld ",Combination(i-1,j-1));
    }
    printf("\n");
  }
}

int main()
{
  int k=0;
  printf("input k : ");
  scanf("%d",&k);
  print_trianlge(k);
}
