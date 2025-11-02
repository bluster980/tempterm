// trasverse the whole list from head on
for(ListNode* curr=head; curr; curr=curr->next){
    if (hasN[curr->val]) // if curr->val is in hasN
        prev->next=curr->next;//skip the current node
    else 
        prev=prev->next;
}