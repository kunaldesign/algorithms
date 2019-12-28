#include<stdio.h>

 int main()
 {
     int i,low,high,middle,n,search,array[100];

     printf("enter number of elements\n");
     scanf("%d",&n);

     printf("enter %d integers\n",n);

     for(i=0;i<n;i++)
        scanf("%d",&array[i]);

     printf("enter value to find\n");
     scanf("%d",&search);

     low=0;
     high=n-1;
     middle=(low+high)/2;

     while(low<=high)
     {
         if(array[middle]<search)
            low=middle+1;
         else if (array[middle]==search)
         {
             printf("%d found at locaton %d \n",search,middle);
             break;
         }
         else
            high=middle-1;

         middle=(low+high)/2;
     }
     if(low>high)
        printf("not found %d isn't present in the list..\n",search);
 }
