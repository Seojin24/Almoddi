#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	time_t start, end;

	start = clock();

	int bills[6] = {50, 20, 10, 5, 2, 1};
	int count = 0;	//경우의 수
	int money = 100;//지불하려는 금액
	int i, j, k, l, m;

	for ( i = money; i>=0; i-=bills[0])
		for ( j = i; j>=0; j-=bills[1])
			for ( k = j; k>=0; k-=bills[2])
				for ( l = k; l>=0; l-=bills[3])
					for ( m = l; m>=0; m-=bills[4]) 
						if (m%bills[5] == 0)
							count++;
	printf("count = %d\n", count);

	end = clock();
	
	printf("걸린 시간 : %f\n", (end-start)/CLOCKS_PER_SEC);
	getchar();
	return 0;

}