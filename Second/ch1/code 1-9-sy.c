#include <stdio.h>
#define MAXN 200

long long fibo2( int n )
{
	static long long memo[MAXN];

	if (memo[n] > 0) //저장돼 있으면 바로 출력 
		return memo[n];

	if ( n ==1 || n==2 )
		return memo[n] = 1; //return과 동시에 배열에도 저장하기.

	else 
		return memo[n] = fibo2(n - 1) + fibo2(n-2);
}

long long fibo3( int n ) 
{
	//핵심 원리: fi를 계산하는데 필요한 것은 사실 바로 앞의 두 항목 fi-1, fi-2 뿐임.
	long long i, f_i, f_i_1, t;

	if ( n==1 || n==2 )
		return 1;
	f_i_1 = 1;
	f_i = 1;

	for (i=3; i<=n; i++)
	{
		t = f_i;
		f_i= f_i_1 + f_i;
		f_i_1 = t;
	}
	return f_i;
}