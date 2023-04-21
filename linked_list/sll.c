#include "sll.h"
#include<stdio.h>
#include<stdlib.h>
extern node_t* head;

// Initialisation
void init(void){
	head = NULL;
}

// Is Empty
int is_empty(void){
	return head==NULL;
}

// Create  Node
node_t* create_node(int data){
	node_t* new = (node_t*)malloc(sizeof(node_t));
	new->data = data;
	new->next = NULL;
	return new;
}


void display(void){
	node_t* trav = head;
	printf("List is :: ");
	while(trav!=NULL){
		printf("%-5d", trav->data);
		trav = trav->next;
	}
	printf("\n");
}

void free_list(void){
	if(is_empty())
		printf("List is Empty.\n");
	else{
		node_t* trav = head;
		while(trav != NULL){
			node_t* temp = trav;
			trav = trav -> next;
			free(temp);
		}
		head = NULL;
	}
}
/*
void free_list(void){
	if(is_empty())
		printf("List is Empty.\n");
	else{
		node_t* trav = head;
		while(trav != NULL){
			node_t* temp = trav;
			trav = trav->next;
			free(temp);
		}
		head = NULL;
	}
}
*/
