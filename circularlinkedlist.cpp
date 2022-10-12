/* Function to print nodes in
a given Circular linked list */
void printList(Node* head)
{
	Node* temp = head;

	// If linked list is not empty
	if (head != NULL) {

		// Print nodes till we reach first node again
		do {
			cout << temp->data << " ";
			temp = temp->next;
		} while (temp != head);
	}
}
