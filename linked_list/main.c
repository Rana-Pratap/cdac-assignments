#include "sll.h"
#include<stdio.h>
node_t* head;


int main(void){
	init();
	
	add_first_node(10);
	add_first_node(20);
	add_first_node(30);
	add_first_node(40);
	add_first_node(50);
	add_first_node(60);
	add_last_node(70);
	
	display();
	
	del_first_node();
	del_last_node();
	display();
	
	free_list();
	return 0;
}
