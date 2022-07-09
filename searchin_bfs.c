//BFS
#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=1,r=0;
void bfs(int v)
{
   for(i=1;i<=n;i++){
   if(a[v][i] && !visited[i]){
      q[++r]=i;
      visited[q[r]]=1;
      }
   }
   if(f<=r)
   {
      bfs(q[f++]);
   }
}
void main(){
   int v,c=1;
      printf("Enter the no of vertices\n");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
         q[i]=0;
         visited[i]=0;
      }
      printf("\n Enter graph data in matrix form:\n");
      for(i=1;i<=n;i++)
         for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
      printf("\n Enter the starting vertex:");
      scanf("%d",&v);
      visited[v]=1;
      bfs(v);
      //printf("\n The order in which nodes reached are:\n");
      //printf("%d ",v);
      for(i=1;i<n;i++){
            if(visited[i]){
            c++;
            //printf("%d ",q[i]);
            }
      }
            if(c!=n){
                printf("Graph is not connected\n");
            }
            else{
                printf("Graph is connected");
            }
            
}
