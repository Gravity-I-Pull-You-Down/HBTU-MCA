ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
    ListNode<int> * head = new ListNode<int>(INT_MAX);
    head->next = l;
    ListNode<int> *current = head->next;
    ListNode<int> *prev = head;
    while(current!= NULL){
        if(current->value == k){
            ListNode<int> *temp = current;
            prev->next = temp->next;
            current = temp->next;
            delete temp;
        }
        else{
            prev = current;
            current = current->next;
        }
    }



return head->next;

}