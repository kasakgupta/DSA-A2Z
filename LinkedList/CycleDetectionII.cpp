#include <bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* detectCycle(ListNode* head) {
    // Edge case: empty list or only one node → no cycle
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    // Initialize two pointers
    ListNode* slow = head;   // moves one step at a time
    ListNode* fast = head;   // moves two steps at a time
    ListNode* entry = head;  // used later to find the entry point of cycle

    // Step 1: Detect if a cycle exists
    while (fast->next && fast->next->next) {
        slow = slow->next;           // move 1 step
        fast = fast->next->next;     // move 2 steps

        if (slow == fast) { // cycle detected
            // Step 2: Find the entry point of the cycle
            while (entry != slow) {
                slow = slow->next;   // move 1 step
                entry = entry->next; // move 1 step
            }
            return entry; // entry point of cycle
        }
    }

    // No cycle found
    return NULL;
}


int main() {
    // Create nodes
    ListNode* head = new ListNode(3);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(0);
    ListNode* fourth = new ListNode(-4);

    // Link nodes: 3 -> 2 -> 0 -> -4
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Create cycle: -4 -> 2
    fourth->next = second;

    // Call detectCycle
    ListNode* cycleNode = detectCycle(head);

    if (cycleNode != NULL) {
        cout << "Cycle detected at node with value: " << cycleNode->val << endl;
    } else {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
