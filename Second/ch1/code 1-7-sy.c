#include <stdio.h>

long long choose2(int n, int r)
{
	if (r == 0 || n == r)
		return 1;
	else
		return (choose(n - 1, r - 1) + choose(n - 1, r));
}

/*int main()
{
	printf("%lld\n", choose(30, 10));
	printf("%lld\n", choose(50, 20));
	return 0;
}*/