#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
void quick_sort(int a[],int low,int high){
int mid,i,j;
i=low;
j=high;
mid=(low+high)/2;
if(low>high)
    return;
quick_sort(a,i,mid-1);
quick_sort(a,mid+1,j);
}
void main ()
{
int a[10000],i,j,k,n;
clock_t s,e;
printf("Merge sort\n");
n=1000;
while(n<=10000){
for(i=0;i<n;i++){
    a[i]=n-i;
}
s=clock();
quick_sort(a,0,n-1);
Sleep(150);
e=clock();
printf("\nTime taken for Quick sort where n : %d is: %f\n",n,((double)(e-s))/CLK_TCK);
n=n+1000;
}
}
