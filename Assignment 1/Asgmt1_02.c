//program to delete an element of given index from an array 
#include<stdio.h>
int main()
{
int pos,n, i;
printf("Enter the size of the array:");
scanf("%d",&n);
int a[n];
printf("Enter %d elements :",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter position to delete:");
scanf("%d",&pos);
if(n<pos)
{
printf("position value is greater than length of the array");
}
else
{
printf("Element at %d position is deleted",pos);
printf("Updated array:\n");
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
printf("\n");
return 0;
}
