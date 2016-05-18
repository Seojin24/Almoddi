/*
	정수를 입력받은 후, 이진수로 변환하여 1의 갯수를 세는 프로그램
*/

#include <stdio.h>

void print_binary(int num)
{
	// 이진수 거꾸로 출력

	while(num!=0)
	{
		if(num%2==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		num = num/2;
	}
	printf("\n");
}

int print_binary2(int num)
{
	int bin = 0;
	int level = 1;
	int count = 0;

	while(num!=0)
	{
		if(num%2!=0)
		{
			bin = bin + level;
			level = level*10;
			count++;
		}
		else
			level = level*10;
		num = num/2;
	}

	printf("%d\n",bin);
	return count;
}


int main()
{
	int num=0;
	while(1)
	{
		printf("input num : ");
		scanf("%d",&num);
		printf("1의 갯수: [%d]\n",print_binary2(num));
	}
	return 0;
}
