/*
	추가문제 1번
	int형 배열 원소를 모두 출력하는 print_arr()함수를 만들어라
	배열과 배열의 길이를 인자로 받음
*/
#include <stdio.h>

void print_arr(int arr[], int len)
{
	int i=0;
	for(i=0;i<len;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void print_arr1(int arr[], int len)
{
	int i=0;
	for(i=0;i<len;i++)
		printf("%d ",*(arr+i));
	printf("\n");
}

int main()
{
	int arr[5]={1,2,3,4,5};
	print_arr(arr,5);
	print_arr1(arr,5);
	return 0;
}
