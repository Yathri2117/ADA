#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
int gcd(int m,int n){
if(n==0)
    return m;
return(n,m%n);
}
void tower(int n,int s,int temp,int d){
if(n==0)
    return;
 tower(n-1,s,d,temp);
 printf("Move the disc %d from %c to %c\n",n,s,d);
 tower(n-1,temp,s,d);
}
void main(){
int ch,n1,m,n,result;
while(1){
    printf("\nEnter the choice:1.Tower of hanoi 2.GCD\n");
    scanf("%d",&ch);
    switch(ch){
case 1:
    printf("\nEnter the number of discs:\t");
    scanf("%d",&n1);
    tower(n1,'A','B','C');
    break;
case 2:
printf("Enter the value of m:\t");
scanf("%d",&m);
printf("Enter the value of n:\t");
scanf("%d",&n);
result=gcd(m,n);
printf("GCD is %d",result);
break;
default:exit(0);
}
}
}
