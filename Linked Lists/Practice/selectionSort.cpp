#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* sortedHead = head;

        for (ListNode* i = sortedHead; i != nullptr; i = i->next) {
            ListNode* minNode = i;
            for (ListNode* j = i->next; j != nullptr; j = j->next) {
                if (j->val < minNode->val) {
                    minNode = j;
                }
            }
            // Swap values of i and minNode
            if (minNode != i) {
                std::swap(i->val, minNode->val);
            }
        }

        return sortedHead;
    }
};
int main() {
 
    return 0;
}