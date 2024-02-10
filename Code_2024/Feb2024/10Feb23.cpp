if(head==NULL)  //head is null case
        {
            return NULL;
        }
        
        //if all value are same case from head
        while(head!=NULL&&head->val==val)
        {
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        
       
        ListNode*temp=head;
         ListNode*prev=NULL;
        while(temp!=NULL)
        {
            
            if(temp->val==val)
            {
              prev->next=temp->next;
                
            }
            else
            {
              prev=temp;
            
            }
            temp=temp->next;
             
        }
        return head;
