#include <stdio.h>
#define MAXN 50

int pay( int m, int bills[], int n)
{
	if (n == 1)
	{
		if ( m%n==0 )	return 1;
		else			return	0;
	}
	else if ( n>=2 )
	{
		
	}
}


int main()
{
	int n, i, money;
	int bills[MAXN];
	
	printf("input numbers of bills: ");
	scanf( "%d", &n);
	printf("input bills: ");
	for ( i=0; i<n; i++)
	{
		scanf("%d", &bills[i]);
	}
	printf("input money: ");
	scanf( "%d", &money);

	printf( "%d\n", pay(money, bills, n));

	return 0;
}