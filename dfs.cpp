#include<stdio.h>
#include<stdlib.h> 
void DFS(int);
void cmp();
int G[6][6]={0,1,0,0,0,0,
			 1,0,1,0,0,0,
			 0,1,0,0,0,0,
			 0,0,0,0,1,0,
			 0,0,0,1,0,1,
			 0,0,0,0,1,0},visited[10],n=0,cont=0;
int q[6][6]={0,0,0,0,0,0, 
 			  0,0,0,0,0,0,
			  0,0,0,0,0,0,
			  0,0,0,0,0,0,
			  0,0,0,0,0,0,
			  0,0,0,0,0,0};
int main()
{
    int i,j,a,k=0;
    a=5;
    DFS(a);
    cont++;
    printf("\n");
	while(n==0){
	for(i=0;i<6;i++){ 
	 if(visited[i]==0){
	 	j=i;k++;break;
	 }
	}
	printf("\n");
    if(k!=0){
    a=(rand() % 5)+j;
    DFS(a);
    k=0;
    cont++;
	}
	else break;
	}	printf("\n%d­Ó",cont);
/*for(i=0;i<10;i++){ 
	printf("%d\n",visited[i]);
}*/
} 
 
void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    
    for(j=0;j<6;j++)
       if(!visited[j]&&G[i][j]==1){
       		q[i][j]=G[i][j];
            DFS(j);}
}

