//Implement binary search  on integers.
#include<stdio.h>
void main()
{
int n, a[100], i, key, high, low, mid, loc=-1;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the elements of array in sorted order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key element \n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
loc=mid+1;
break;	
}
else
{
	if(key<a[mid])
	high=mid-1;
	
	else
          low=mid+1;	  
}	
}
 if(loc>0)
printf("\n The element %d is found at %d",key,loc);
 else
printf("\n The search is unsuccessful");  	
}
