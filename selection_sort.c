#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
void selection_sort(int n,int array[]){
    int i,j,min,pos,temp;
    for(i=0;i<n-1;i++){
        pos=i;
        min=array[i];
        for(j=i+1;j<n;j++){
            if(array[j]<min){
                pos=j;
                min=array[j];}
        }
       temp=array[i];
       array[i]=array[pos];
       array[pos]=temp;
    }
}
void main(){
int array[10000],n,i,num;
clock_t s,e;
printf("Selection sort!");
n=1000;
while(n<=5000){
for(i=0;i<n;i++){
    array[i]=n-i;
}
s=clock();
selection_sort(n,array);
Sleep(500);
e=clock();
printf("\n\nTime taken for n=%d in selection sort is:%f",n,((double)(e-s))/CLK_TCK);
n=n+1000;
}
}
