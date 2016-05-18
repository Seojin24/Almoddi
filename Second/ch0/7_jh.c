/*
	10진수 정수를 입력받아 이진수를 출력하라
*/
#include <stdio.h>

int ConvertBin(int num)
{
	int bin=0;
	int level=1;
	while(num>0)
	{
		if(num%2==0)
		{
			level = level*10;
		}
		else
		{
			bin = bin + level;
			level = level*10;
		}
		num = num/2;
	}
	return bin;
}

int main()
{
	int num=0;
	while(1)
	{
		printf("num : ");
		scanf("%d",&num);
		if(num<-1)
			return 0;
		else
			printf("%d\n",ConvertBin(num));
	}
	return 0;
}
