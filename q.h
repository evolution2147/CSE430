
struct q-element{
	*prev;
	*next;
	int payload;
}


item = NewItem();//returns a pointer to a new q-element

InitQueue(&head) //creates an empty queue, pointed to by the variable head.

AddQueue(&head, item)  //adds a queue item, pointed to by "item", to the queue pointed to by head

item = DelQueue(&head) //deletes an item fromhead and returns a pointer to the deleted item

RotateQ(&head) //Moves the header pointer to the next element in the queue. This is equivalent to AddQ(&head, DeleteQ(&head)), but is simpler to use and more efficient to implement




