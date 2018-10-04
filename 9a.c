#include<stdio.h>
#include<malloc.h>
int bin(int a[],int low,int high,int key)
{
 int mid;
  
  if(low>high)
  {
    printf("the element is not present\n");
  return;
  }
  else
  { 
    mid=(low+high)/2;
  }
  
   if(a[mid]==key)
   {
     printf("%d is present at location %d\n",key,mid);
   }
    else
    if(a[mid]<key)
   {return(bin(a,mid+1,high,key));
   }
   else 
   { 
     return(bin(a,low,mid-1,key));
   }
}
int main()
 {
    int n,*a,i,key,mid,low,high;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
     a=(int *)malloc(n*sizeof(int));
     printf("Enter the array elements in ascending order\n");
     for(i=0;i<n;i++)
     { 
			scanf("%d",a+i);
     }
     printf("Enter the key\n");
     scanf("%d",&key);
     bin(a,0,n-1,key);
}
       
