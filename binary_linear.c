#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int bin(int array[],int key,int n){
int low,high,mid;
low=0;
high=n-1;
while(low<high){
    mid=(low+high)/2;
    if(key==array[mid]){
       return  1;
    }
    else if(key<array[mid])
        high=mid-1;
    else
        low=mid+1;
}
return -1;
}
int lin(int array[],int key,int n){
unsigned long int i;
for(i=0;i<n;i++){
    if(array[i]==key)
        return 1;
        else
            return -1;
}
}
void main(){
int n,array[5000],key,ch;
unsigned long int i,j,flag;
clock_t s,e;
while(1){
    printf("\nEnter your search choice:\n1. Binary search 2. Linear search\t");
    scanf("%d",&ch);
    switch(ch){
case 1: n=1000;
    while(n<=3000){
    for(i=0;i<n;i++){
        array[i];
    }
    key=array[n-1];
    s=clock();
    flag=bin(array,key,n);
    if(flag>=1)
    printf("\n Element found in n=%d",n);
    else
    printf("element not found");
    for(j=0;j<80000000;j++){}
    e=clock();
    printf("\n Time taken for %d elements is %f\n",n,((double)(e-s))/CLOCKS_PER_SEC);
    n=n+1000;
    }
    break;
case 2: n=1000;
while(n<=3000){
    for(i=0;i<n;i++){
        array[i];
    }
    key=array[n-1];
    s=clock();
    flag=lin(array,key,n);
    if(flag>=1)
    printf("\n Element found in n=%d ",n);
    else
    printf("element not found");
    for(j=0;j<80000000;j++){}
    e=clock();
    printf("\n Time taken for %d elements is %f\n",n,(double)(e-s)/CLK_TCK);
    n=n+1000;
    }
    break;
default:exit(0);
}
}
}
