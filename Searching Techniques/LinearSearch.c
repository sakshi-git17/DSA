#include<stdio.h>
int main(){
   int arr[50],n,key;
   printf("Enter the no. of elements");
   scanf("%d",&n);
   printf("Enter the array elements");
   for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);

   }
  printf("Enter the element to search");
  scanf("%d",&key);
  for( int i=0;i<n;i++){
   if (arr[i]==key){

       printf("Element found at position %d",i+1);

       return 0;

    }
  }
   printf("Element not found");
   return 0;
}
