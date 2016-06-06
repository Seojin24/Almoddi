#include <stdio.h>
#include <string.h>

int func1( int n, int k);

int main()
{
	int n, k;

	printf("n: ");
	scanf("%d", &n);
	printf("k: ");
	scanf("%d", &k);

	printf("%d\n", func1(n, k));

	//scanf("%d", &n);
	return 0;
}

int func1(int n, int k)
{
	int sum=0;
	int i, j;

	for (i=1; i<=n; i++)
	{
		int part = i; 
		for ( j=1; j<k; j++ )
		{	
			part *= i;	
		}
		printf("part: %d\n",part);
		sum += part;
	}

	return sum;
}

int func2( int n, int k)
{
	if ( n==1 )
		return 1;
	
	
}