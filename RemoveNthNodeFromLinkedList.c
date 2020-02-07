/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * Runtime: 0 ms, faster than 100.00% of C online submissions for Remove Nth Node From End of List.
 * Memory Usage: 7.3 MB, less than 9.09% of C online submissions for Remove Nth Node From End of List.
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *nNode=head, *nmNode = NULL, *traverseNode=head;
    int i=0;
    while(traverseNode!=NULL)
    {
        if(i==n)
        {
            nNode = nNode->next;
            if(nmNode==NULL)
            {
                nmNode = head;
            }
            else
            {
                nmNode = nmNode->next;
            }
        }
        else
        {
            i++;
        }
        traverseNode = traverseNode->next;
    }
    if(nmNode==NULL)
    {
        printf("Nth Node : %d, remove head\n",nNode->val);
        head = nNode->next;
        //free(nmNode);
    }
    else{
        printf("Nth Node : %d, N-1 th Node: %d\n",nNode->val,nmNode->val);
        nmNode->next = nNode->next;
        //free(nmNode);
    }
    return head;
}
