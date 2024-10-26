#include <bits/stdc++.h>
using namespace std;

/*
   A list is a sequence container that allows non-contiguous memory allocation.
   It supports efficient insertion and deletion of elements from both ends (front and back).
   Unlike vectors, lists are implemented as doubly-linked lists, meaning elements are 
   linked using pointers, allowing for faster insertions and deletions but slower access.
*/

void explainList() {
   list<int> ls; // Initializing an empty list of integers

   ls.push_back(2); // Adds 2 to the end of the list -> {2}
   ls.emplace_back(4); // Adds 4 to the end of the list -> {2, 4}

   ls.push_front(5); // Adds 5 to the front of the list -> {5, 2, 4}
   ls.emplace_front(3); // Adds 3 to the front of the list -> {3, 5, 2, 4}

   // The rest of the functions are similar to those in vector
   // For example:
   ls.pop_back(); // Removes the last element -> {3, 5, 2}
   ls.pop_front(); // Removes the first element -> {5, 2}

   // Printing elements to verify
   for (auto it : ls) {  //for each element in ls, set it to that element’s value
       cout << it << " ";
   }
   cout << endl;
}

int main() {
   explainList(); // Calling the function to demonstrate list operations
   return 0;
}
