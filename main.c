
#include <stdlib.h>
#include <stdio.h>

int main(void){
	//Allocates space for node and assigns head ptr to it
	struct node* head = malloc(sizeof(struct node));				
	head -> value = 3;
	//creates current ptr and pts to head
	struct node* current = head;

	for(int i = 0; i < 100; i++){
		//Allocates space for node and assigns newnode ptr to it 			 			___current___			 ___newnode___
		struct node* newnode = malloc(sizeof(struct node)); // 					   |	value    |			|	value = i |
		newnode -> value = i;									//					   |	next	 |->		|	next	  |->...
		//assigns current ptr's next ptr to newnode ptr         //         	      ...<-|    prev     |		  <-|	prev      |
		current -> next = newnode;							
		//assigns currents ptr's prev ptr to current ptr
		newnode -> prev = current;
		//pts currents ptr at newnode
		current = newnode;
	}

	printf("\n%d\n", current -> value);

	return 0;
}

