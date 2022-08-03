#include<stdio.h>
#include<conio.h>
#include<windows.h>
void dijkstra(int n,int a[10][10],int s,int visited[10],int d[10],int dest){
int i,j,min,s1[10],u,v;
for(i=0;i<n;i++){
    d[i]=a[s][i];
    s1[i]=0;
     visited[i]=s;}
   s1[s]=1;
for(i=1;i<n;i++){
    min=999;
    u=-1;
    for(j=0;j<n;j++){
        if(s1[i]==0){
            if(d[j]<min){
                min=d[j];
                u=j;
            }
        }
    }
    if(u==-1)return;
    s1[u]=1;
    if(u==dest)return;
    for(v=0;v<n;v++){
        if(s1[v]==0)
        {
            if(d[u]+a[u][v]<d[v]){
                d[v]=d[u]+a[u][v];
                visited[v]=u;
            }
        }
    }
}
print(s,dest,visited,d);
}
void print(int s,int dest,int visited[10],int d[10]){
int i;
i=dest;
while(i!=s){
    printf("%d<--",i);
    i=visited[i];
}
printf("%d=%d\n",i,d[dest]);
}

void main(){
    int n,a[10][10],i,j,s,visited[10],d[10],dest;
printf("Enter the no.of vertex:\t");
scanf("%d",&n);
printf("Enter the adjacency matrix:\n");
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    scanf("%d",&a[i][j]);}}
printf("Enter the source:\t");
scanf("%d",&s);
printf("Enter the destination:\t");
scanf("%d",&dest);
dijkstra(n,a,s,visited,d,dest);

}

