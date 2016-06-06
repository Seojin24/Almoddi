#include <stdio.h>
#define MAXN 10

int pay(int money, int bills[], int n);

int main()
{
	int bills[MAXN];
	int num, money = 0;

	printf("input number of bills: ");
	scanf("%d", &num);
	
	printf("input bills: ");
	for ( int i=0; i<num; i++)
	{
		scanf("%d", &bills[i]);
		//printf("%d ", bills[i]); OK
	}

	printf("input money: ");
	scanf("%d", &money);

	//printf("before function\n"); OK

	printf("%d\n", pay( money, bills, num));
	
	int d;
	scanf("%d", &d);

	return 0;
}

int pay(int money, int bills[], int n)	//n가지의 지폐로 나누어 낼 방법
{
	int count = 0;
	int i, t;

	//printf("start function\n");
	
	if (n == 1)
	{
		//printf("money= %d\n", money); OK
		//printf("bill= %d\n", bills[0]); OK
		if(money%bills[0] == 0)
			return 1;
		else
			return 0;
	}
	else
	{
		t = money / bills[n-1];
		printf("money: %d, bill: %d, t: %d\n", money, bills[n-1], t);
		for (i =0; i<=t; i++)
		{
			//money = money - bills[n - 1] * i;	이상하게 이렇게 하면 에러가 남. 도무지 이해가 안됨..
			//count += pay(money, bills, n - 1);

			count += pay( money - bills[n - 1] * i, bills, n - 1);	//이렇게 하면 에러 안남

		}
		return count;
	}

}