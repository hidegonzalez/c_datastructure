#include <iostream>
#include <queue>
#include <string>
#include <stdlib.h>
#include<stdio.h>
#define MAX_QUEUE 10
char Queue[MAX_QUEUE];
int front = -1, rear = -1;
using namespace std;
int isFull(){
	return rear == MAX_QUEUE && front == 0;
}

int isEmpty(){
	return front == rear;
}
void Add(char* queue, char item){
	if (isFull()) {
		printf("Queue is full!\n");
		return;
	}
	printf("%c added.\n", item);
	queue[rear++] = item;
}

void Delete(char* queue,int cc){
	if (isEmpty()){
		printf("Queue is empty!\n");
		return;
	}
	printf("%c is deleted.\n", queue[front+cc]);
	queue[front+cc] = ' ';
}

void printQueue(char* queue){
	if (isEmpty()){
		printf("Queue is empty!\n");
		return;
	}
	printf("Queue: ");
	for (int i = front; i < rear; i++)
		printf("%c ", queue[i]);
	printf("\n");printf("*");
}
void printQueueR(char* queue){
	if (isEmpty()){
		printf("Queue is empty!\n");
		return;
	}
	printf("Queue: ");
	for (int i = rear-1; i >=front; i--)
		printf("%c ", queue[i]);
	printf("\n");printf("*");
}
main()
{
	int fun,b,c;
	char a;
	a='a'; 
	do{
		printf("1輸入2刪除3顯示4離開");
		scanf("%d/n",&fun);
		switch(fun){
			case 0:break;
			case 1:
					Add(Queue,a);
					a++;
					break;
			case 2:
					printf("刪除位元數");
					scanf("%d",&b);
					Delete(Queue,c);
					c++;
					break; 
			case 3:
					printQueue(Queue);
					printQueueR(Queue);
					break; 
			case 4:break;	
		}
	}while(fun!=4);
}
