#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//預設為1234567809*1234567809 欲修改預設在269-274 
using namespace std;

struct Node {
	int data;
	Node* next;
};
void initNode(struct Node *head,int n){
	head->data = n;
	head->next =NULL;
}
void addNode(struct Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}
bool deleteNode(struct Node **head, Node *ptrDel) {
	Node *cur = *head;
	if(ptrDel == *head) {
		*head = cur->next;
		delete ptrDel;
		return true;
	}
	
	while(cur) {
		if(cur->next == ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}
int n,g,gg,cc,v,ff,aaa=1,con;
int bg;
struct Node *mull(struct Node *head,struct Node *head1,struct Node *head2,struct Node *head3,struct Node *head4,struct Node *head5,struct Node *head6,struct Node *head7,struct Node *head8,struct Node *head9,struct Node *head10,struct Node *head11,struct Node *head12) {
	Node *cur = head;
	Node *cur1 = head1;
	while(cur){
		g=cur->data;
		cc=0;bg=0;con=0;
		while(cur1){
			n=0;
			con++;
			gg=cur1->data;
			n=gg*g;
			if((n+cc)>=10){
				bg=(n+cc)/10;
				v=(n+cc)%10;
			}
			else{
				v=n+cc;
			}
			cc=bg; 
			switch(aaa){ 
			
			case 1 :{
				addNode(head2,v);
				break;
			}
			case 2 :{
				addNode(head3,v);
				break;
			}
			case 3 :{
				addNode(head4,v);
				break;
			}
			case 4 :{
				addNode(head5,v);
				break;
			}
			case 5 :{
				addNode(head6,v);
				break;
			}
			case 6 :{
				addNode(head7,v);
				break;
			}
			case 7 :{
				addNode(head8,v);
				break;
			}
			case 8 :{
				addNode(head9,v);
				break;
			}
			case 9 :{
				addNode(head10,v);
				break;
			}
			case 10 :{
				addNode(head11,v);
				break;
			}
			case 11 :{
				addNode(head12,v);
				break;
			}
			} 
			if(con==10){
				v=bg;
			switch(aaa){ 
			
			case 1 :{
				addNode(head2,v);
				break;
			}
			case 2 :{
				addNode(head3,v);
				break;
			}
			case 3 :{
				addNode(head4,v);
				break;
			}
			case 4 :{
				addNode(head5,v);
				break;
			}
			case 5 :{
				addNode(head6,v);
				break;
			}
			case 6 :{
				addNode(head7,v);
				break;
			}
			case 7 :{
				addNode(head8,v);
				break;
			}
			case 8 :{
				addNode(head9,v);
				break;
			}
			case 9 :{
				addNode(head10,v);
				break;
			}
			case 10 :{
				addNode(head11,v);
				break;
			}
			case 11 :{
				addNode(head12,v);
				break;
			}
			}}
			cur1=cur1->next;
			ff++;bg=0;
		}
		cur1 = head1;
		aaa++;
		cur=cur->next;
		cc=0;bg=0;con=0;
	}
	}

void display(struct Node *head) {
	Node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}
void addf(struct Node *head2,struct Node *head3,struct Node *head4,struct Node *head5,struct Node *head6,struct Node *head7,struct Node *head8,struct Node *head9,struct Node *head10,struct Node *head11,struct Node *head12,struct Node *headc) {
	Node *fk = head2;Node *fk1 = head3;Node *fk2= head4;Node *fk3 = head5;Node *fk4 = head6;Node *fk5 = head7;Node *fk6 = head8;Node *fk7 = head9;Node *fk8 = head10;Node *fk9 = head11;
	int a,b,c,d,e,f,z,h,i,j,l,jj,afk,mm,ct=0,hhh,ttt,yyy;
	jj=0;afk=0;//addNode(headc,0);
	while(fk9){
	ct++;	
	a=fk->data;b=fk1->data;c=fk2->data;d=fk3->data;e=fk4->data;f=fk5->data;z=fk6->data;h=fk7->data;i=fk8->data;j=fk9->data;
	hhh=(a+b+c);
	ttt=(d+e+f);
	yyy=(z+h+j+i);
	l=(yyy+ttt+hhh);
	 if((l+jj)>=10){
	 	afk=(l+jj)/10;
	 	mm=(l+jj)%10;
	 }
	 else{
	 	mm=(l+jj);
	 }
	 addNode(headc,mm);
	 jj=afk;
	fk=fk->next;fk1=fk1->next;fk2=fk2->next;fk3=fk3->next;fk4=fk4->next;fk5=fk5->next;fk6=fk6->next;fk7=fk7->next;fk8=fk8->next;fk9=fk9->next;
	if(ct==22){
		addNode(headc,afk);
	}
	afk=0;
	}
	}

void display1(struct Node *head) {
	Node *list = head;
	list = list->next;
	while(list) {
		printf("%d",list->data);
		list = list->next;
	}
	cout << endl;
	cout << endl;
}
void display11(struct Node *head) {
	Node *list = head;
	list = list->next;
	list = list->next;
	while(list) {
		printf("%d",list->data);
		list = list->next;
	}
	cout << endl;
	cout << endl;
}
main() {
	//printf("1234567809*1234567809=\n");//
	struct Node *newHead;
	struct Node *head = new Node;
	struct Node *newHead1;
	struct Node *head1 = new Node;
	struct Node *newHead2;
	struct Node *head2 = new Node;
	struct Node *newHead3;
	struct Node *head3 = new Node;
	struct Node *newHead4;
	struct Node *head4 = new Node;
	struct Node *newHead5;
	struct Node *head5 = new Node;
	struct Node *newHead6;
	struct Node *head6 = new Node;
	struct Node *newHead7;
	struct Node *head7 = new Node;
	struct Node *newHead8;
	struct Node *head8 = new Node;
	struct Node *newHead9;
	struct Node *head9 = new Node;
	struct Node *newHead10;
	struct Node *head10 = new Node;
	struct Node *newHead11;
	struct Node *head11 = new Node;
	struct Node *newHead12;
	struct Node *head12 = new Node;
	struct Node *newHeadc;
	struct Node *headc = new Node;
	initNode(head2,NULL);initNode(head3,NULL);initNode(head4,NULL);initNode(head5,NULL);initNode(head6,NULL);initNode(head7,NULL);initNode(head8,NULL);initNode(head9,NULL);initNode(head10,NULL);initNode(head11,NULL);initNode(head12,NULL);
	addNode(head3,NULL);addNode(head4,NULL);addNode(head4,NULL);addNode(head5,NULL);addNode(head5,NULL);addNode(head5,NULL);addNode(head6,NULL);addNode(head6,NULL);addNode(head6,NULL);addNode(head6,NULL);addNode(head7,NULL);addNode(head7,NULL);addNode(head7,NULL);addNode(head7,NULL);addNode(head7,NULL);
	addNode(head8,NULL);addNode(head8,NULL);addNode(head8,NULL);addNode(head8,NULL);addNode(head8,NULL);addNode(head8,NULL);addNode(head9,NULL);addNode(head9,NULL);addNode(head9,NULL);addNode(head9,NULL);addNode(head9,NULL);addNode(head9,NULL);addNode(head9,NULL);addNode(head10,NULL);addNode(head10,NULL);addNode(head10,NULL);addNode(head10,NULL);addNode(head10,NULL);addNode(head10,NULL);addNode(head10,NULL);addNode(head10,NULL);
	addNode(head11,NULL);addNode(head11,NULL);addNode(head11,NULL);addNode(head11,NULL);addNode(head11,NULL);addNode(head11,NULL);addNode(head11,NULL);addNode(head11,NULL);addNode(head11,NULL);
	addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);addNode(head12,NULL);
	int a;
	initNode(headc,NULL);
	initNode(head,1);addNode(head,2);addNode(head,3);addNode(head,4);//輸入預設值
	addNode(head,5);addNode(head,6);addNode(head,7);addNode(head,8);//輸入預設值
	addNode(head,0);addNode(head,9);//輸入預設值
	initNode(head1,1);addNode(head1,2);addNode(head1,3);addNode(head1,4);//輸入預設值
	addNode(head1,5);addNode(head1,6);addNode(head1,7);addNode(head1,8);//輸入預設值
	addNode(head1,0);addNode(head1,9);//輸入預設值 
	mull(head,head1,head2,head3,head4,head5,head6,head7,head8,head9,head10,head11,head12);
	addNode(head11,NULL);
	addNode(head10,NULL);addNode(head10,NULL);
	addNode(head9,NULL);addNode(head9,NULL);addNode(head9,NULL);
	addNode(head8,NULL);addNode(head8,NULL);addNode(head8,NULL);addNode(head8,NULL);
	addNode(head7,NULL);addNode(head7,NULL);addNode(head7,NULL);addNode(head7,NULL);addNode(head7,NULL);
	addNode(head6,NULL);addNode(head6,NULL);addNode(head6,NULL);addNode(head6,NULL);addNode(head6,NULL);addNode(head6,NULL);
	addNode(head5,NULL);addNode(head5,NULL);addNode(head5,NULL);addNode(head5,NULL);addNode(head5,NULL);addNode(head5,NULL);addNode(head5,NULL);
	addNode(head4,NULL);addNode(head4,NULL);addNode(head4,NULL);addNode(head4,NULL);addNode(head4,NULL);addNode(head4,NULL);addNode(head4,NULL);addNode(head4,NULL);
	addNode(head3,NULL);addNode(head3,NULL);addNode(head3,NULL);addNode(head3,NULL);addNode(head3,NULL);addNode(head3,NULL);addNode(head3,NULL);addNode(head3,NULL);addNode(head3,NULL);
	addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);addNode(head2,NULL);
	display1(head2);
	display1(head3);
	display1(head4);
	display1(head5);
	display1(head6);
	display1(head7);
	display1(head8);
	display1(head9);
	display1(head10);
	display1(head11);
	addf(head2,head3,head4,head5,head6,head7,head8,head9,head10,head11,head12,headc);
	printf("______________________\n");
	display11(headc);
}
