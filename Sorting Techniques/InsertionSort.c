
#include <stdio.h>

void insertionSort(int arr[], int size)
{
	for(int i=1; i<size; i++) {
		int j=i-1;
		int min=arr[i];
		while(j>=0 && arr[j]>min) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j+1]=min;
	}
}

int main() {
	int size =0;
	printf("Enter value of size: ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter values of array: ");
	for (int i = 0; i < size; i++)
		scanf("%d",&arr[i]);

	printf("Value of array:");
	for (int i = 0; i < size; i++)
		printf("%d\t",arr[i]);
	printf("\n");

	insertionSort(arr, size);
  printf("Sorted array:");
   for (int i = 0; i < size; i++)
       printf("%d\t",arr[i]);
  printf("\n");

  return 0;
}
