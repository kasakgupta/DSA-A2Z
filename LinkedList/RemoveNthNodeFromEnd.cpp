#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to remove the nth node from end of list
ListNode* removeNthFromEnd(ListNode* head, int n) {
    // Dummy node simplifies edge cases like deleting the first node
    ListNode* temp = new ListNode(0);
    temp->next = head;

    ListNode* fast = temp;
    ListNode* slow = temp;

    // Move fast pointer n+1 steps ahead to create a gap of n between slow and fast
    for (int i = 0; i <= n; i++) {
        fast = fast->next;
    }

    // Move both pointers until fast reaches the end
    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    // slow is now before the node to delete
    ListNode* nodeToDelete = slow->next;
    slow->next = slow->next->next;

    // Free memory of the deleted node (good practice)
    delete nodeToDelete;

    // Return the updated list starting from original head
    return temp->next;
}

// Utility: Create linked list from vector
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (int i = 1; i < vals.size(); i++) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

// Utility: Print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// 🚀 Driver Code
int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    int n = 2;

    ListNode* head = createList(input);

    cout << "Original List: ";
    printList(head);

    head = removeNthFromEnd(head, n);

    cout << "After Removing " << n << "th Node From End: ";
    printList(head);

    return 0;
}
