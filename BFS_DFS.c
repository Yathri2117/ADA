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
    for(v=0;v<=n-1;v++)
    if(visited[v]==0&&a[u][v]==1){
     visited[v]=1;
     rear=rear+1;
     q[rear]=v;
        }
}
}
int dfs(int a[20][20],int n,int s){
    int visited[20];
    visited[s]=1;
    for(int v=0;v<=n-1;v++)
        if(visited[v]==0&& a[s][v]==1)
    {
        printf("\n %d-->%d",s,v);
        dfs(a,n,v);
    }

}

void main(){
int n,a[20][20],j,i,visited[20],s,ch,count;
while(1){
printf("\nEnter your choice:1.BFS 2.DFS \t");
scanf("%d",&ch);

switch(ch){
case 1:
printf("Enter the number of vertex:\t");
scanf("%d",&n);
printf("Enter adjacency matrix of the graph:\n");
for(i=0;i<=n-1;i++)
    for(j=0;j<=n-1;j++)
    scanf("%d",&a[i][j]);
printf("Enter the source vertex:\t");
scanf("%d",&s);
for(i=0;i<=n-1;i++)
    visited[i]=0;
bfs(a,s,visited,n);
if(visited[i]!=0)
    printf("Node %d is not reachable",i);
else
    printf("Node %d is reachable",i);
break;

case 2: printf("Enter the number of vertex:\t");
scanf("%d",&n);
printf("Enter adjacency matrix of the graph:\n");
for(i=0;i<=n-1;i++)
    for(j=0;j<=n-1;j++)
    scanf("%d",&a[i][j]);
    printf("Enter the source vertex:\t");
scanf("%d",&s);
    dfs(a,n,s);
    for(int k=0;k<=n-1;k++){
    if(visited[k])
    count++;
    if(count==n){
        printf("Graph is connected");
        return;}
    else{
        printf("Graph is disconnected");
        return;}
}

break;
default : exit(0);
}
}
}
