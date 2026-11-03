#include <stdio.h>

int main()
{
    //To accept fisrt array from user
   int n1=0,i=0;
   printf("Enter first array size");
   scanf("%d",&n1);
   int a[n1];
   printf("Enter first array elements");
   for(i=0;i<n1;i++)
   {
       scanf("%d",&a[i]);
   }


   //To accept second array from user
   int n2=0,j=0;
   printf("Enter second array size");
   scanf("%d",&n2);
   int b[n2];
   printf("Enter second array elements");
   for(j=0;j<n2;j++)
   {
       scanf("%d",&b[j]);
   }

   int c[n1+n2];
   int k=0;
   i=0; //after accepting values from user i variable containt value n1 so to travel array from 0 again
   j=0;

   //To insert values in array c[] till length of smallest array among two arrays
   while(i<n1 && j<n2)
   {
       if(a[i]<b[j])
       {
           c[k]=a[i];
           i++;
           k++;
       }
       else
       {
            c[k]=b[j];
           j++;
           k++;
       }
   }

   //if array a[] still contains some elements directly copy remaining elements
   while(i<n1)
   {
       c[k]=a[i];
       i++;
       k++;
   }

   //if array a[] still contains some elements directly copy remaining elements
    while(j<n2)
   {
       c[k]=b[j];
       j++;
       k++;
   }

   //To Display sorted merged array
   for(k=0;k<n1+n2;k++)
   {
       printf("%d\t",c[k]);
   }
    return 0;
}
