struct ListNode *getIntersectionNode(struct ListNode *A, struct ListNode *B) {
    while(A!=NULL){
        struct ListNode*th = B;
        while(th!=NULL)
        {
            if(th==A)
               return th;
             th=th->next;
        }
        A=A->next;
    }
    return NULL;
}
