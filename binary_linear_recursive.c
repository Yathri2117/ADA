#include <stdio.h>
#include<time.h>
int RecursiveLS(int arr[], int key, int index, int n)
{
    int flag = 0;
    if(index >= n)
    {
        return 0;
    }
    else if (arr[index] == key)
    {
        flag = index + 1;
        return flag;
    }

    else
    {
        return RecursiveLS(arr, key , index+1, n);
    }
    return flag;
}
int RecursiveBN(int arr[],int key,int index,int n){
int low=0,high=n-1,mid;
while(low<=high){
    mid=(low+high)/2;
    if(key==arr[mid])
        return mid;
    else if(key<arr[mid])
        high=mid-1;
    else
        low=mid+1;
}
return -1;
}
int main()
{
    int n,i,j, key , pos , m = 0, arr[5000],ch;
    clock_t s,e;
    while(1){
    printf("\nEnter the choice:1.Linear search 2.Binary search\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:  n=500;
    while(n<=3000){
    for(i=0;i<n;i++){
        arr[i];
    }
    key=arr[n-100];
    s=clock();
    pos= RecursiveLS(arr, key , 0, n);;
    if(pos!=0)
    printf("\n Element found ");
    else
    printf("element not found");
    for(j=0;j<80000000;j++){}
    e=clock();
    printf("\n Time taken for %d elements is %f\n",n,((double)(e-s))/CLK_TCK);
    n=n+500;
    }
    break;
    case 2:  n=500;
    while(n<=3000){
    for(i=0;i<n;i++){
        arr[i];
    }
    key=arr[n-100];
    s=clock();
    pos= RecursiveBN(arr, key , 0, n);;
    if(pos!=0)
    printf("\n Element found");
    else
    printf("element not found");
    for(j=0;j<80000000;j++){}
    e=clock();
    printf("\n Time taken for %d elements is %f\n",n,((double)(e-s))/CLK_TCK);
    n=n+500;
    }
    break;
    default: exit(0);
    }
    }
    return 0;
}
