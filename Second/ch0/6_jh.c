/*
	다음 코드를 실행하면 결과는 어떻게 될까?
	예상 답 : N*(N+1)/2 + (N-1)(N)/2 + (N-2)(N-1)/2 + ... + 1
*/
#include <stdio.h>

int main()
{
	int i,j,k,x,N=0;
	printf("N : ");
	scanf("%d",&N);

	for(i=0;i<N;i++)
		for(j=i;j<N;j++)
			for(k=j;k<N;k++)
				x++;

	printf("%d\n",x);
	return 0;
}
