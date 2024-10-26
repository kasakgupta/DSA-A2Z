#include <bits/stdc++.h>
using namespace std;

/*
   A set is a container that stores unique elements in sorted order by default.
   Sets do not allow duplicate values and support efficient operations like insertion, deletion, and searching.
   - `insert()`: Adds an element to the set.
   - `find()`: Searches for an element, returns an iterator.
   - `erase()`: Removes an element by value or iterator.
   - `lower_bound()` and `upper_bound()`: Find the closest elements within the set.
*/

void explainSet() {  // Stores elements in sorted, unique order
   set<int> st;

   // Adding elements to the set
   st.insert(1);       // Insert 1 -> Set: {1}
   st.emplace(2);      // Insert 2 -> Set: {1, 2}
   st.insert(3);       // Insert 3 -> Set: {1, 2, 3}
   st.insert(1);       // Duplicate insert; set remains {1, 2, 3}

   cout << "Set elements: ";
   for (auto it : st) cout << it << " "; // Expected output: 1 2 3
   cout << endl;

   // Searching for elements
   auto it = st.find(3);  // Finds 3, returns iterator pointing to 3
   cout << "Found element 3 in set: " << *it << endl;
   
   it = st.find(5);       // 5 is not present, returns st.end()
   if (it == st.end())
       cout << "Element 5 not found in set." << endl;

   // Deleting elements
   st.erase(2);           // Erases 2, set becomes {1, 3}
   cout << "Set after erasing 2: ";
   for (auto el : st) cout << el << " "; // Expected output: 1 3
   cout << endl;

   // Counting occurrences (always 1 or 0 in a set)
   int cnt = st.count(1); 
   cout << "Count of element 1 in set: " << cnt << endl; // Output: 1

   // Lower and upper bounds
   it = st.lower_bound(1); // Points to element >= 1
   cout << "Lower bound of 1 in set: " << *it << endl; // Output: 1

   it = st.upper_bound(1); // Points to element > 1
   cout << "Upper bound of 1 in set: " << *it << endl; // Output: 3
}

/*
   A multiset is similar to a set but allows duplicate elements.
   Elements are stored in sorted order, and multiple occurrences of the same element are allowed.
   - `insert()`: Adds an element to the multiset.
   - `count()`: Counts the occurrences of a particular element.
   - `erase()`: Removes all instances or a specific instance of an element.
*/

void explainMultiSet() { // Stores elements in sorted order, allows duplicates
   multiset<int> ms;

   // Adding elements to the multiset
   ms.insert(1);       // Insert 1 -> Multiset: {1}
   ms.insert(1);       // Insert another 1 -> Multiset: {1, 1}
   ms.insert(1);       // Insert another 1 -> Multiset: {1, 1, 1}

   cout << "Multiset elements: ";
   for (auto el : ms) cout << el << " "; // Expected output: 1 1 1
   cout << endl;

   // Counting occurrences
   int cnt = ms.count(1); 
   cout << "Count of element 1 in multiset: " << cnt << endl; // Output: 3

   // Erase all instances of an element
   ms.erase(1); 
   cout << "Multiset after erasing all 1s: ";
   for (auto el : ms) cout << el << " "; // Expected output: (empty)
   cout << endl;

   // Adding elements again for specific erasure examples
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);

   // Erase a single instance of an element
   ms.erase(ms.find(1));  // Erases one instance of 1, multiset becomes {1, 1}
   cout << "Multiset after erasing one 1: ";
   for (auto el : ms) cout << el << " "; // Expected output: 1 1
   cout << endl;
}

/*
   An unordered set stores unique elements but in no particular order.
   It provides average constant time complexity for insertion, deletion, and search.
   - `insert()`: Adds an element to the unordered set.
   - `find()`: Searches for an element.
   - Operations are generally faster than set due to the hash table implementation.
*/

void explainUnorderedSet() { // Stores elements in unsorted, unique order
   unordered_set<int> st;

   // Adding elements to the unordered set
   st.insert(1);
   st.insert(2);
   st.insert(3);
   st.insert(1);  // Duplicate insert; unordered set remains unique

   cout << "Unordered set elements: ";
   for (auto el : st) cout << el << " "; // Order is unspecified
   cout << endl;
}

int main() {
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    return 0;
}
