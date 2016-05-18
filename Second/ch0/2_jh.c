/*
	int형 배열의 모든 원소의 값이 k이면 1, 아니면 0을 반환하는 all_is()함수를 작성하라
	배열, 배열의 길이, 정수 k를 인자로 받음
*/

#include <stdio.h>

int all_is(int arr[], int len, int k)
{
	int i=0;
	int check=0;

	for(i=0;i<len;i++)
	{
		if(arr[i]!=k)
		{
			check=1;
			break;
		}
	}
	return check;
}

void print_arr(int arr[], int len)
{
	int i=0;
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int arr1[5]={3,3,3,3,3};
	int arr2[5]={1,2,3,4,5};
	printf("arr1 : ");
	print_arr(arr1,5);
	printf("arr2 : ");
	print_arr(arr2,5);

	printf("TEST1: %d\n",all_is(arr1,5,3));
	printf("TEST2: %d\n",all_is(arr2,5,3));
}
