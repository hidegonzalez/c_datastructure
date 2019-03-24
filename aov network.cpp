#include<stdio.h>
 #include <string.h>
 # define aa 6
void aov();
int G[aa][aa]={	0,0,1,1,0,0,
				0,0,1,0,1,1,
			 	0,1,0,1,1,1,
			 	0,1,0,1,1,1,
				0,1,1,1,1,1,
				0,0,1,1,1,1},visited[10],n=0,ff=0
				,cc[6]={0,1,2,3,4,5},kk=0;
int main()
{
    aov();
}
void find(){
	int i,j,k=0;
	int cont=0;
	for(i=0;i<aa;i++){
		for(j=0;j<aa;j++){
			if(G[j][i]>0){
				k++;
			}
		}
		if(k==0){
			visited[cont]=i;
			cont++;
			n++;
		}
		k=0;
	}
}
void findc(){
	int i,j,k=0,a=0,ccc;
	i=visited[ff];
	for(k=0;k<aa;k++){
	for(j=0;j<n;j++){
		if((kk==0)&&(cc[k]==0)){
		if(visited[j]==0){
			a++;kk++;
		}}
		if(visited[j]==cc[k]){
			//printf("%d\n",cc[k]);
			cc[k]=0;
		}
	}
	if(cc[k]==0){
		if(kk==0){
		visited[n]=k;
		ccc++;//printf("%d\n",cc[k]);
		n++;
	}}
	 if(G[i][k]&&cc[k]){
		//printf("%d\n",cc[k]);
		visited[n]=k;
		n++;
	}
	//ff++;
	}ff++;
}
void aov(){
		int i=0;
		find();
		findc();
		findc();
		findc();
		findc();
		findc();
		findc();
		for(;i<n;i++){
		printf("%d",visited[i]);}
		//printf("\n%d\n",G[2][1]);
}
