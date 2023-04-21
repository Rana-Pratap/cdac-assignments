#include<stdio.h>
#include "sll.h"
extern node_t* head;

void add_first_node(int data){
	node_t* new = create_node(data);

	if(is_empty())
		head = new;
	else{
		new -> next = head;
		head = new;
	}
}

void add_last_node(int data){
	node_t* new = create_node(data);

	if(is_empty())
		head = new;
	else{
		node_t* trav = head;
		while(trav->next!=NULL)
			trav = trav->next;
		trav -> next = new;
	}
}

