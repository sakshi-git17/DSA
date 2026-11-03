#include <stdio.h>
void BubbleSort(int N,int arr[N])
{
 for (int i = 0;i < N; i++)
  {
    for(int j = 0;j < N-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
       int temp=0;
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;

      }

    }

  }
}
int main()

{
int N=0;
  printf("Enter Length of arr");
  scanf("%d",&N);
int arr[N],i;
  printf("Enter Array elements");
   for(i=0;i<N;i++)
   {
    scanf("%d",&arr[i]);
   }
BubbleSort(N,arr);
printf("Sorted array elements:");
  for(i=0;i<N;i++)
  {
   printf("%d ", arr[i]);
  }
return 0;
}
