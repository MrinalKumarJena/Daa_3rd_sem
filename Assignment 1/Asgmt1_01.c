//Write a c program to insert a new element in a given position in an existing array.
#include<stdio.h>
main()
{
int num,n,i,pos;
int arr[20];
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter %d elements :",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the elements to insert :");
scanf("%d",&num);
printf("Enter the position at which you want to insert(less than 10):");
scanf("%d",&pos);
n++;
for(i=n;i>=pos-1;i--){
arr[i+1]=arr[i];
}
arr[pos-1]=num;
for(i=0;i<n;i++){
printf("%d \n",arr[i]);
}
}
