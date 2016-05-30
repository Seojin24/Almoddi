/*
  p74 추가문제 1.8
  1.d번 풀이

  1, 2, ... , n 의 순열이 있을 때 순열의 수의 쌍에서 크기가 큰 수가 앞에 있으면
  이쌍은 역정되어 있다고 한다.
  예 : 1 3 5 4 2
  역전된 순서쌍 : (3,2) (5,4) (4,2)

  O(N^2) : 단순히 원소 하나 볼때마다 나머지 전체 원소보다 큰지 확인

  Recursive 버전
  첫번째 원소(A)와 두번째 원소(B)비교
  A<=B : Recursive(N-1) 과정으로 넘어감
  A>B : Recursive(N-1)+1 과정으로 넘어감
*/

#include <stdio.h>

int check_iter(int arr[], int length)
{
  int i=0,j=0,count=0;

  for(i=0;i<length-1;i++)
  {
    for(j=i+1;j<length;j++)
    {
      if(arr[i]>arr[j])
      {
        // 역전된 순서쌍 발견
        printf("(%d , %d) ",arr[i],arr[j]);
        count++;
      }
    }
  }

  return count;
}

int check_recur(int arr[], int length,  int index, int count)
{
  int i=0, count=0;
  for(i=index;i<length;i++)
  {
    
  }

  /*
  if(num == length)
    return count;

  if(arr[num]>arr[num+1])
  {
    count++;
    printf("(%d %d) ",arr[num], arr[num+1]);
    return check_recur(arr,length,num+1,count);

  }
  else
  {
    return check_recur(arr,length,num+1,count);
  }
  */
}

int main(void)
{
  int i=0,num=0;
  int arr[100]={0,};
  printf("input the # of sequence : ");
  scanf("%d",&num);
  printf("input the number sequence : ");

  for(i=0;i<num;i++)
    scanf("%d",&arr[i]);

  printf("\ntotal count[Iter] : %d \n",check_iter(arr,num));
  printf("\ntotal count[Recur] : %d \n",check_recur(arr,num,0,0));
  return 0;
}
