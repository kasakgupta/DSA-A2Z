#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to print the middle element of the linked list
void printMiddle(Node* head) {
    Node* slow = head;  // Slow pointer starts at the head
    Node* fast = head;  // Fast pointer also starts at the head

    // Traverse the list
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;           // Move slow pointer one step
        fast = fast->next->next;     // Move fast pointer two steps
    }

    // Slow pointer is now pointing to the middle element
    cout << "Middle element: " << slow->data << endl;
}

// Function to insert a node at the beginning (for testing)
void push(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Main function to test the code
int main() {
    Node* head = nullptr;

    // Creating a linked list: 1->2->3->4->5
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printMiddle(head);  // Output should be "Middle element: 3"

    return 0;
}
