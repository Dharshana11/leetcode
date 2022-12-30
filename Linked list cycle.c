bool hasCycle(struct ListNode *head) {
    struct ListNode*slow=head;
    struct ListNode*fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast) return 1;
    }
    return 0;
}
