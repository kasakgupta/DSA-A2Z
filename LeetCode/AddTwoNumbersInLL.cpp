#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0) : val(x), next(NULL) {}
};

// Function to add two numbers represented as linked lists
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    // Dummy node to simplify result list construction
    ListNode* dummy = new ListNode();
    ListNode* temp = dummy;

    int carry = 0;

    // Traverse until both lists and carry are processed
    while (l1 != NULL || l2 != NULL || carry) {
        int sum = 0;

        // Add l1's value if exists
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        // Add l2's value if exists
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        // Add carry from previous step
        sum += carry;

        // Update carry for next iteration
        carry = sum / 10;

        // Create new node with the single digit (remainder after mod 10)
        ListNode* node = new ListNode(sum % 10);

        // Link new node to result list
        temp->next = node;
        temp = temp->next;
    }

    // Return the actual head (skipping dummy node)
    return dummy->next;
}

// Helper function to create linked list from vector
ListNode* createList(vector<int> nums) {
    ListNode* dummy = new ListNode();
    ListNode* temp = dummy;
    for (int x : nums) {
        temp->next = new ListNode(x);
        temp = temp->next;
    }
    return dummy->next;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Driver code
int main() {
    // Example: number 342 is represented as [2 -> 4 -> 3]
    vector<int> num1 = {2, 4, 3};  // represents 342
    vector<int> num2 = {5, 6, 4};  // represents 465

    // Create linked lists
    ListNode* l1 = createList(num1);
    ListNode* l2 = createList(num2);

    cout << "Input 1: ";
    printList(l1);
    cout << "Input 2: ";
    printList(l2);

    // Add two numbers
    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Output (sum): ";
    printList(result); // Expected: 7 -> 0 -> 8 (represents 807)

    return 0;
}
