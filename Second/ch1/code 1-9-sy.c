#include <stdio.h>
#define MAXN 200

long long fibo2( int n )
{
	static long long memo[MAXN];

	if (memo[n] > 0) //����� ������ �ٷ� ��� 
		return memo[n];

	if ( n ==1 || n==2 )
		return memo[n] = 1; //return�� ���ÿ� �迭���� �����ϱ�.

	else 
		return memo[n] = fibo2(n - 1) + fibo2(n-2);
}

long long fibo3( int n ) 
{
	//�ٽ� ����: fi�� ����ϴµ� �ʿ��� ���� ��� �ٷ� ���� �� �׸� fi-1, fi-2 ����.
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