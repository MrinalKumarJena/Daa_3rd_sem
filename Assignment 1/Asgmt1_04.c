//linear search array element 
#include<stdio.h>
int main()
{
int num,n,i,cn;
printf("Enter the size of the array:");
scanf("%d",&n);
int a[n];
printf("Enter %d elements :",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the number to search:");
scanf("%d",&num);
for(i=0;i<n;i++){
