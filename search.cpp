#include<stdio.h>
#include<stdlib.h>
int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int main(){
	int a=1,mid,key,left=0,right=19;
	mid=(left+right)/2;
	scanf("%d",&key);
	while(left<=right){
		if((right-mid)==1){
			right=mid;
			left=mid;
		}
		else if(right==left){
			break;
		}
		else {
		if(key>arr[mid]){
			left=mid;
			mid=(left+right)/2;
		}
		else if(key==arr[mid]){
			printf("find %d",key);
			a--;	
			break;
		}
		else{
			right=mid;
			mid=(left+right)/2;}
	}
	}
	if(a>0){
		printf(" not find");
	}
}
