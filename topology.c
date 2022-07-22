#include<stdio.h>
#include<conio.h>
void topology(int n,int a[10][10]){
    int j,sum=0,i,top=-1,sequence[10],u,indeg[10],res[10],k=0,v;
    for(j=0;j<n;j++){
        sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i][j];
    }
    indeg[j]=sum;
    }
   for(i=0;i<n;i++){
    if(indeg[i]==0){
        top=top+1;
        sequence[top]=i;
    }
   }
   while(top!=-1){
      u=sequence[top];
   top=top-1;
   res[k++]=u;
   for(v=0;v<n;v++){
   if(a[u][v]==1){
    indeg[v]=indeg[v]-1;
    if(indeg[v]==0){
        top=top+1;
        sequence[top]=v;
    }
   }
   }
   }
   printf("Sequence is:\n");
for(int l=0;l<n;l++){
    printf("%d\t",res[l]);
}
}
void main(){
    int n,a[10][10],i,j;
printf("Enter the no.of vertex:\t");
scanf("%d",&n);
printf("Enter the adjacency matrix:\n");
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
   topology(n,a);

}
