#include <bits/stdc++.h>
using namespace std;

/*
   Vectors are dynamic arrays in C++ that can grow or shrink in size as needed.
   They allow random access to elements, support efficient insertion and deletion
   at the end, and automatically manage memory as the size changes. Unlike arrays,
   vectors can adjust their capacity dynamically, making them a flexible choice 
   for storing a collection of elements.
*/

void explainVector() {
    vector<int> v; // Declaring an empty vector of integers

    v.push_back(1);       // Adding 1 to the end of the vector
    v.emplace_back(2);    // Adding 2 to the end of the vector (similar to push_back, but more efficient)

    // Initializing iterator to the beginning of the vector
    vector<int>::iterator it = v.begin();
    it++; // Moving iterator to the second element
    cout << *(it) << " "; // Printing the element pointed by the iterator

    // Iterating through the vector using an iterator and printing all elements
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Using 'auto' to simplify iterator declaration in the loop
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Range-based for loop to print all elements
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // Erase operations
    v.erase(v.begin() + 1);                 // Erasing the element at the second position
    // Now v only has one element (1)

    // Insertion operations
    vector<int> v2(2, 100);          // Initializing vector with two elements, both set to 100 -> {100, 100}
    v2.insert(v2.begin(), 300);      // Inserting 300 at the beginning -> {300, 100, 100}
    v2.insert(v2.begin() + 1, 2, 10); // Inserting two 10s starting at index 1 -> {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);          // Creating a vector with two elements, both set to 50 -> {50, 50}
    v2.insert(v2.begin(), copy.begin(), copy.end()); // Inserting all elements of 'copy' at the beginning

    // Printing all elements in v2 after insertions
    for (auto it : v2) {
        cout << it << " ";
    }
    cout << endl;

    cout << v2.size() << " "; // Printing the size of the vector
    v2.pop_back(); // Removing the last element
    cout << v2.size() << endl; // Printing size after pop

    // Swapping contents of v and v2, then printing both vectors
    v.swap(v2);

    // Printing v after swap (should now contain elements from v2)
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // Clearing all elements from v
    v.clear();

    // Checking if v is empty
    cout << v.empty() << endl;
}

int main() {
    explainVector(); // Calling the function to explain vector operations
    return 0;
}

