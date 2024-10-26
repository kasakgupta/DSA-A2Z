#include <bits/stdc++.h>
using namespace std;

/*
   A stack is a LIFO (Last In, First Out) data structure where elements are added 
   and removed from the top. Common stack operations include:
   - `push()`: Adds an element to the top
   - `pop()`: Removes the top element
   - `top()`: Returns the top element
   - `size()`: Returns the number of elements in the stack
   - `empty()`: Checks if the stack is empty
   Stacks are useful in algorithms that need to reverse items or maintain a history of operations.
*/

void explainStack() {
   stack<int> st; // Declaring an empty stack of integers

   // Pushing elements onto the stack
   st.push(1);   // Stack: {1}
   st.push(2);   // Stack: {1, 2}
   st.push(3);   // Stack: {1, 2, 3}
   st.emplace(5); // Stack: {1, 2, 3, 5} - emplace is similar to push but may be more efficient

   // Accessing the top element of the stack
   cout << "Top element: " << st.top() << endl; // Output: 5

   // Removing the top element from the stack
   st.pop(); // Stack after pop: {1, 2, 3}
   cout << "Top element after pop: " << st.top() << endl; // Output: 3

   // Checking the size of the stack
   cout << "Stack size: " << st.size() << endl; // Output: 3

   // Checking if the stack is empty
   cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl; // Output: No

   // Swapping contents of two stacks
   stack<int> st1, st2;
   st1.push(10); // st1: {10}
   st2.push(20); // st2: {20}
   st1.swap(st2); // st1 becomes {20}, st2 becomes {10}

   cout << "Top element of st1 after swap: " << st1.top() << endl; // Output: 20
   cout << "Top element of st2 after swap: " << st2.top() << endl; // Output: 10
}

int main() {
    explainStack(); // Calling the function to demonstrate stack operations
    return 0;
}
