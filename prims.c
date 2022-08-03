#include<stdio.h>
#include<conio.h>
void prims(int n,int a[10][10]){
    int i,j,sr,s[10],d[10],visited[10],k,u,v,min,sum,t[10][2];
    min=999;
    sr=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=0&&a[i][j]<=min){
                min=a[i][j];
                sr=i;
            }
        }
    }
    for(i=0;i<n;i++){
        d[i]=a[sr][i];
        s[i]=0;visited[i]=sr;
    }
    s[sr]=1;
    sum=0;k=0;
    for(i=1;i<n;i++){
        min=999;
    u=-1;
    for(j=0;j<n;j++){
        if(s[i]==0){
            if(d[j]<=min){
                min=d[j];
                u=j;
            }
        }
    }
    t[k][0]=u;
    t[k][1]=visited[u];
    k++;
    sum+=a[u][visited[u]];
    s[u]=1;
    for(v=0;v<n;v++){
        if(s[v]==0&&a[u][v]<d[v])
        {
                d[v]=a[u][v];
                visited[v]=u;
        }
    }
}
if(sum>=999)
    printf("Spanning tree does not exist\n");
else
{
    printf("Spanning tree exist and the minimum spanning tree is:\n");
    for(i=0;i<n-1;i++){
        printf("%d %d\n",t[i][0],t[i][1]);
    }
    printf("Cost=%d\n",sum);
}
}
void main(){
int n,a[10][10],i,j;
printf("Enter the no.of vertex:\t");
scanf("%d",&n);
printf("Enter the adjacency matrix:\n");
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    scanf("%d",&a[i][j]);}}
    prims(n,a);
}
