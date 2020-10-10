bool isListPalindrome(ListNode<int> * l) {
    vector<int> v;
    // ListNode<int> *head = new ListNode<int>(INT_MAX);
    // head->next = l;
    // ListNode<int> *prev = head;
    ListNode<int> *current = l;
    while(current!=NULL){
        v.push_back(current->value);
        current = current->next;
    }

    for(int i = 0;i<v.size()/2;++i){
        if(v[i]!=v[v.size()-i-1])
        return false;
    }

    
 return true;
}