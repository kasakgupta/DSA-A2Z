#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to get the intersection node of two linked lists
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    // If either list is empty, no intersection possible
    if (headA == NULL || headB == NULL)
        return NULL;

    ListNode* a = headA;
    ListNode* b = headB;

    // Traverse both lists
    // When a pointer reaches the end of a list, redirect it to the head of the other list
    // If there is an intersection, they will eventually meet at the intersection node
    // If no intersection, both will become NULL after same number of steps
    while (a != b) {
        a = (a == NULL) ? headB : a->next;
        b = (b == NULL) ? headA : b->next;
    }

    // Either intersection node or NULL
    return a;
}

// ---------------- DRIVER CODE -----------------
int main() {
    // Creating two linked lists that intersect:
    // List A: 1 -> 2 \
    //                  -> 8 -> 9
    // List B:    3 -> 4/
    
    // Common part
    ListNode* common = new ListNode(8);
    common->next = new ListNode(9);

    // List A
    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = common;

    // List B
    ListNode* headB = new ListNode(3);
    headB->next = new ListNode(4);
    headB->next->next = common;

    // Find intersection
    ListNode* intersection = getIntersectionNode(headA, headB);

    if (intersection != NULL)
        cout << "Intersection Node Value: " << intersection->val << endl;
    else
        cout << "No Intersection" << endl;

    return 0;
}
