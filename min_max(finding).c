#include<stdio.h>

int a[100],max,min;

void find(int i,int n)
{
   int mid,max1,min1;

   if(i==n)
        max=min=a[i];
   else if(i==n-1)
    if(a[i]>=a[n-1])
   {
       max=a[n];
       min=a[i];
   }
   else
   {
       max=a[i];
       min=a[n];
   }
   else
    {
        mid=(i+n/2);
        find(i,mid);
        max1=max;
        min1=min;
        find(mid+1,n);
        if(min>min1)
            min=min1;
        if(max<max1)
            max=max1;
    }
}
 int main()
 {
     int i,n;

     printf("enter size of array:  ");
     scanf("%d",&n);

     printf("enter elements in array-->\n");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);

     max=min=a[0];
     find(1,n-1);

     printf("minimum: %d",min);
     printf("\nmaximum: %d",max);

     return 0;
 }
