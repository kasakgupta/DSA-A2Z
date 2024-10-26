#include <bits/stdc++.h>
using namespace std;

/*
   A deque (double-ended queue) is a sequence container that allows efficient 
   insertion and deletion of elements from both the front and the back.
   Unlike vectors, deques are not restricted to insertions or deletions only 
   at the end. They are implemented as a sequence of blocks, allowing dynamic 
   resizing in both directions, making them useful for scenarios where 
   elements need to be added or removed from both ends frequently.
*/

void explainDeque() {
   deque<int> dq; // Declaring an empty deque of integers

   dq.push_back(2);       // Adds 2 to the back of the deque -> {2}
   dq.emplace_back(4);    // Adds 4 to the back of the deque (similar to push_back, but more efficient) -> {2, 4}

   dq.push_front(5);      // Adds 5 to the front of the deque -> {5, 2, 4}
   dq.emplace_front(3);   // Adds 3 to the front of the deque -> {3, 5, 2, 4}

   dq.pop_back();         // Removes the last element -> {3, 5, 2}
   dq.pop_front();        // Removes the first element -> {5, 2}

   cout << "Back element: " << dq.back() << endl;  // Accesses the last element in the deque
   cout << "Front element: " << dq.front() << endl; // Accesses the first element in the deque

   // Additional operations for deque are similar to those in vector
}

int main() {
   explainDeque(); // Calling the function to demonstrate deque operations
   return 0;
}
