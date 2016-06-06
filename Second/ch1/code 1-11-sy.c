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

int pay(int money, int bills[], int n)	//n������ ����� ������ �� ���
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
			//money = money - bills[n - 1] * i;	�̻��ϰ� �̷��� �ϸ� ������ ��. ������ ���ذ� �ȵ�..
			//count += pay(money, bills, n - 1);

			count += pay( money - bills[n - 1] * i, bills, n - 1);	//�̷��� �ϸ� ���� �ȳ�

		}
		return count;
	}

}