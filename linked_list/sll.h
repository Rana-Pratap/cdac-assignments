#ifndef __sll_h
	#define __sll_h
	
		typedef struct node{
			int data;
			struct node* next;
		}node_t;
		
		void init(void);
		int is_empty(void);
		node_t* create_node(int );
		
		void add_first_node(int );
		void add_last_node(int );
		
		void del_first_node(void);
		void del_last_node(void);
		
		void display(void);
		void free_list(void);
		
		
#endif
/*
node* head;

		Node* createNode(int);
		void init(void);
		int isEmpty(void);

		void addNodeFirst(int);
		void addNodeLast(int);

		void display(void);
		void free_list(void);
*/
