#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to check if the linked list has a cycle
bool hasCycle(ListNode* head) {
    ListNode* slow = head; // Slow pointer moves one step at a time
    ListNode* fast = head; // Fast pointer moves two steps at a time

    // Traverse the linked list
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;         // Move slow pointer by one step
        fast = fast->next->next;   // Move fast pointer by two steps

        // If slow and fast pointers meet, there's a cycle
        if (slow == fast)
            return true;
    }

    // If we reach here, there's no cycle
    return false;
}

// Driver code to test the hasCycle function
int main() {
    // Creating nodes
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);

    // Creating a linked list: 1 -> 2 -> 3 -> 4
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Uncomment the line below to create a cycle: 4 -> 2
    // fourth->next = second;

    // Checking if the list has a cycle
    if (hasCycle(head))
        cout << "The linked list has a cycle." << endl;
    else
        cout << "The linked list does not have a cycle." << endl;

    // Clean up memory (only valid if there's no cycle)
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
