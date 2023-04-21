#include<stdio.h>
#include<stdlib.h>
#include "sll.h"
extern node_t* head;


void del_first_node(void){
	if(is_empty())
		printf("List is Empty.\n");
	else{
		node_t* temp = head;
		head = head -> next;
		free(temp);
	}
}

void del_last_node(void){
	if(is_empty())
		printf("List is Empty.\n");
	else{	
		node_t* trav = head;
		while(trav->next->next != NULL){
			trav = trav -> next;
		}
		node_t* temp = trav;
		temp = temp -> next;
		trav -> next = NULL;
		free(temp);
	}
}

