//program to update particular location of an array with a given value 
#include <stdio.h>

void main()
{
int t,s,i,n;
printf("Enter the size of the array:");
scanf("%d",&n);
int a[n];
printf("Enter %d elements :",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the position to be update:");
scanf("%d",&t);
printf("Enter the value to be update:");
scanf("%d",&s);
for(i=0;i<5;i++)
{
if(i==t)
{
a[i-1]=s;
}
}
printf("\nUpdated value is:");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}  
}
