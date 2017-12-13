#include "stdafx.h"
#include"malloc.h"
#include"conio.h"
#include<stdio.h>
#include <time.h>
#include"stdlib.h"



struct Node
{
	int value;
	Node * next;
};

Node* addNodeAtBegining(Node * head, int v)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->value = v;
	newNode->next = head;
	return newNode;
}


void printList(Node * head) {
	Node * node = head;
	while (node != NULL)
	{
		printf("%d\n", node->value);
		node = node->next;
	}
	printf("\n");
}

int main()
{
	srand(time(NULL));
	Node * head = NULL;
	   int i;
	   int* r = new int[5];
	   int k;
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++) {
		r[i] = rand();
		head = addNodeAtBegining(head, r[i]);
	}
	printList(head);
	Node *min = head;
	Node * node = head;

	while (node != NULL) {
		if (node->value<min->value) {
			min = node;
		}
		node = node->next;
	}
	printf("MinNumber %d\n", min->value);
	

	_getch();
	return 0;
}