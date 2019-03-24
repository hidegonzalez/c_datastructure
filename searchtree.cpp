#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node {
	 int data;
	node* left;
	node* right;
};

void addNode( int n,node *ptr, node*root) {
	node *newnode = new node;
	newnode->data = 0;
	newnode->left = newnode->right=NULL;
	while(1){
		if(ptr->data==n){
			printf("insert");
			break;
		}
		else if(ptr->data>n&&ptr->left!=NULL){
			ptr=ptr->left;
		}
		else if(ptr->data>n&&ptr->left==NULL){
			ptr->left=newnode;
			newnode->data=n;break;
		}
		else if(ptr->data<n&&ptr->right!=NULL){
			ptr=ptr->right;
		}
		else if(ptr->data<n&&ptr->right==NULL){
			ptr->right=newnode;
			newnode->data=n;break;
		}
	}
}
void searchNode(int n,node *ptr, node*root) {
	ptr=root;
	while(1){
		if(ptr->data==n){
			printf("%d find",n);
			break;
		}
		else if(ptr->data<n&&ptr->right!=NULL){
			ptr=ptr->right;
		}
		else if(ptr->data<n&&ptr->right==NULL){
			printf("%d not find\n",n);break;}
		else if(ptr->data>n&&ptr->left!=NULL){
			ptr=ptr->left;
		}
		else if(ptr->data>n&&ptr->left==NULL){
			printf("%d not find\n",n);break;
		}
		}}
main() {
	node *ptr;
	struct node *root = new node;
	int a=1;
	root->data=0;
	root->left=NULL;
	root->right=NULL;
	ptr=root;
	for(a;a<6;a++){
	addNode(a,ptr,root);}
	searchNode(22,ptr,root);
	searchNode(25,ptr,root);
	searchNode(45,ptr,root);
	searchNode(67,ptr,root);
	searchNode(88,ptr,root);
	searchNode(12,ptr,root);
	searchNode(2,ptr,root);
}
