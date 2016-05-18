/*
	길이가 n인 정수배열 a[], 위치 p가 주어짐
	이때, 0<=i<=p<=j<n 이면서 a[i]+a[i+1]+ ... + a[j]를 최대로 하는 i,j구하는 프로그램 작성해라
	즉, 어떤 위치를 포함하는 배열의 부분합이 최대가 되도록 하는 위치를 구해라
*/

#include <stdio.h>
#define size 5

void FindMaxSum(int arr[],int p)
{
	int i,j=0;
	int sum=0;
	int max=0;
	int max_i,max_j=0;

	for(i=p;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			sum += arr[j];
			if(max<sum)
			{
				max = sum;
				max_i=i;
				max_j=j;
			}
		}
		sum=0;
	}
	printf("(i,j) : [%d] , [%d]\n",max_i,max_j);
}

int main()
{
	int p=0;
	int arr[size]={1,2,-3,5,8};
	printf(" p : ");
	scanf("%d",&p);
	FindMaxSum(arr,p);
}
