#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
void mergesort(int a[],int low,int high){
int i,j,k,mid,c[10000];
mid=(low+high)/2;
i=low;
j=mid+1;
k=low;
while(i<=mid && j<=high){
    if(a[i]<a[j]){
        c[k]=a[i];
        i=i+1;
        k=k+1;
    }
    else{
        c[k]=a[j];
        j=j+1;
        k=k+1;
    }
    }
while(i<=mid){
    c[k]=a[i];
    k=k+1;
    i=i+1;
}
while(j<=high){
    c[k]=a[j];
    k=k+1;
    j=j+1;
}
for(i=low;i<=high;i++)
    a[i]=c[i];
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
mergesort(a,0,n-1);
Sleep(150);
e=clock();
printf("\nTime taken for Merge sort where n : %d is: %f\n",n,((double)(e-s))/CLK_TCK);
n=n+1000;
}
}
