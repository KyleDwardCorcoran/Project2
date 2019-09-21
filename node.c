#include <stdlib.h>
#include "node.h"


struct node {                 //                           _mynode_
	int /*const*/ value;	  //my node has 3 entrees     | value  |
	struct node *next;	      //						  | next   | ->
	struct node *prev;		  //					   <- | pre    |
}; 


