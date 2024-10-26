#include <bits/stdc++.h>
using namespace std;

/*
   A priority queue is a container that provides efficient access to the largest 
   (or smallest, depending on the type) element in the container. The default 
   priority queue in C++ is a **max-heap**, meaning it gives priority to the 
   largest element.
   
   Operations include:
   - `push()`: Adds an element to the priority queue
   - `top()`: Returns the highest-priority element
   - `pop()`: Removes the highest-priority element
   - A **min-heap** can be implemented by using `greater<int>` as the comparator, 
     making it prioritize the smallest element at the top.
*/

void explainPQ() {
   // Declaring a max-heap priority queue (default behavior)
   priority_queue<int> pq; 

   // Adding elements to the max-heap priority queue
   pq.push(2);
   pq.push(10);
   pq.push(5);
   pq.push(6); // After all pushes, pq holds elements in descending order by priority: {10, 6, 5, 2}

   cout << "Top element in max-heap (highest priority): " << pq.top() << endl; // Output: 10

   // Removing the top element (highest priority)
   pq.pop(); // After pop, pq now holds: {6, 5, 2}
   cout << "Top element after pop in max-heap: " << pq.top() << endl; // Output: 6

   // Declaring a min-heap priority queue
   priority_queue<int, vector<int>, greater<int>> pq1; 

   // Adding elements to the min-heap priority queue
   pq1.push(5);
   pq1.push(2);
   pq1.push(8);
   pq1.emplace(10); // After all pushes, pq1 holds elements in ascending order by priority: {2, 5, 8, 10}

   cout << "Top element in min-heap (lowest priority): " << pq1.top() << endl; // Output: 2
}

int main() {
    explainPQ(); // Calling the function to demonstrate priority queue operations
    return 0;
}
