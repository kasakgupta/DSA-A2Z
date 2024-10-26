#include <bits/stdc++.h>
using namespace std;

/*
   A queue is a FIFO (First In, First Out) data structure where elements are added 
   at the back and removed from the front. Common queue operations include:
   - `push()`: Adds an element to the back of the queue
   - `front()`: Accesses the element at the front of the queue
   - `back()`: Accesses the element at the back of the queue
   - `pop()`: Removes the element from the front of the queue
   - `size()`, `empty()`, and `swap()`: Similar to stack and vector operations
   Queues are useful for handling tasks in a sequential order, such as task scheduling.
*/

void explainQueue() {
   queue<int> q; // Declaring an empty queue of integers

   // Adding elements to the queue
   q.push(1); // Queue: {1}
   q.push(2); // Queue: {1, 2}

   // Modifying the back element
   q.back() += 5; // Adds 5 to the last element (back), so queue becomes {1, 7}
   cout << "Back element after modification: " << q.back() << endl; // Output: 7

   // Accessing the front element of the queue
   cout << "Front element: " << q.front() << endl; // Output: 1

   // Removing the front element
   q.pop(); // Removes 1, queue becomes {7}
   cout << "Front element after pop: " << q.front() << endl; // Output: 7

   // Checking the size of the queue
   cout << "Queue size: " << q.size() << endl; // Output: 1

   // Checking if the queue is empty
   cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Output: No
}

int main() {
    explainQueue(); // Calling the function to demonstrate queue operations
    return 0;
}
