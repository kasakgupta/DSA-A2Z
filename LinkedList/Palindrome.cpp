#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to reverse a linked list
ListNode* reverse(ListNode* head) {
    ListNode* temp = head; // Pointer to traverse the list
    ListNode* prev = NULL; // Pointer to store the previous node
    while (temp != NULL) {
        ListNode* front = temp->next; // Store the next node
        temp->next = prev;           // Reverse the current node's link
        prev = temp;                 // Move the previous pointer ahead
        temp = front;                // Move the temp pointer ahead
    }
    return prev; // New head of the reversed list
}

// Function to check if the linked list is a palindrome
bool isPalindrome(ListNode* head) {
    ListNode* slow = head; // Slow pointer for middle detection
    ListNode* fast = head; // Fast pointer for middle detection

    // Find the middle of the list
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    slow = reverse(slow);

    // Compare the two halves
    ListNode* temp = head;
    while (slow != NULL) {
        if (temp->val != slow->val)
            return false; // Mismatch found, not a palindrome
        temp = temp->next;
        slow = slow->next;
    }
    return true; // List is a palindrome
}

// Driver code to test the isPalindrome function
int main() {
    // Create a sample linked list: 1 -> 2 -> 2 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    // Check if the linked list is a palindrome
    if (isPalindrome(head))
        cout << "The linked list is a palindrome." << endl;
    else
        cout << "The linked list is not a palindrome." << endl;

    // Clean up memory
    while (head != NULL) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
