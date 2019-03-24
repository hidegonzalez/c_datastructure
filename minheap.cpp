#include<stdio.h>
#include<stdlib.h>
int arr[17]={12,34,55,1,23,51,44,31,67,56,26,71,90,99,13,56,78};
int arrright[7]={};
int arrleft[9]={};
int arrfin[17]={};
int main(){
	int root=100,run,cont=0,rt=0,lt=0,ch,ex=0,a=0,b=0;
	for(run=0;run<17;run++){
		if(arr[run]<root){
			root=arr[run];
		}
	}
	for(run=0;run<17;run++){
		if(arr[run]>root&&(cont==0||cont==2||cont==3||cont==6||cont==7||cont==8||cont==9||cont==14||cont==15)){
			arrleft[rt]=arr[run];
			rt++;
		}
		if(arr[run]>root&&(cont==1||cont==4||cont==5||cont==10||cont==11||cont==12||cont==13)){
		arrright[lt]=arr[run];
		lt++; 
		}
		if(arr[run]!=root){
		cont++; }
	}

	for(run=0;run<7;run++){
		for(int run1=0;run1<7;run1++){
			if(arrright[run]<arrright[run1]){
				ch=arrright[run];
				arrright[run]=arrright[run1];
				arrright[run1]=ch;
			}
		}
	}
	for(run=0;run<9;run++){
		for(int run1=0;run1<9;run1++){
			if(arrleft[run]<arrleft[run1]){
				ch=arrleft[run];
				arrleft[run]=arrleft[run1];
				arrleft[run1]=ch;
			}
		}
	}
	for(ex=0;ex<9;ex++){
			arrfin[ex]=arrleft[a];
			a++;
	}
	arrfin[ex]=root;ex++;
	for(b=0;b<7;b++){
			arrfin[ex]=arrright[b];
			ex++;
	} 
	for(ex=0;ex<17;ex++){
			printf("%d",arrfin[ex]);
			printf(",");
	} 
	printf("\n");
	for(ex=0;ex<9;ex++){
			printf("%d",arrleft[ex]);
			printf(",");
	} 
	printf("\n");
	printf("%d",root);
}
