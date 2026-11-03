#include<stdio.h>
void selectionSort(int size,int a[]){
  for(int i=0;i<size-1;i++){
    int min=i;
    for(int j=i+1;j<size;j++){
      if(a[min]>a[j]){
        min=j;
      }
    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
}
int main(){
  int size=0;
  printf("Enter a size of array: ");
  scanf("%d",&size);
  int a[size];
  printf("Enter value of Array\n");
  for(int i=0;i<size;i++){
    printf("%d:",i+1);
    scanf("%d",&a[i]);
  }
 /* printf("values of array:");
  for(int i=0;i<size;i++){
    printf("%d\t",a[i]);
  }*/
  selectionSort(size,a);
  printf("\nSorted array:");
  for(int i=0;i<size;i++){
    printf("%d\t",a[i]);
  }
}
