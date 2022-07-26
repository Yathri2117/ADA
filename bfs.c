#include<stdio.h>
#include<stdlib.h>
void bfs(int a[20][20],int s,int visited[20],int n){
int q[20],front,rear,u,v;
front=rear=0;
q[rear]=s;
visited[s]=1;
while(front<=rear){
 u=q[front];
 front=front+1;
 for(v=1;v<=n;v++){
 if(visited[v]!=1&&a[u][v]==1){
 visited[v]=1;
 rear=rear+1;
 q[rear]=v;
 }
 }
}
for(v=1;v<=n;v++){
if(visited[v]==0)
    printf("Node %d is not reachable\n",v);
    else
    printf("Node %d is reachable\n",v);
}
}
void main(){
int n,a[20][20],j,i,visited[20],s;
printf("BFS ");
printf("Enter the number of vertex:\t");
    scanf("%d",&n);
    printf("Enter adjacency matrix of the graph:\n");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
    printf("Enter the source vertex:\t");
    scanf("%d",&s);
    for(i=1;i<=n;i++){
    visited[i]=0;}
    bfs(a,s,visited,n);
    }
