            }
            if(l2 != nullptr){
                sum+= l2->val;
                l2 = l2->next;
            }
            sum+=carry;

            curr->next = new ListNode(sum % 10);
            carry = sum/10;
            curr = curr ->next;
        }
        ListNode* ans = dummyHead->next;
        delete dummyHead;
        return ans;
    }
};
[2,4,3]
