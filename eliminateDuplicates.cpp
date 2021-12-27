/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *removeDuplicates(Node *head)
{
    //Write your code here
//     while(head != NULL){
//         head = head->next;
//         Node *a = head->next;
//         if(head->data == a->data){
//             head->data = a->data;
//             head->next = a->next; 
//         }else{
//             head = a;
//             a = a->next;
//         }
//      }
    
//     return head;
    
    Node* current = head;
 
    /* Pointer to store the next pointer of a node to be deleted*/
    Node* next_next;
     
    /* do nothing if the list is empty */
    if (current == NULL){
      return 0;    
    }
 
    /* Traverse the list till last node */
    while (current->next != NULL)
    {
    /* Compare current node with next node */
    if (current->data == current->next->data)
    {
        /* The sequence of steps is important*/       
        next_next = current->next->next;
        // delete current->next;
        current->next = next_next;
    }
    else /* This is tricky: only advance if no deletion */
    {
        current = current->next;
    }
    }
   return head;
}